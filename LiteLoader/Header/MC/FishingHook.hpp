// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FishingHook : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGHOOK
public:
    class FishingHook& operator=(class FishingHook const &) = delete;
    FishingHook(class FishingHook const &) = delete;
    FishingHook() = delete;
#endif


public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~FishingHook();
    /*41*/ virtual void __unk_vfn_41();
    /*49*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*166*/ virtual bool save(class CompoundTag &) const;
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*181*/ virtual bool canChangeDimensionsUsingPortal() const;
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*254*/ virtual bool shouldDropDeathLoot() const;
    /*269*/ virtual void __unk_vfn_269();
    /*277*/ virtual void __unk_vfn_277();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FISHINGHOOK
#endif
    MCAPI FishingHook(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI class Actor * getOwner();
    MCAPI void postNormalTick();
    MCAPI int retrieve();
    MCAPI static float const BOBBER_SIZE;

//protected:
    MCAPI void _fishPosEvent();
    MCAPI void _fishTeaseEvent();
    MCAPI void _fishhookEvent();
    MCAPI float _getWaterPercentage();
    MCAPI class HitResult _hitCheck();
    MCAPI void _pullCloser(class Actor &, float);
    MCAPI bool _serverHooked();
    MCAPI bool _serverLured();
    MCAPI void _updateGravity();
    MCAPI void _updateServer();


protected:


};