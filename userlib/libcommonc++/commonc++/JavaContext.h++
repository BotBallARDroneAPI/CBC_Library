/* ---------------------------------------------------------------------------
   commonc++ - A C++ Common Class Library
   Copyright (C) 2005-2009  Mark A Lindner

   This file is part of commonc++.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   ---------------------------------------------------------------------------
*/

#ifndef __ccxx_JavaContext_h
#define __ccxx_JavaContext_h

#include <commonc++/Common.h++>
#include <commonc++/Exception.h++>
#include <commonc++/String.h++>
#include <commonc++/JavaException.h++>

#include <jni.h>
#include <cstdarg>

namespace ccxx {

class JavaVirtualMachine; // fwd decl

/** A structure representing a Java native method.
 *
 * @author Mark Lindner
 */

struct JavaNativeMethod
{
  /** The signature of the native method. */
  String signature;

  /** A pointer to the C function that implements the native method. */
  void *function;
};

/**
 *
 * When the <i>Invocation Interface</i> is being used (that is, when
 * a C++ program calls into Java code), the
 * <code>getContext()</code> method of the JavaVirtualMachine class
 * is used to obtain an appropriate JavaContext object.  In C++ code
 * that implements a Java native method, on the other hand, a
 * JavaContext instance must be explicitly constructed from the
 * <code>JNIEnv</code> pointer that was passed into the native
 * function.
 *
 * This is a lightweight object that should typically be stack-allocated,
 * and may be passed and copied by value.
 *
 * @author Mark Lindner
 */

class COMMONCPPJVM_API JavaContext
{
  friend class JavaVirtualMachine;

  public:

  /** Construct a new JavaContext for the given JNI environment pointer.
   *
   * @param env The JNI environment pointer.
   */

  JavaContext(JNIEnv *env);

  /** Destructor. */

  ~JavaContext();

  /** Encode a datatype into a JNI datatype descriptor. For example,
   * <tt>"String[]"</tt> is encoded as <tt>"[Ljava/lang/String;"</tt>.
   *
   * @param type The datatype.
   * @return The encoding of the datatype.
   */

  static String encodeType(const String &type);

  /** Parse a method signature into a method name, a JNI method descriptor,
   * and a static flag. For example, <tt>"static int foo(int, char[])"</tt>
   * results in a method name of <tt>"foo"</tt>, a JNI method descriptor
   * of <tt>"(I[C)I"</tt>, and a static flag of <b>true</b>.
   *
   * @param signature The signature to parse.
   * @param method The string in which to place the method name.
   * @param descriptor The string in which to place the JNI method
   * descriptor.
   * @param isStatic The flag in which to store the static flag
   * (<b>true</b> if a <tt>"static"</tt> qualifier is present, <b>false</b>
   * otherwise).
   * @return <b>true</b> if the signature was parsed successfully,
   * <b>false</b> otherwise.
   */

  static bool parseSignature(const String &signature, String& method,
                             String& descriptor, bool &isStatic);

  /** Look up a class by name. The class name must be fully qualified (for
   * example, <tt>"java.util.Vector"</tt>), with the following classes as
   * the only exceptions: <tt>String</tt>, <tt>Object</tt>, <tt>Class</tt>.
   *
   * @param name The name of the class.
   * @return A reference to the Java class.
   * @throw JavaException If the class was not found.
   */

  jclass findClass(const String &name) throw(JavaException);

  /** Look up a method or constructor by signature. The signature
   * must be specified in Java source code form, without parameter
   * names, for example <tt>"int foo(int, byte[])"</tt> or
   * <tt>"static boolean bar(java.lang.Vector, int, String)"</tt>, or
   * <tt>"(int, String, String)"</tt> (a constructor).
   *
   * @param clazz The Java class.
   * @param signature The signature of the method.
   * @return A reference to the method.
   * @throw JavaException If the method was not found.
   */

  jmethodID findMethod(jclass clazz, const String &signature)
    throw(JavaException);

  /** Instantiate a new Java object.
   *
   * @param clazz The class.
   * @param constructor The constructor to invoke.
   * @throw JavaException If the constructor throws an exception, or if
   * an invocation error occurs.
   */

  jobject createObject(jclass clazz, jmethodID constructor, ...)
    throw(JavaException);

