// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class GiveableDefinition {

public:
    MCAPI void addGiveableTrigger(struct GiveableTrigger const&);
    MCAPI void initialize(class EntityContext&, class GiveableComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GiveableDefinition>>&);
};