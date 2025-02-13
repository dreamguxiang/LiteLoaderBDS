// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class UserEntityIdentifierComponent;

#undef BEFORE_EXTRA

class Mob : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
struct JumpPreventionResult {
    JumpPreventionResult() = delete;
    JumpPreventionResult(JumpPreventionResult const&) = delete;
    JumpPreventionResult(JumpPreventionResult const&&) = delete;
};

public:

    LIAPI bool refreshInventory();

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOB
public:
    class Mob& operator=(class Mob const &) = delete;
    Mob(class Mob const &) = delete;
    Mob() = delete;
#endif


public:
    /*0*/ virtual bool hasComponent(class HashedString const &) const;
    /*7*/ virtual void outOfWorld();
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*9*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*13*/ virtual void _doInitialMove();
    /*14*/ virtual ~Mob();
    /*31*/ virtual float getInterpolatedBodyRot(float) const;
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*34*/ virtual float getYawSpeedInDegreesPerSecond() const;
    /*37*/ virtual void resetInterpolated();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void blockedByShield(class ActorDamageSource const &, class Actor &);
    /*44*/ virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /*49*/ virtual void normalTick();
    /*50*/ virtual void baseTick();
    /*51*/ virtual void passengerTick();
    /*53*/ virtual bool startRiding(class Actor &);
    /*54*/ virtual void addPassenger(class Actor &);
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*92*/ virtual bool isImmobile() const;
    /*95*/ virtual bool isPickable();
    /*96*/ virtual void __unk_vfn_96();
    /*97*/ virtual bool isSleeping() const;
    /*98*/ virtual void setSleeping(bool);
    /*99*/ virtual void __unk_vfn_99();
    /*101*/ virtual bool isBlocking() const;
    /*103*/ virtual bool isAlive() const;
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual bool isSurfaceMob() const;
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*114*/ virtual void setTarget(class Actor *);
    /*116*/ virtual bool attack(class Actor &, enum ActorDamageCause const &);
    /*127*/ virtual bool canPowerJump() const;
    /*129*/ virtual bool isJumping() const;
    /*136*/ virtual enum ActorDamageCause getBlockDamageCause(class Block const &) const;
    /*137*/ virtual void animateHurt();
    /*138*/ virtual bool doFireHurt(int);
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*156*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*157*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*158*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*160*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const &);
    /*174*/ virtual bool canFreeze() const;
    /*182*/ virtual void __unk_vfn_182();
    /*186*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual bool inCaravan() const;
    /*196*/ virtual void __unk_vfn_196();
    /*200*/ virtual void stopRiding(bool, bool, bool);
    /*203*/ virtual void buildDebugInfo(std::string &) const;
    /*208*/ virtual int getDeathTime() const;
    /*220*/ virtual void swing();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*227*/ virtual float getYHeadRot() const;
    /*228*/ virtual void setYHeadRot(float);
    /*229*/ virtual float getYHeadRotO() const;
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*252*/ virtual void kill();
    /*253*/ virtual void die(class ActorDamageSource const &);
    /*254*/ virtual bool shouldDropDeathLoot() const;
    /*267*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*269*/ virtual void __unk_vfn_269();
    /*270*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*274*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*275*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*277*/ virtual void __unk_vfn_277();
    /*283*/ virtual void _removePassenger(struct ActorUniqueID const &, bool, bool, bool);
    /*284*/ virtual void _onSizeUpdated();
    /*285*/ virtual void __unk_vfn_285();
    /*286*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*287*/ virtual void spawnAnim();
    /*288*/ virtual void setSprinting(bool);
    /*289*/ virtual enum LevelSoundEvent getHurtSound();
    /*290*/ virtual enum LevelSoundEvent getDeathSound();
    /*291*/ virtual struct TextureUVCoordinateSet const * getItemInHandIcon(class ItemStack const &, int);
    /*292*/ virtual float getSpeed() const;
    /*293*/ virtual void setSpeed(float);
    /*294*/ virtual void hurtEffects(class ActorDamageSource const &, float, bool, bool);
    /*295*/ virtual float getMeleeWeaponDamageBonus(class Mob *);
    /*296*/ virtual int getMeleeKnockbackBonus();
    /*297*/ virtual void travel(float, float, float);
    /*298*/ virtual void travel(struct IMobMovementProxy &, float, float, float) const;
    /*299*/ virtual void applyFinalFriction(float, bool);
    /*300*/ virtual void aiStep();
    /*301*/ virtual void aiStep(struct IMobMovementProxy &) const;
    /*302*/ virtual void pushActors();
    /*303*/ virtual void lookAt(class Actor *, float, float);
    /*304*/ virtual bool isLookingAtAnEntity();
    /*305*/ virtual bool checkSpawnRules(bool);
    /*306*/ virtual bool checkSpawnObstruction() const;
    /*307*/ virtual float getAttackAnim(float);
    /*308*/ virtual int getItemUseDuration() const;
    /*309*/ virtual float getItemUseStartupProgress() const;
    /*310*/ virtual float getItemUseIntervalProgress() const;
    /*311*/ virtual int getItemUseIntervalAxis() const;
    /*312*/ virtual int getTimeAlongSwing() const;
    /*313*/ virtual void __unk_vfn_313();
    /*314*/ virtual float getMaxHeadXRot();
    /*315*/ virtual bool isAlliedTo(class Mob *);
    /*316*/ virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /*317*/ virtual void __unk_vfn_317();
    /*318*/ virtual void leaveCaravan();
    /*319*/ virtual void joinCaravan(class Mob *);
    /*320*/ virtual bool hasCaravanTail() const;
    /*321*/ virtual struct ActorUniqueID getCaravanHead() const;
    /*322*/ virtual int getArmorValue() const;
    /*323*/ virtual float getArmorCoverPercentage() const;
    /*324*/ virtual int getToughnessValue() const;
    /*325*/ virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /*326*/ virtual void setDamagedArmor(enum ArmorSlot, class ItemStack const &);
    /*327*/ virtual void sendArmorDamage(class std::bitset<4>);
    /*328*/ virtual void sendArmor(class std::bitset<4>);
    /*329*/ virtual void containerChanged(int);
    /*330*/ virtual void updateEquipment();
    /*331*/ virtual int clearEquipment();
    /*332*/ virtual std::vector<int> getAllArmorID() const;
    /*333*/ virtual std::vector<class ItemStack const *> getAllHand() const;
    /*334*/ virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /*335*/ virtual int getArmorTypeHash();
    /*336*/ virtual void dropEquipmentOnDeath(class ActorDamageSource const &, int);
    /*337*/ virtual void dropEquipmentOnDeath();
    /*338*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*339*/ virtual void sendInventory(bool);
    /*340*/ virtual float getDamageAfterEnchantReduction(class ActorDamageSource const &, float) const;
    /*341*/ virtual float getDamageAfterArmorReduction(class ActorDamageSource const &, float) const;
    /*342*/ virtual float getDamageAfterResistanceEffect(class ActorDamageSource const &, float) const;
    /*343*/ virtual bool createAIGoals();
    /*344*/ virtual void onBorn(class Actor &, class Actor &);
    /*345*/ virtual bool setItemSlot(enum EquipmentSlot, class ItemStack const &);
    /*346*/ virtual void setTransitioningSitting(bool);
    /*347*/ virtual void attackAnimation(class Actor *, float);
    /*348*/ virtual int getAttackTime();
    /*349*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*350*/ virtual bool canExistWhenDisallowMob() const;
    /*351*/ virtual void __unk_vfn_351();
    /*352*/ virtual void ascendLadder();
    /*353*/ virtual void ascendBlockByJumping();
    /*354*/ virtual void descendBlockByCrouching();
    /*355*/ virtual void dropContainer();
    /*356*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*357*/ virtual void jumpFromGround();
    /*358*/ virtual void jumpFromGround(struct IMobMovementProxy &) const;
    /*359*/ virtual void updateAi();
    /*360*/ virtual void newServerAiStep();
    /*361*/ virtual void _serverAiMobStep();
    /*362*/ virtual void dropBags();
    /*363*/ virtual void tickDeath();
    /*364*/ virtual void updateGliding();
    /*365*/ virtual void __unk_vfn_365();
    /*366*/ virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const &, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOB
    MCVAPI bool _allowAscendingScaffolding() const;
    MCVAPI void ate();
    MCVAPI bool canBeControlledByPassenger();
    MCVAPI bool isShootable();
    MCVAPI void renderDebugServerState(class Options const &);
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Mob(class Level &, class EntityContext &);
    MCAPI Mob(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void _endJump();
    MCAPI void addSpeedModifier(class mce::UUID const &, std::string const &, float);
    MCAPI float calcMoveRelativeSpeed(enum TravelType);
    MCAPI bool checkForPostHitDamageImmunity(float, class ActorDamageSource const &);
    MCAPI bool checkTotemDeathProtection(class ActorDamageSource const &);
    MCAPI void createAI(std::vector<struct GoalDefinition>);
    MCAPI bool discardFriction() const;
    MCAPI void emitJumpPreventedEvent(class BlockPos const &);
    MCAPI void frostWalk();
    MCAPI class BlockPos getBoundOrigin() const;
    MCAPI int getCaravanSize() const;
    MCAPI int getEatCounter() const;
    MCAPI class Mob * getFirstCaravanHead();
    MCAPI float getFlightSpeed() const;
    MCAPI float getFrictionModifier() const;
    MCAPI int getGlidingTicks() const;
    MCAPI class ItemStack const & getItemSlot(enum EquipmentSlot) const;
    MCAPI float getJumpEffectAmplifierValue();
    MCAPI float getJumpMultiplier();
    MCAPI float getJumpPower() const;
    MCAPI struct JumpPreventionResult getJumpPrevention();
    MCAPI float getMovementComponentCurrentSpeed() const;
    MCAPI int getNoActionTime() const;
    MCAPI float getPassengerLockedBodyRot() const;
    MCAPI float getPassengerRotLimit() const;
    MCAPI int getRollCounter() const;
    MCAPI float getSwimSpeedMultiplier() const;
    MCAPI struct ActorUniqueID getTargetCaptain() const;
    MCAPI enum TravelType getTravelType();
    MCAPI float getYRotA() const;
    MCAPI float getZza() const;
    MCAPI bool hasBoundOrigin() const;
    MCAPI void hurtArmor(class ActorDamageSource const &, int);
    MCAPI bool isAbleToMove() const;
    MCAPI bool isEating() const;
    MCAPI bool isFrostWalking() const;
    MCAPI bool isGliding() const;
    MCAPI bool isLayingEgg() const;
    MCAPI bool isPregnant() const;
    MCAPI bool isRolling() const;
    MCAPI bool isSprinting() const;
    MCAPI bool isTransitioningSitting() const;
    MCAPI void onPlayerDimensionChanged(class Player *, class AutomaticID<class Dimension, int>);
    MCAPI void onPlayerJump(int);
    MCAPI void removeSpeedModifier(class mce::UUID const &);
    MCAPI void resetAttributes();
    MCAPI void resetNoActionTime();
    MCAPI void sendArmorDamageSlot(enum ArmorSlot);
    MCAPI void sendArmorSlot(enum ArmorSlot);
    MCAPI void setEatCounter(int);
    MCAPI void setEating(bool);
    MCAPI void setFlightSpeed(float);
    MCAPI void setFrictionModifier(float);
    MCAPI void setIsLayingEgg(bool);
    MCAPI void setIsPregnant(bool);
    MCAPI void setJumpVelRedux(bool);
    MCAPI void setJumping(bool);
    MCAPI void setMovementComponentCurrentSpeed(float);
    MCAPI void setNaturallySpawned(bool);
    MCAPI void setPassengerLockedBodyRot(float);
    MCAPI void setPassengerRotLimit(float);
    MCAPI void setRolling(bool);
    MCAPI void setSpawnMethod(enum MobSpawnMethod);
    MCAPI void setSpeedModifier(float);
    MCAPI void setSurfaceMob(bool);
    MCAPI void setSwimSpeedMultiplier(float);
    MCAPI void setTargetCaptain(struct ActorUniqueID);
    MCAPI void setXxa(float);
    MCAPI void setYRotA(float);
    MCAPI void setYya(float);
    MCAPI void setZza(float);
    MCAPI void snapToYBodyRot(float);
    MCAPI void snapToYHeadRot(float);
    MCAPI static int const ARMOR_DAMAGE_DIVISOR;
    MCAPI static float const ARMOR_PROTECTION_DIVIDER;
    MCAPI static float const ASCEND_BLOCK_BY_JUMPING_SPEED;
    MCAPI static float const BASE_ARMOR_TOUGHNESS;
    MCAPI static float const DEFAULT_GRAVITY;
    MCAPI static float const FRICTION_CONSTANT;
    MCAPI static float const FRICTION_CONSTANT_MODIFIED;
    MCAPI static float const FRICTION_MODIFIER;
    MCAPI static float const GLIDING_FALL_RESET_DELTA;
    MCAPI static float const LADDER_CLIMB_SPEED;
    MCAPI static float const MAX_ARMOR;
    MCAPI static float const MIN_ARMOR_RATIO;
    MCAPI static float const NUM_ARMOR_ITEMS;
    MCAPI static float const PLAYER_SWIMMING_SURFACE_OFFSET;
    MCAPI static int const REMOVE_PASSENGERS_DELAY;
    MCAPI static float const SLOW_FALL_GRAVITY;
    MCAPI static int const SPAWN_XP_DELAY;
    MCAPI static int const TOTAL_ROLL_STEPS;
    MCAPI static void _aiStep(struct IMobMovementProxy &);
    MCAPI static float _calcMoveRelativeSpeed(struct IMobMovementProxy &, enum TravelType);
    MCAPI static void _travel(struct IMobMovementProxy &, float, float, float);
    MCAPI static void _updateMobTravel(struct IMobMovementProxy &);
    MCAPI static float calculateJumpImpulse(struct IMobMovementProxy const &);
    MCAPI static float getJumpEffectAmplifierValue(struct IMobMovementProxy const &);
    MCAPI static struct JumpPreventionResult getJumpPrevention(struct IMobMovementProxy const &);
    MCAPI static enum TravelType getTravelType(struct IMobMovementProxy &);
    MCAPI static bool isImmobile(struct IActorMovementProxy const &);
    MCAPI static bool shouldApplyWaterGravity(struct IActorMovementProxy const &);
    MCAPI static class Mob * tryGetFromEntity(class EntityContext &, bool);

//protected:
    MCAPI void _doSprintParticleEffect();
    MCAPI void _processSoulSpeed();
    MCAPI void _registerMobAttributes();
    MCAPI int getCurrentSwingDuration();
    MCAPI std::unique_ptr<class ListTag> saveOffhand() const;
    MCAPI void tickEffects();
    MCAPI void updateAttackAnim();
    MCAPI bool updateGlidingDurability();
    MCAPI static void _jumpFromGround(struct IMobMovementProxy &);

//private:
    MCAPI bool _initHardCodedComponents();
    MCAPI void _initialize(class EntityContext &);
    MCAPI void _updateSprintingState();
    MCAPI void _verifyAttributes();
    MCAPI static bool _tryApplyingLevitation(struct IMobMovementProxy const &, class Vec3 &);


protected:
    MCAPI static int const MAX_INACTIVITY_TIMER;

private:


};