// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Cat : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAT
public:
    class Cat& operator=(class Cat const &) = delete;
    Cat(class Cat const &) = delete;
    Cat() = delete;
#endif


public:
    /*14*/ virtual ~Cat();
    /*41*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*121*/ virtual void onTame();
    /*134*/ virtual enum LevelSoundEvent getAmbientSound() const;
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*267*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*269*/ virtual void __unk_vfn_269();
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*300*/ virtual void aiStep();
    /*313*/ virtual void __unk_vfn_313();
    /*317*/ virtual void __unk_vfn_317();
    /*351*/ virtual void __unk_vfn_351();
    /*361*/ virtual void _serverAiMobStep();
    /*365*/ virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAT
#endif
    MCAPI Cat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI static float const SNEAK_SPEED_MOD;
    MCAPI static float const SPRINT_SPEED_MOD;

//private:
    MCAPI float getLieOnPlayer();


private:


};