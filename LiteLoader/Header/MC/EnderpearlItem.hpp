// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnderpearlItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERPEARLITEM
public:
    class EnderpearlItem& operator=(class EnderpearlItem const &) = delete;
    EnderpearlItem(class EnderpearlItem const &) = delete;
    EnderpearlItem() = delete;
#endif


public:
    /*0*/ virtual ~EnderpearlItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*23*/ virtual bool isThrowable() const;
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*85*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*104*/ virtual class HashedString const & getCooldownType() const;
    /*105*/ virtual int getCooldownTime() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERPEARLITEM
#endif
    MCAPI EnderpearlItem(std::string const &, int);
    MCAPI static class HashedString const ENDER_PEARL_COOLDOWN;



};