// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Chicken : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHICKEN
public:
    class Chicken& operator=(class Chicken const &) = delete;
    Chicken(class Chicken const &) = delete;
    Chicken() = delete;
#endif


public:
    /*14*/ virtual ~Chicken();
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
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*267*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*269*/ virtual void __unk_vfn_269();
    /*275*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*300*/ virtual void aiStep();
    /*313*/ virtual void __unk_vfn_313();
    /*317*/ virtual void __unk_vfn_317();
    /*351*/ virtual void __unk_vfn_351();
    /*365*/ virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHICKEN
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Chicken(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);



};