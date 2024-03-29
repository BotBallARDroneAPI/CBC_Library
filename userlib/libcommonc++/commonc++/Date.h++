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

#ifndef __ccxx_Date_hxx
#define __ccxx_Date_hxx

#include <commonc++/Common.h++>
#include <commonc++/String.h++>

namespace ccxx {

/** A representation of a calendar date.
 *
 * @author Mark Lindner
 */

class COMMONCPP_API Date
{
  public:

  /** The month of January. */
  static const uint_t JAN;
  /** The month of February. */
  static const uint_t FEB;
  /** The month of March. */
  static const uint_t MAR;
  /** The month of April. */
  static const uint_t APR;
  /** The month of May. */
  static const uint_t MAY;
  /** The month of June. */
  static const uint_t JUN;
  /** The month of July. */
  static const uint_t JUL;
  /** The month of August. */
  static const uint_t AUG;
  /** The month of September. */
  static const uint_t SEP;
  /** The month of October. */
  static const uint_t OCT;
  /** The month of November. */
  static const uint_t NOV;
  /** The month of December. */
  static const uint_t DEC;

  enum Weekday { Invalid = 0, Monday, Tuesday, Wednesday, Thursday, Friday,
                 Saturday, Sunday };

  /** Construct a new Date of January 1, year 1. */
  Date() throw();

  /** Construct a new Date with the given components. */
  Date(uint_t day, uint_t month, uint_t year) throw();

  /** Copy constructor. */
  Date(const Date& other) throw();

  /** Destructor. */
  virtual ~Date() throw();

  /** Set the month component of the date. */
  void setMonth(uint_t month) throw();

  /** Set the day-of-month component of the date. */
  void setDay(uint_t day) throw();

  /** Set the year component of the date. */
  void setYear(uint_t year) throw();

  /** Set the day, month, and year components of the date. */
  void setDate(uint_t day, uint_t month, uint_t year) throw();

  /** Get the month component of the date. */
  inline uint_t getMonth() const throw()
  { return(_month); }

  /** Get the day-of-month component of the date. */
  inline uint_t getDay() const throw()
  { return(_day); }

  /** Get the year component of the date. */
  inline uint_t getYear() const throw()
  { return(_year); }

  /** Get the weekday of the date. */
  Weekday getWeekday() const throw();

  /** Get the day of the year. */
  uint_t getDayOfYear() const throw();

  /** Test if a year is a leap year. */
  static bool isLeapYear(uint_t year) throw();

  /** Get the week number of the year, where weeks are defined as beginning
   * on Monday (ISO standard).
   */
  uint_t getWeekOfYear() const throw();

  /** Test if the date is valid. */
  bool isValid() const throw();

  bool operator==(const Date& other) const throw();
  bool operator<(const Date& other) const throw();
  bool operator<=(const Date& other) const throw();

  inline bool operator!=(const Date& other) const throw()
  { return(! operator==(other)); }

  inline bool operator>(const Date& other) const throw()
  { return(! operator<=(other)); }

  inline bool operator>=(const Date& other) const throw()
  { return(! operator<(other)); }

  Date& operator=(const Date& other) throw();

  protected:

  uint_t _year;
  uint_t _month;
  uint_t _day;
  mutable Weekday _wday;
  mutable uint_t _yday;
  mutable int _wnum;

  private:

  void _recalculate() const;
};

}; // namespace ccxx

#endif // __ccxx_Date_hxx

/* end of header file */