  /** Instantiate a new Java object.
   *
   * @param clazz The class.
   * @param constructor The constructor to invoke.
   * @param args The arguments to pass to the constructor.
   * @throw JavaException If the constructor throws an exception, or if
   * an invocation error occurs.
   */

  jobject createObjectVA(jclass clazz, jmethodID constructor, va_list args)
    throw(JavaException);

  /** Call a Java method that returns void.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  void callVoidMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a Java Object.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jobject callObjectMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a java.lang.String.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value, encoded as a String.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  String callStringMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a java.lang.String.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value, encoded as a WString.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  WString callWStringMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a boolean.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jboolean callBooleanMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a byte.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jbyte callByteMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a char.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jchar callCharMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a short.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jshort callShortMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns an int.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jint callIntMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a long.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jlong callLongMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a float.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jfloat callFloatMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a Java method that returns a double.
   *
   * @param object The object instance.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jdouble callDoubleMethod(jobject object, jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns void.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  void callNonvirtualVoidMethod(jobject object, jclass clazz,
                                jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns a Java object.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jobject callNonvirtualObjectMethod(jobject object, jclass clazz,
                                     jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns a boolean.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jboolean callNonvirtualBooleanMethod(jobject object, jclass clazz,
                                       jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns a byte.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jbyte callNonvirtualByteMethod(jobject object, jclass clazz,
                                 jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns a char.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jchar callNonvirtualCharMethod(jobject object, jclass clazz,
                                 jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns a short.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jshort callNonvirtualShortMethod(jobject object, jclass clazz,
                                   jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns an int.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jint callNonvirtualIntMethod(jobject object, jclass clazz,
                               jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns a long.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jlong callNonvirtualLongMethod(jobject object, jclass clazz,
                                 jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns a float.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jfloat callNonvirtualFloatMethod(jobject object, jclass clazz,
                                   jmethodID method, ...)
    throw(JavaException);

  /** Call a non-virtual Java method that returns a double.
   *
   * @param object The object instance.
   * @param clazz The method's defining class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jdouble callNonvirtualDoubleMethod(jobject object, jclass clazz,
                                     jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns void.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  void callStaticVoidMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a Java Object.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jobject callStaticObjectMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a java.lang.String
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value, as a String.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  String callStaticStringMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a java.lang.String
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value, as a WString.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  WString callStaticWStringMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a boolean.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jboolean callStaticBooleanMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a byte.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jbyte callStaticByteMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a char.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jchar callStaticCharMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a short.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jshort callStaticShortMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns an int.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jint callStaticIntMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a long.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jlong callStaticLongMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a float.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jfloat callStaticFloatMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Call a static Java method that returns a double.
   *
   * @param clazz The Java class.
   * @param method The method to call.
   * @return The method's return value.
   * @throw JavaException If the called method throws an exception, or if
   * an invocation error occurs.
   */

  jdouble callStaticDoubleMethod(jclass clazz, jmethodID method, ...)
    throw(JavaException);

  /** Determine if a Java exception has been thrown in the current thread.
   *
   * @param verbose If <b>true</b>, print the exception stack trace
   * to standard error.
   * @return <b>true</b> if an exception has been thrown, <b>false</b>
   * otherwise.
   */

  bool checkException(bool verbose = false);

  /** Clear any pending Java exception that is currently being thrown
   * in the current thread.
   */

  void clearException() throw();

  /** Get the pending Java exception, if one is currently being thrown
   * in the current thread.
   *
   * @return The exception object, or <b>NULL</b> if none.
   */

  jthrowable getException() throw();

  /** Throw a Java exception.
   *
   * @param exception The class of the exception.
   * @param message The exception message.
   * @return <b>true</b> on success, <b>false</b> otherwise.
   */

  bool throwException(jclass exception, const String &message);

  /** Look up a field by signature. The signature must be specified in
   * Java source code form, for example <tt>"String name"</tt> or
   * <tt>"static int foo"</tt>.
   *
   * @param clazz The Java class.
   * @param signature The signature of the field.
   * @return A reference to the field.
   * @throw JavaException If the field was not found.
   */

  jfieldID findField(jclass clazz, const String &signature)
    throw(JavaException);

