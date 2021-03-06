//database_connect.hpp

/****************************************************************************
Copyright (c) 2014-2018 yggdrasil

author: yang xu

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __YGGR_DATABASE_SYSTEM_DATABASE_CONNECT_HPP__
#define __YGGR_DATABASE_SYSTEM_DATABASE_CONNECT_HPP__

#define YGGR_DATABASE_CONNECT

#include <yggr/database_system/dtl_include_helper.hpp>
#include <yggr/charset/string.hpp>
#include <yggr/nonable/noncopyable.hpp>
#include <boost/thread/mutex.hpp>

namespace yggr
{
namespace database_system
{

template<typename Real_Conn, typename Mutex = boost::mutex>
class database_connect;

} // namespace database_system
} // namespace yggr

#include <yggr/database_system/database_connect_st.hpp>
#include <yggr/database_system/database_connect_mt.hpp>


#endif //__YGGR_DATABASE_SYSTEM_DATABASE_CONNECT_HPP__
