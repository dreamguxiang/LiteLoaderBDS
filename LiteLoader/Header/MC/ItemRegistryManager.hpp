// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemRegistryManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRYMANAGER
public:
    class ItemRegistryManager& operator=(class ItemRegistryManager const &) = delete;
    ItemRegistryManager(class ItemRegistryManager const &) = delete;
    ItemRegistryManager() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMREGISTRYMANAGER
#endif
    MCAPI static class ItemRegistryRef getItemRegistry();
    MCAPI static void resetItemRegistry();
    MCAPI static void setItemRegistry(class ItemRegistryRef);

//private:


private:
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class std::weak_ptr<class ItemRegistry>, class std::allocator<class std::weak_ptr<class ItemRegistry>>> mThreadLocalRegistry;


};