  /** Get the value of an Object field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jobject getObjectField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of an boolean field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jboolean getBooleanField(jobject object, jfieldID field)
    throw(JavaException);

  /** Get the value of a byte field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jbyte getByteField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of a char field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jchar getCharField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of a short field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jshort getShortField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of an int field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jint getIntField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of a long field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jlong getLongField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of a float field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jfloat getFloatField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of a double field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jdouble getDoubleField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of a java.lang.String field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field, encoded as a String.
   * @throw JavaException If an error occurs.
   */

  String getStringField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of a java.lang.String field in an Object.
   *
   * @param object The object.
   * @param field The field ID.
   * @return The value of the field, encoded as a WString.
   * @throw JavaException If an error occurs.
   */

  WString getWStringField(jobject object, jfieldID field) throw(JavaException);

  /** Get the value of a static Object field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jobject getStaticObjectField(jclass clazz, jfieldID field)
    throw(JavaException);

  /** Get the value of a static boolean field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jboolean getStaticBooleanField(jclass clazz, jfieldID field)
    throw(JavaException);

  /** Get the value of a static byte field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jbyte getStaticByteField(jclass clazz, jfieldID field) throw(JavaException);

  /** Get the value of a static char field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jchar getStaticCharField(jclass clazz, jfieldID field) throw(JavaException);

  /** Get the value of a static short field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jshort getStaticShortField(jclass clazz, jfieldID field)
    throw(JavaException);

  /** Get the value of a static int field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jint getStaticIntField(jclass clazz, jfieldID field) throw(JavaException);

  /** Get the value of a static long field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jlong getStaticLongField(jclass clazz, jfieldID field) throw(JavaException);

  /** Get the value of a static float field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jfloat getStaticFloatField(jclass clazz, jfieldID field)
    throw(JavaException);

  /** Get the value of a static double field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field.
   * @throw JavaException If an error occurs.
   */

  jdouble getStaticDoubleField(jclass clazz, jfieldID field)
    throw(JavaException);

  /** Get the value of a static String field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field as a String.
   * @throw JavaException If an error occurs.
   */

  String getStaticStringField(jclass clazz, jfieldID field)
    throw(JavaException);

  /** Get the value of a static String field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @return The value of the field as a WString.
   * @throw JavaException If an error occurs.
   */

  WString getStaticWStringField(jclass clazz, jfieldID field)
    throw(JavaException);

  /** Set the value of an Object field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setObjectField(jobject object, jfieldID field, jobject value)
    throw(JavaException);

  /** Set the value of a boolean field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setBooleanField(jobject object, jfieldID field, jboolean value)
    throw(JavaException);

  /** Set the value of a byte field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setByteField(jobject object, jfieldID field, jbyte value)
    throw(JavaException);

  /** Set the value of a char field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setCharField(jobject object, jfieldID field, jchar value)
    throw(JavaException);

  /** Set the value of a short field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setShortField(jobject object, jfieldID field, jshort value)
    throw(JavaException);

  /** Set the value of an int field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setIntField(jobject object, jfieldID field, jint value)
    throw(JavaException);

  /** Set the value of a long field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setLongField(jobject object, jfieldID field, jlong value)
    throw(JavaException);

  /** Set the value of a float field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setFloatField(jobject object, jfieldID field, jfloat value)
    throw(JavaException);

  /** Set the value of a double field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setDoubleField(jobject object, jfieldID field, jdouble value)
    throw(JavaException);

  /** Set the value of a java.lang.String field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStringField(jobject object, jfieldID field, const String &value)
    throw(JavaException);

  /** Set the value of a java.lang.String field in an object.
   *
   * @param object The object.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setWStringField(jobject object, jfieldID field, const WString &value)
    throw(JavaException);

  /** Set the value of a static Object field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticObjectField(jclass clazz, jfieldID field, jobject value)
    throw(JavaException);

  /** Set the value of a static boolean field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticBooleanField(jclass clazz, jfieldID field, jboolean value)
    throw(JavaException);

  /** Set the value of a static byte field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticByteField(jclass clazz, jfieldID field, jbyte value)
    throw(JavaException);

  /** Set the value of a static char field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticCharField(jclass clazz, jfieldID field, jchar value)
    throw(JavaException);

  /** Set the value of a static short field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticShortField(jclass clazz, jfieldID field, jshort value)
    throw(JavaException);

  /** Set the value of a static int field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticIntField(jclass clazz, jfieldID field, jint value)
    throw(JavaException);

  /** Set the value of a static long field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticLongField(jclass clazz, jfieldID field, jlong value)
    throw(JavaException);

  /** Set the value of a static float field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticFloatField(jclass clazz, jfieldID field, jfloat value)
    throw(JavaException);

  /** Set the value of a static double field in a class.
   *
   * @param clazz The class.
   * @param field The field ID.
   * @param value The new value for the field.
   * @throw JavaException If an error occurs.
   */

