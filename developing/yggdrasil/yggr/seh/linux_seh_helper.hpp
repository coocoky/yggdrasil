//linux_seh_helper.hpp

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

#ifndef __YGGR_SEH_LINUX_SEH_HELPER_HPP__
#define __YGGR_SEH_LINUX_SEH_HELPER_HPP__

#ifndef YGGR_SEH_INCLUDE
#	error "linux_seh_helper.hpp include error please include seh.hpp."
#endif // YGGR_SEH_ENV_INCLUDE

#include <execinfo.h>
#include <list>
#include <yggr/charset/string.hpp>
#include <sstream>
#include <yggr/base/yggrdef.h>


namespace yggr
{
namespace seh
{

class linux_seh_helper
{
public:
	typedef std::list<std::string> dump_call_stack_type;

public:
    static const std::string format_dump_call_stack_msg(const dump_call_stack_type& call_stack);
	static bool dump_call_stack(dump_call_stack_type& call_stack);
};

} // namespace seh
} // namespace yggr

#endif // __YGGR_SEH_LINUX_SEH_HELPER_HPP__
