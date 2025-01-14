// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Fireball : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREBALL
public:
    class Fireball& operator=(class Fireball const &) = delete;
    Fireball(class Fireball const &) = delete;
    Fireball() = delete;
#endif


public:
    /*14*/ virtual ~Fireball();
    /*41*/ virtual void __unk_vfn_41();
    /*49*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*79*/ virtual float getShadowHeightOffs();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*87*/ virtual float getBrightness(float) const;
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual bool isPickable();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*143*/ virtual float getPickRadius();
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*269*/ virtual void __unk_vfn_269();
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*274*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*286*/ virtual float getInertia();
    /*287*/ virtual void __unk_vfn_287();
    /*288*/ virtual enum ParticleType getTrailParticle();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREBALL
    MCVAPI bool canMakeStepSound() const;
    MCVAPI void onHit(class HitResult const &);
    MCVAPI bool shouldBurn();
#endif
    MCAPI Fireball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:
    MCAPI void _setPower(class Vec3 const &);


private:


};