  void setStaticDoubleField(jclass clazz, jfieldID field, jdouble value)
    throw(JavaException);

  /** Create a Java byte array.
   *
   * @param length The length of the array.
   * @return The array.
   * @throw JavaException If an error occurs.
   */

  jbyteArray createByteArray(uint_t length)
    throw(JavaException);

  /** Set an element of a Java object array.
   *
   * @param array The array.
   * @param index The index of the element.
   * @param value The new value for the element.
   * @throw JavaException If an error occurs.
   */

  void setObjectArrayElement(jobjectArray array, uint_t index, jobject value)
    throw(JavaException);

  /** Get an element of a Java object array.
   *
   * @param array The array.
   * @param index The index of the element.
   * @return The value of the element.
   * @throw JavaException If an error occurs.
   */

  jobject getObjectArrayElement(jobjectArray array, uint_t index)
    throw(JavaException);

  /** Get the length of a Java array.
   *
   * @param array The array.
   * @return The number of elements in the array.
   * @throw JavaException If an error occurs.
   */

  uint_t getArrayLength(jarray array) throw(JavaException);

  /** Create a new Java DirectByteBuffer.
   *
   * @param buf A pointer to the natively-allocated memory block for the
   * buffer.
   * @param size The size of the memory block, in bytes.
   * @return The newly created DirectByteBuffer object.
   * @throw JavaException If an error occurs.
   */

  jobject createDirectByteBuffer(byte_t *buf, size_t size)
    throw(JavaException);

  /** Get a pointer to and the size of the memory region occupied by
   * a Java DirectBuffer.
   *
   * @param buf The DirectBuffer object.
   * @param size The variable in which to store the size of the memory
   * region.
   * @return A pointer to the beginning of the memory region, or <b>NULL</b>
   * on failure.
   */

  void *getDirectBufferRegion(jobject buf, uint64_t &size);

  /** Create a local reference to a Java object.
   *
   * @param object The object.
   * @return The new local reference.
   * @throw JavaException If an error occurs.
   */

  jobject createLocalRef(jobject object) throw(JavaException);

  /** Delete a local reference.
   *
   * @param ref The reference.
   */

  void deleteLocalRef(jobject ref);

  /** Reserve space for local references.
   *
   * @param capacity The number of local references to reserve capacity for.
   * @throw JavaException If an error occurs.
   */

  void ensureLocalCapacity(size_t capacity) throw(JavaException);

  /** Create a global reference to a Java object.
   *
   * @param object The object.
   * @return The new global reference.
   * @throw JavaException If an error occurs.
   */

  jobject createGlobalRef(jobject object) throw(JavaException);

  /** Delete a local reference.
   *
   * @param ref The reference.
   */

  void deleteGlobalRef(jobject ref);

  /** Decode a java.lang.String into a String.
   *
   * @param str The Java string.
   * @return The decoded String.
   * @throw JavaException If an error occurs.
   */

  String decodeString(jstring str) throw(JavaException);

  /** Decode a java.lang.String into a WString.
   *
   * @param str The Java string.
   * @return The decoded WString.
   * @throw JavaException If an error occurs.
   */

  WString decodeWString(jstring str) throw(JavaException);

  /** Encode a String into a java.lang.String.
   *
   * @param str The String.
   * @return The encoded Java string.
   * @throw JavaException If an error occurs.
   */

  jstring encodeString(const String &str) throw(JavaException);

  /** Encode a WString into a java.lang.String.
   *
   * @param str The String.
   * @return The encoded Java string.
   * @throw JavaException If an error occurs.
   */

  jstring encodeWString(const WString &str) throw(JavaException);

  /** Get the length of a Java string.
   *
   * @param str The string.
   * @return The length of the string.
   */

  size_t getStringLength(jstring str);

