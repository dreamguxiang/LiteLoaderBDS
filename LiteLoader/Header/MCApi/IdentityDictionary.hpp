// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class IdentityDictionary {

public:
    MCAPI bool clearIdentity(struct ScoreboardId const&);
    MCAPI struct ScoreboardId const& convertFakeToReal(struct ScoreboardId const&, struct PlayerScoreboardId const&);
};