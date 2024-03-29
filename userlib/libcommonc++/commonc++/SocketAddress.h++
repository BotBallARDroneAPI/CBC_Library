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

#ifndef __ccxx_SocketAddress_hxx
#define __ccxx_SocketAddress_hxx

#include <commonc++/Common.h++>
#include <commonc++/ByteOrder.h++>
#include <commonc++/InetAddress.h++>
#include <commonc++/IOException.h++>
#include <commonc++/String.h++>

#ifdef CCXX_OS_POSIX
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#endif

namespace ccxx {

/** A socket endpoint network address. The address consists of an IP
 * address and a port number.
 *
 * @author Mark Lindner
 */

class COMMONCPP_API SocketAddress
{
  public:

  /** Construct a new, null SocketAddress. */
  SocketAddress() throw();

  /** Construct a new SocketAddress for a given IP address and port number.
   *
   * @param address The IP address.
   * @param port The port number.
   */
  SocketAddress(const InetAddress &address, uint16_t port);

  /** Construct a new SocketAddress for a given sockaddr structure. */
  explicit SocketAddress(const struct sockaddr& other) throw();

  /** Construct a new SocketAddress for a given sockaddr_in structure. */
  explicit SocketAddress(const struct sockaddr_in& other) throw();

  /** Copy constructor. */
  SocketAddress(const SocketAddress& other) throw();

  /** Destructor. */
  ~SocketAddress() throw();

  /** Assignment operator. */
  SocketAddress& operator=(const struct sockaddr& other) throw();

  /** Assignment operator. */
  SocketAddress& operator=(const struct sockaddr_in& other) throw();

  /** Assignment operator. */
  SocketAddress& operator=(const SocketAddress& other) throw();

  /** Get the IP address for this address. */
  InetAddress getAddress() const throw();

  /** Set the IP address for this address. */
  void setAddress(const InetAddress &address) throw();

  /** Set the hostname for this address.
   *
   * @param host The host, as a dot-separated IP address or DNS name.
   * @throw HostNotFoundException If the hostname could not be resolved.
   */
  void setHost(const String &host) throw(HostNotFoundException);

  /** Get the port number for this address. */
  inline uint16_t getPort() const throw()
  { return(ByteOrder::networkToHost(_insaddr.sin_port)); }

  /** Set the port number for this address. */
  inline void setPort(uint16_t port) throw()
  { _insaddr.sin_port = ByteOrder::hostToNetwork(port); }

  /** Set the address from a sockaddr structure. */
  inline void setSocketAddress(const struct sockaddr& addr) throw()
  { _saddr = addr; }

  /** Get the address as a sockaddr structure. */
  inline sockaddr getSocketAddress() const throw()
  { return(_saddr); }

  /** Reset the address to a null address. */
  void reset() throw();

  /** Cast operator. */
  inline operator sockaddr *() throw()
  { return(&_saddr); }

  /** Cast operator. */
  inline operator sockaddr_in *() throw()
  { return(&_insaddr); }

  /** Get a String representation for this address. */
  String toString() const;

  /** Equality operator. */
  bool operator==(const SocketAddress& other) const throw();

  /** Inequality operator. */
  inline bool operator!=(const SocketAddress& other) const throw()
  { return(! operator==(other)); }

  private:

  union
  {
    struct sockaddr _saddr;
    struct sockaddr_in _insaddr;
  };
};

inline std::ostream& operator<<(std::ostream& stream, const SocketAddress& a)
{ return(stream << a.toString().c_str()); }

}; // namespace ccxx

#endif // __ccxx_SocketAddress_hxx

/* end of header file */
