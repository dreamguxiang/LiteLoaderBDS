// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class NetworkItemStackDescriptor {

public:
    MCAPI void read(class ReadOnlyBinaryStream&);
    MCAPI void setIncludeNetIds(bool) const;
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const;
    MCAPI void write(class BinaryStream&) const;
};