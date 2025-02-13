// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BucketItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETITEM
public:
    class BucketItem& operator=(class BucketItem const &) = delete;
    BucketItem(class BucketItem const &) = delete;
    BucketItem() = delete;
#endif


public:
    /*0*/ virtual ~BucketItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*57*/ virtual bool isDestructive(int) const;
    /*58*/ virtual bool isLiquidClipItem(int) const;
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual bool isValidAuxValue(int) const;
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual bool canUseOnSimTick() const;
    /*85*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*86*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*87*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*88*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /*96*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*101*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /*113*/ virtual bool validFishInteraction(int) const;
    /*122*/ virtual struct Brightness getLightEmission(int) const;
    /*123*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*125*/ virtual class Item & setIcon(std::string const &, int);
    /*133*/ virtual std::string getAuxValuesDescription() const;
    /*136*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUCKETITEM
    MCVAPI bool isBucket() const;
    MCVAPI bool uniqueAuxValues() const;
#endif
    MCAPI BucketItem(std::string const &, int, enum BucketFillType);
    MCAPI static int const DRINK_DURATION;

//protected:
    MCAPI void addBucketEntitySaveData(class Actor &, class ItemStack &) const;
    MCAPI bool readBucketEntitySaveData(class BlockSource &, class Actor *, unsigned char, class BlockPos, class ItemInstance const &) const;

//private:
    MCAPI bool _canEmptyBucketIntoBlock(class BlockSource &, class BlockPos const &, class Block const &, class Block const &) const;
    MCAPI bool _emptyBucket(class BlockSource &, class Block const &, class BlockPos const &, class Actor *, class ItemStack const &, unsigned char) const;
    MCAPI void _removeBubbleColumn(class BlockSource &, class BlockPos const &) const;
    MCAPI bool _takeLiquid(class ItemStack &, class Actor &, class BlockPos const &) const;
    MCAPI bool _takePowderSnow(class ItemStack &, class Actor &, class BlockPos const &) const;
    MCAPI class BlockLegacy const * _tryGetBlock(enum BucketFillType) const;


protected:

private:
    MCAPI static std::vector<struct std::pair<enum BucketFillType, enum ActorType>> const mFillTypeToEntityType;


};