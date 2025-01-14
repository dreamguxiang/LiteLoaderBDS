// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SuspiciousStewItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUSPICIOUSSTEWITEM
public:
    class SuspiciousStewItem& operator=(class SuspiciousStewItem const &) = delete;
    SuspiciousStewItem(class SuspiciousStewItem const &) = delete;
    SuspiciousStewItem() = delete;
#endif


public:
    /*0*/ virtual ~SuspiciousStewItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUSPICIOUSSTEWITEM
    MCVAPI bool uniqueAuxValues() const;
#endif
    MCAPI SuspiciousStewItem(std::string const &, short);
    MCAPI static void applyStewEffect(class ItemStack const &, class Actor &);



};