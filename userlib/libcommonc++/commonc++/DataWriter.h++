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

#ifndef __ccxx_DataWriter_hxx
#define __ccxx_DataWriter_hxx

#include <commonc++/Blob.h++>
#include <commonc++/DataEncoder.h++>
#include <commonc++/IOException.h++>
#include <commonc++/String.h++>

namespace ccxx {

/** An abstract base class for data writers. A data writer converts
 * primitive values such as integers and strings to raw bytes and writes
 * them to an output destination.
 *
 * @author Mark Lindner
 */

class COMMONCPP_API DataWriter : public DataEncoder
{
  public:

  /** Destructor. */
  virtual ~DataWriter() throw();

  virtual void skip(size_t count) throw(IOException) = 0;

  /** %Skip past the given number of bytes, filling the bytes with the
   * given value.
   *
   * @param count The number of bytes to skip.
   * @param fillByte The value to write to all the skipped bytes.
   * @throw IOException If an I/O error occurs.
   */
  virtual void skip(size_t count, byte_t fillByte) throw(IOException) = 0;

  /** Flush any buffered but not yet written data to the output
   * destination.
   */
  virtual void flush() throw(IOException) = 0;

  /** Write operator. */
  DataWriter & operator<<(bool v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(byte_t v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const byte_t *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(char v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const char *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(int16_t v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const int16_t *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(uint16_t v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const uint16_t *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(int32_t v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const int32_t *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(uint32_t v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const uint32_t *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const int64_t &v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const int64_t *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const uint64_t &v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const uint64_t *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(float v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const float *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const double &v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const double *v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const Blob &v) throw(IOException);
  /** Write operator. */
  DataWriter & operator<<(const String &v) throw(IOException);

  /** Write operator. */
  DataWriter & operator<<(const Manipulator &manip) throw(IOException);

  protected:

  /** Constructor. */
  DataWriter() throw();

  /** Write raw data to the output destination. */
  virtual size_t write(const byte_t *buf, size_t count) throw(IOException)
    = 0;

  private:

  CCXX_COPY_DECLS(DataWriter);
};

}; // namespace ccxx

#endif // __ccxx_DataWriter_hxx

/* end of header file */
