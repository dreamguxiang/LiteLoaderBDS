// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BlockActor.hpp"
class BannerBlockActor : public BlockActor {
public:
    virtual ~BannerBlockActor();
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    virtual bool save(class CompoundTag&);
    virtual void saveBlockData(class CompoundTag&, class BlockSource&);
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    virtual void onCustomTagLoadDone(class BlockSource&);
    virtual void tick(class BlockSource&);
    virtual void onChanged(class BlockSource&);
    virtual void onPlace(class BlockSource&);
    virtual void unk_vfn_12();
    virtual void onRemoved(class BlockSource&);
    virtual void triggerEvent(int, int);
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_21();
    virtual std::string getName();
    virtual std::string getImmersiveReaderText(class BlockSource&);
    virtual void unk_vfn_26();
    virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    virtual void unk_vfn_28();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    virtual bool _playerCanUpdate(class Player const&);

public:
    MCAPI unsigned char getBaseColorInt() const;
    MCAPI void setItemValues(class ItemStackBase const&);

    MCAPI static int const MAX_PATTERNS;
    MCAPI static std::string const TAG_BASE_COLOR;
    MCAPI static std::string const TAG_COLOR;
    MCAPI static std::string const TAG_PATTERN;
    MCAPI static std::string const TAG_PATTERNS;
    MCAPI static std::string const TAG_TYPE;
    MCAPI static enum BannerBlockType getBannerType(class CompoundTag const*);
    MCAPI static int getBaseColor(class ItemStack const&);
    MCAPI static int getPatternCount(class CompoundTag const*);
    MCAPI static bool isDefaultBanner(class ItemStackBase const&);
    MCAPI static bool removeLastPattern(class ItemStack&, class Player&);
};