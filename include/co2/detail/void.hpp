/*//////////////////////////////////////////////////////////////////////////////
    Copyright (c) 2015 Jamboree

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//////////////////////////////////////////////////////////////////////////////*/
#ifndef CO2_DETAIL_VOID_HPP_INCLUDED
#define CO2_DETAIL_VOID_HPP_INCLUDED

namespace co2 { namespace detail
{
    struct void_
    {
        operator bool() const noexcept
        {
            return true;
        }
    };

    template<class RHS>
    inline RHS&& operator,(RHS&& rhs, void_) noexcept
    {
        return static_cast<RHS&&>(rhs);
    }

    inline void operator,(void_, void_) noexcept {}
}}

#endif
