// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RespawnAnchorBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESPAWNANCHORBLOCK
public:
    class RespawnAnchorBlock& operator=(class RespawnAnchorBlock const &) = delete;
    RespawnAnchorBlock(class RespawnAnchorBlock const &) = delete;
    RespawnAnchorBlock() = delete;
#endif


public:
    /*0*/ virtual ~RespawnAnchorBlock();
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
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual void __unk_vfn_80();
    /*101*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*105*/ virtual void __unk_vfn_105();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*130*/ virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /*131*/ virtual void notifySpawnedAt(class BlockSource &, class BlockPos const &) const;
    /*132*/ virtual void __unk_vfn_132();
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*154*/ virtual struct Brightness getLightEmission(class Block const &) const;
    /*157*/ virtual void __unk_vfn_157();
    /*158*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*173*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*179*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*188*/ virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESPAWNANCHORBLOCK
    MCVAPI bool hasComparatorSignal() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI RespawnAnchorBlock(std::string const &, int);
    MCAPI static bool addItem(class Container &, int, class ItemStack &, class BlockSource &, class Block const &, class BlockPos const &);
    MCAPI static int getChargeLevel(class Block const &);

//private:
    MCAPI static bool bumpCharge(class BlockSource &, class BlockPos const &, short);
    MCAPI static void explode(class Player &, class BlockPos const &, class BlockSource &, class Level &);
    MCAPI static bool trySetSpawn(class Player &, class BlockPos const &, class BlockSource &, class Level &);


private:


};