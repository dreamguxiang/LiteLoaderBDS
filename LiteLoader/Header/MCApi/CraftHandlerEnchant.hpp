// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CraftHandlerBase.hpp"
class CraftHandlerEnchant : public CraftHandlerBase {
public:
    virtual ~CraftHandlerEnchant();
    virtual void unk_vfn_2();
    virtual void endRequestBatch();
    virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    virtual void _postCraftRequest(bool);

private:
    MCAPI class EnchantingContainerManagerModel& _getEnchantingModel() const;
    MCAPI enum ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 10> const&);
};