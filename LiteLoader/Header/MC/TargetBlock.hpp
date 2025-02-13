// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TargetBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETBLOCK
public:
    class TargetBlock& operator=(class TargetBlock const &) = delete;
    TargetBlock(class TargetBlock const &) = delete;
    TargetBlock() = delete;
#endif


public:
    /*0*/ virtual ~TargetBlock();
    /*15*/ virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /*19*/ virtual void __unk_vfn_19();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*51*/ virtual bool isSignalSource() const;
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*62*/ virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /*73*/ virtual void __unk_vfn_73();
    /*77*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*80*/ virtual void __unk_vfn_80();
    /*105*/ virtual void __unk_vfn_105();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*174*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*188*/ virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETBLOCK
#endif
    MCAPI TargetBlock(std::string const &, int);

//private:
    MCAPI void _processHitByProjectileAtPos(class Vec3 const &, class BlockSource &, class BlockPos const &, class Actor const &) const;


private:


};