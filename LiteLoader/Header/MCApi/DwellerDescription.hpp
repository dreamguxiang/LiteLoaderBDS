// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class DwellerDescription {
public:
    virtual char const* getJsonName();
    virtual ~DwellerDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};