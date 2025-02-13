// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemRegistryRef {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRYREF
public:
    class ItemRegistryRef& operator=(class ItemRegistryRef const &) = delete;
    ItemRegistryRef(class ItemRegistryRef const &) = delete;
    ItemRegistryRef() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMREGISTRYREF
#endif
    MCAPI ItemRegistryRef(class std::weak_ptr<class ItemRegistry>);
    MCAPI class WeakPtr<class Item> lookupByName(int &, int &, std::string const &) const;
    MCAPI class WeakPtr<class Item> lookupByName(int &, std::string const &) const;
    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const &) const;
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(std::string const &) const;
    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const &) const;
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int &, class HashedString const &) const;
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(class HashedString const &) const;
    MCAPI class std::unordered_set<class Item const *, struct std::hash<class Item const *>, struct std::equal_to<class Item const *>, class std::allocator<class Item const *>> lookupByTag(struct ItemTag const &) const;
    MCAPI void unregisterItem(class HashedString const &) const;
    MCAPI ~ItemRegistryRef();

//private:
    MCAPI class std::shared_ptr<class ItemRegistry> _lockRegistry() const;


private:


};