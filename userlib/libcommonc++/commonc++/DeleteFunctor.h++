
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

#ifndef __ccxx_DeleteFunctor_hxx
#define __ccxx_DeleteFunctor_hxx

#include <commonc++/Common.h++>

namespace ccxx {

/** A functor that deletes its argument. May be used as an argument to
 * the <code>for_each</code> algorithm to delete elements of a
 * pointer-based collection. For example:
 * <pre>
 * std::vector<Foo *> vec;
 *
 * std::for_each(vec.begin(), vec.end(), DeleteFunctor());
 * vec.clear();
 * </pre>
 *
 * @author Mark Lindner
 */

struct DeleteFunctor
{
  template <typename T> void operator()(T *obj) const throw()
  { delete obj; }
};

}; // namespace ccxx

#endif // __ccxx_DeleteFunctor_hxx

/* end of header file */
