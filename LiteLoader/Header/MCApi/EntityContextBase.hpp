// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class EntityContextBase {

public:
    MCAPI bool isValid() const;
    MCAPI bool operator==(class EntityContextBase const&);

protected:
    MCAPI void _assertValid() const;
    MCAPI class entt::basic_registry<class EntityId> const& _enttRegistry() const;
    MCAPI class entt::basic_registry<class EntityId>& _enttRegistry();
    MCAPI unsigned int _getRawId() const;
};