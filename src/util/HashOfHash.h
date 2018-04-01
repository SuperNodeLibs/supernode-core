#pragma once
#include <xdr/SuperNode-types.h>

namespace std
{
template <> struct hash<supernode::uint256>
{
    size_t operator()(supernode::uint256 const& x) const noexcept;
};
}