  /** Obtain a pointer to the body of a primitive Java array. This
   * data may be used and modified safely (without any intervening
   * JNI calls) until a matching call to <b>releaseArrayData()</b>.
   *
   * @param array The primitive array.
   * @param length A parameter in which to store the length of the buffer
   * containing the array data.
   * @param isCopy If not NULL, a pointer in which to store a flag
   * indicating whether the returned buffer is a copy of the array
   * data.
   * @return A pointer to a buffer containing the array data.
   * @throw JavaException If an error occurs.
   */

  void *getArrayData(jarray array, size_t &length, bool *isCopy = NULL)
    throw(JavaException);

  /** Release the buffer returned by <b>getArrayData()</b>. The data will
   * be copied back into the original array, if necessary.
   *
   * @param array The primitive array.
   * @param data The buffer containing the array data.
   */

  void releaseArrayData(jarray array, void *data);

  /** Create a Java byte array.
   *
   * @param data The data to copy into the array.
   * @param length The length of the array.
   * @return The newly created array.
   * @throw JavaException If an error occurs.
   */

  jbyteArray createByteArray(const byte_t *data, size_t length)
    throw(JavaException);

  /** Create a Java object array.
   *
   * @param type The array type.
   * @param length The length of the array.
   * @param initialValue An optional initial value to store into every
   * element in the new array.
   * @return The newly created array.
   * @throw JavaException If an error occurs.
   */

  jarray createObjectArray(jclass type, size_t length,
                           jobject initialValue = NULL)
    throw(JavaException);

  /** Test two Java object references for equality.
   *
   * @param object1 The first object reference.
   * @param object2 The second object reference.
   * @return <b>true</b> if the references both refer to the same object,
   * <b>false</b> otherwise.
   */

  bool isSameObject(jobject object1, jobject object2);

  /** Test if a Java object is an instance of an interface or another
   * class.
   *
   * @param object The object.
   * @param clazz The class or interface.
   * @return <b>true</b> if the object is an instance of the other class or
   * interface, <b>false</b> otherwise.
   */

  bool isInstanceOf(jobject object, jclass clazz);

  /** Test if an object of a class or interface can be safely cast to
   * a class or interface of another class.
   *
   * @param clazz1 The class of the object to be cast.
   * @param clazz2 The class of the cast.
   * @return <b>true</b> if the cast is valid, <b>false</b> otherwise.
   */

  bool isAssignableFrom(jclass clazz1, jclass clazz2);

  /** Get the class for a Java object.
   *
   * @param object The object.
   * @return The class.
   */

  jclass getClassForObject(jobject object);

  /** Get the superclass for a Java class.
   *
   * @param clazz The class.
   * @return The superclass, or NULL if the class is an interface or
   * if it is <code>java.lang.Object</code>.
   */

  jclass getSuperclass(jclass clazz);

  /** Enter the monitor associated with a Java object. The method blocks
   * if another thread is currently in the monitor.
   *
   * @param object The object.
   * @throw JavaException If an error occurs.
   */

  void enterMonitor(jobject object) throw(JavaException);

  /** Exit the monitor associated with a Java object.
   *
   * @param object The object.
   * @throw JavaException If an error occurs.
   */

  void exitMonitor(jobject object) throw(JavaException);

  /** Register native methods for a Java class.
   *
   * @param clazz The class.
   * @param methods An array of native methods to register. The last element
   * in the array must have the <b>function</b> field set to <b>NULL</b>.
   * @throw JavaException If an error occurs.
   */

  void registerNativeMethods(jclass clazz, const JavaNativeMethod methods[])
    throw(JavaException);

  /** Unregister all native methods for a Java class.
   *
   * @param clazz The class.
   */

  void unregisterNativeMethods(jclass clazz);

  /** Create a new local reference frame.
   *
   * @param capacity The minimal local reference capacity of the new frame.
   * @throw JavaException If an error occurs.
   */

  void pushLocalFrame(uint_t capacity = 8) throw(JavaException);

  /** Destroy the topmost local reference frame. All local references
   * created in the frame will be freed.
   */

  void popLocalFrame();

  /** Determine if verbose mode is enabled for this context. */

  inline bool isVerbose() const throw()
  { return(_verbose); }

  private:

  void setVerbose(bool verbose) throw()
  { _verbose = verbose; }

  void setJVM(JavaVirtualMachine *jvm) throw()
  { _jvm = jvm; }

  JNIEnv *_env;
  JavaVirtualMachine *_jvm;
  bool _verbose;
};

}; // namespace ccxx

#endif // __ccxx_JavaContext_hxx

/* end of header file */
