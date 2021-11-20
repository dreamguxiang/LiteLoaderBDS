// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class MingleComponent {

public:
    MCAPI class MingleComponent& clearPreviousPartnerId();
    MCAPI class Actor* fetchCurrentPartner(class Actor const&) const;
    MCAPI void resetState();
    MCAPI class MingleComponent& setMingleState(enum MingleComponent::MingleState);
    MCAPI class MingleComponent& setPartnerId(struct ActorUniqueID);
};