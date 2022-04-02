#pragma once

#include <agl/utl/aglParameter.h>
#include "KingSystem/Resource/GeneralParamList/resGParamListObject.h"
#include "KingSystem/Utils/Types.h"

namespace ksys::res {

class GParamListObjectPlayer : public GParamListObject {
public:
    GParamListObjectPlayer();
    const char* getName() const override { return "Player"; }

    agl::utl::Parameter<f32> mBombReloadTime1;
    agl::utl::Parameter<f32> mBombReloadTime2;
    agl::utl::Parameter<f32> mStopTimerReloadTime;
    agl::utl::Parameter<f32> mStopTimerBlowAngle;
    agl::utl::Parameter<f32> mStopTimerBlowSpeedLimit;
    agl::utl::Parameter<s32> mStopTimerImpluseMaxCountSmallSword;
    agl::utl::Parameter<s32> mStopTimerImpluseMaxCountLargeSword;
    agl::utl::Parameter<s32> mStopTimerImpluseMaxCountSpear;
    agl::utl::Parameter<f32> mStopTimerCancelDeleteWaitTime;
    agl::utl::Parameter<f32> mStopTimerLongTime;
    agl::utl::Parameter<f32> mStopTimerMiddleTime;
    agl::utl::Parameter<f32> mStopTimerShortTime;
    agl::utl::Parameter<f32> mEnergyTiredValue;
    agl::utl::Parameter<f32> mEnergyBowSlow;
    agl::utl::Parameter<f32> mEnergyPush;
    agl::utl::Parameter<f32> mEnergyCharge;
    agl::utl::Parameter<f32> mEnergyAutoRecover;
    agl::utl::Parameter<f32> mEnergyAutoRecoverInAir;
    agl::utl::Parameter<f32> mEnergyAutoRecoverInvalidTime1;
    agl::utl::Parameter<f32> mEnergyAutoRecoverInvalidTime2;
    agl::utl::Parameter<f32> mColdTempDamageAdd;
    agl::utl::Parameter<f32> mHotTempDamageAdd;
    agl::utl::Parameter<f32> mTempDamage;
    agl::utl::Parameter<f32> mTempEnergyDecDiamAdd;
    agl::utl::Parameter<f32> mTempEnergyDecDegAdd;
    agl::utl::Parameter<f32> mVelDiamSand;
    agl::utl::Parameter<f32> mVelDiamTired;
    agl::utl::Parameter<f32> mStickDiamTired;
    agl::utl::Parameter<f32> mAutoRecoverNum;
    agl::utl::Parameter<f32> mAutoRecoverIntervalMin;
    agl::utl::Parameter<f32> mAutoRecoverIntervalMax;
    agl::utl::Parameter<f32> mAutoRecoverInvalidTime;
    agl::utl::Parameter<f32> mBowSubjectContTime;
    agl::utl::Parameter<f32> mLNGStickScale;
    agl::utl::Parameter<f32> mLATStickScale;
    agl::utl::Parameter<f32> mLNGGyroScale;
    agl::utl::Parameter<f32> mLATGyroScale;
    agl::utl::Parameter<s32> mBowSlowShootNum;
    agl::utl::Parameter<f32> mBowSlowRateDiam;
    agl::utl::Parameter<f32> mBowSlowMaxTime;
    agl::utl::Parameter<f32> mDiveBowSlowMaxTime;
    agl::utl::Parameter<f32> mBowSlowInvalidTime;
    agl::utl::Parameter<f32> mBowSlowInvalidHeight;
    agl::utl::Parameter<f32> mBowSlowInvalidHeightOnShield;
    agl::utl::Parameter<f32> mBowSlowInvalidHeightWeaponChange;
    agl::utl::Parameter<f32> mGuardJustForceSlowTime;
    agl::utl::Parameter<f32> mMoveMaxDecRateByWater;
    agl::utl::Parameter<f32> mMoveIgnoreWaterHeight;
    agl::utl::Parameter<f32> mMoveDecRateByBog;
    agl::utl::Parameter<f32> mMoveDecRateMaxHeight;
    agl::utl::Parameter<f32> mMaxForce;
    agl::utl::Parameter<f32> mMinForce;
    agl::utl::Parameter<f32> mAddForce;
    agl::utl::Parameter<f32> mSnowBallAddForce;
    agl::utl::Parameter<f32> mLogPushF;
    agl::utl::Parameter<f32> mRockPushF;
    agl::utl::Parameter<f32> mRockPushSpeed;
    agl::utl::Parameter<f32> mWaistAngleUpperMax;
    agl::utl::Parameter<f32> mWaistAngleLowerMax;
    agl::utl::Parameter<f32> mWaistAngleSideMax;
    agl::utl::Parameter<f32> mNoSquatWaterHeight;
    agl::utl::Parameter<f32> mInvalidReloadTime;
    agl::utl::Parameter<f32> mWeaponThrowSpeedY;
    agl::utl::Parameter<f32> mWeaponThrowSpeedF;
    agl::utl::Parameter<f32> mWeaponThrowSpeedFSquat;
    agl::utl::Parameter<f32> mDashUpEnableAngle;
    agl::utl::Parameter<f32> mShockTime;
    agl::utl::Parameter<f32> mIceInvalidTime;
    agl::utl::Parameter<f32> mMaxSpeedInAir;
    agl::utl::Parameter<f32> mTurnEnableSpeed;
    agl::utl::Parameter<f32> mTurnEnableStickSub;
    agl::utl::Parameter<f32> mTurnEnableDirSub;
    agl::utl::Parameter<s32> mShortDashImpulse;
    agl::utl::Parameter<s32> mShortDashDamage;
    agl::utl::Parameter<f32> mSwordTerrorScope;
    agl::utl::Parameter<f32> mArrowTerrorScope;
    agl::utl::Parameter<f32> mTorchTerrorScope;
    agl::utl::Parameter<f32> mTorchTerrorOffsetY;
    agl::utl::Parameter<f32> mTorchTerrorOffsetZ;
    agl::utl::Parameter<f32> mDashNoise;
    agl::utl::Parameter<f32> mWhistleNoise;
    agl::utl::Parameter<f32> mClimbEnableAngle;
    agl::utl::Parameter<f32> mClimbEnableSpeedMinAngle;
    agl::utl::Parameter<f32> mClimbEnableSpeedMaxAngle;
    agl::utl::Parameter<f32> mSlipEnableSpeed;
    agl::utl::Parameter<f32> mSlipSpeedAddMin;
    agl::utl::Parameter<f32> mSlipSpeedAddMax;
    agl::utl::Parameter<f32> mSlipSpeedAddDiamByRain;
    agl::utl::Parameter<f32> mMagnetAim2DPosOffsetY;
    agl::utl::Parameter<f32> mLookPosOffsetXZ;
    agl::utl::Parameter<f32> mLookPosOffsetY;
    agl::utl::Parameter<f32> mLookPosOffsetYSquat;
    agl::utl::Parameter<f32> mLookPosOffsetYSwim;
    agl::utl::Parameter<f32> mLookPosOffsetYHorse;
    agl::utl::Parameter<f32> mLookEnableAngle;
    agl::utl::Parameter<f32> mHitSlowTimeS;
    agl::utl::Parameter<f32> mHitSlowTimeM;
    agl::utl::Parameter<f32> mHitSlowTimeL;
    agl::utl::Parameter<f32> mHitSlowRate;
    agl::utl::Parameter<f32> mHitStopTimeS;
    agl::utl::Parameter<f32> mHitStopTimeL;
    agl::utl::Parameter<f32> mHitStopRate;
    agl::utl::Parameter<f32> mAtnPosInterPolationRate;
    agl::utl::Parameter<f32> mAtnPosInterPolationMin;
    agl::utl::Parameter<f32> mAtnPosInterPolationMax;
    agl::utl::Parameter<f32> mPredictDiffAngleMax;
    agl::utl::Parameter<f32> mDashToRunStickValueDec;
    agl::utl::Parameter<f32> mWindSupportReuseTime;
    agl::utl::Parameter<f32> mFireSupportReuseTime;
    agl::utl::Parameter<f32> mElectricSupportReuseTime;
    agl::utl::Parameter<f32> mWaterSupportReuseTime;
    agl::utl::Parameter<f32> mWindSupportTimerRate;
    agl::utl::Parameter<f32> mFireSupportTimerRate;
    agl::utl::Parameter<f32> mElectricSupportTimerRate;
    agl::utl::Parameter<f32> mWaterSupportTimerRate;
    agl::utl::Parameter<f32> mChemicalInvalidTime;
    agl::utl::Parameter<f32> mAutoDashUpTime;
    agl::utl::Parameter<f32> mAutoDashUpAngle;
    agl::utl::Parameter<f32> mClimbRestartHeight;
    agl::utl::Parameter<f32> mClimbRestartTime;
    agl::utl::Parameter<f32> mPushNoticeLookTime;
    agl::utl::Parameter<f32> mEnergyUseSmall;
    agl::utl::Parameter<f32> mEnergyUseLarge;
    agl::utl::Parameter<f32> mNoEnergyDashInterval;
    agl::utl::Parameter<f32> mGuardableAngle;
    agl::utl::Parameter<f32> mStickMaxInStore;
    agl::utl::Parameter<f32> mLookContinueTime;
    agl::utl::Parameter<f32> mPostureContinueTime;
    agl::utl::Parameter<f32> mItemUseModelAlpha;
    agl::utl::Parameter<f32> mLadderCheckSide;
    agl::utl::Parameter<f32> mLadderCheckDist;
    agl::utl::Parameter<s32> mNoDeathDamageBase;
    agl::utl::Parameter<s32> mNoDeathDamageAdd;
    agl::utl::Parameter<f32> mArmorCompSwimEnergyRate;
    agl::utl::Parameter<f32> mArmorCompRegistElecFrame;
    agl::utl::Parameter<f32> mArmorCompNightSpeedRate;
    agl::utl::Parameter<f32> mArmorCompClimbJumpEnergyRate;
    agl::utl::Parameter<f32> mArmorCompPlusDropRate;
    agl::utl::Parameter<f32> mArmorCompWeaponBrakeRate;
    agl::utl::Parameter<f32> mArmorCompSwordBeamAttackRate;
    agl::utl::Parameter<f32> mArmorCompAncientAttackRate;
    agl::utl::Parameter<f32> mArmorCompBoneAttackRate;
    agl::utl::Parameter<f32> mArmorCompTerrorLevel;
    agl::utl::Parameter<f32> mArmorCompTerrorRadius;
    agl::utl::Parameter<f32> mArmorCompNakedSwimSpeedRate;
    agl::utl::Parameter<f32> mArmorCompNakedSwimAnimeRate;
    agl::utl::Parameter<f32> mArmorCompNakedSwimEnergyRate;
    agl::utl::Parameter<f32> mArmorAncientAttackRate;
    agl::utl::Parameter<s32> mSupportWindNum;
    agl::utl::Parameter<s32> mSupportElectricNum;
    agl::utl::Parameter<f32> mSupportElectricEnergy;
    agl::utl::Parameter<s32> mSupportFireNum;
    agl::utl::Parameter<s32> mSupportWaterLifeAdd;
    agl::utl::Parameter<f32> mSupportWaterEnergyAdd;
    agl::utl::Parameter<f32> mStickRInputFrame;
    agl::utl::Parameter<f32> mDiffAngleFromLookVec;
    agl::utl::Parameter<f32> mLookPosOffset;
    agl::utl::Parameter<f32> mLookFixAngle;
    agl::utl::Parameter<f32> mLookContinueTimeToCamera;
    agl::utl::Parameter<f32> mCutKnockBackNoCrrDist;
    agl::utl::Parameter<f32> mWaitUnsteadyApplyVel;
    agl::utl::Parameter<f32> mCurseAddWeight;
    agl::utl::Parameter<f32> mRoofCrashVel;
    agl::utl::Parameter<f32> mCutJumpInvalidTime;
    agl::utl::Parameter<f32> mWaterDepthInGrudge;
    agl::utl::Parameter<f32> mLargeHorseLegBendAngY;
    agl::utl::Parameter<f32> mLargeHorseLegBendAngX;
    agl::utl::Parameter<f32> mLargeHorseLegBendFrame;
    agl::utl::Parameter<f32> mNoMaskPauseWaterHeight;
    agl::utl::Parameter<f32> mLookAtThreshold;
};
KSYS_CHECK_SIZE_NX150(GParamListObjectPlayer, 0x1578);

inline GParamListObjectPlayer::GParamListObjectPlayer() {
    auto* const obj = &mObj;

    mBombReloadTime1.init(0.0, "BombReloadTime1", "", obj);
    mBombReloadTime2.init(0.0, "BombReloadTime2", "", obj);
    mStopTimerReloadTime.init(0.0, "StopTimerReloadTime", "", obj);
    mStopTimerBlowAngle.init(0.0, "StopTimerBlowAngle", "", obj);
    mStopTimerBlowSpeedLimit.init(0.0, "StopTimerBlowSpeedLimit", "", obj);
    mStopTimerImpluseMaxCountSmallSword.init(16, "StopTimerImpluseMaxCountSmallSword", "", obj);
    mStopTimerImpluseMaxCountLargeSword.init(8, "StopTimerImpluseMaxCountLargeSword", "", obj);
    mStopTimerImpluseMaxCountSpear.init(20, "StopTimerImpluseMaxCountSpear", "", obj);
    mStopTimerCancelDeleteWaitTime.init(0.0, "StopTimerCancelDeleteWaitTime", "", obj);
    mStopTimerLongTime.init(0.0, "StopTimerLongTime", "", obj);
    mStopTimerMiddleTime.init(0.0, "StopTimerMiddleTime", "", obj);
    mStopTimerShortTime.init(0.0, "StopTimerShortTime", "", obj);
    mEnergyTiredValue.init(0.0, "EnergyTiredValue", "", obj);
    mEnergyBowSlow.init(0.0, "EnergyBowSlow", "", obj);
    mEnergyPush.init(0.0, "EnergyPush", "", obj);
    mEnergyCharge.init(0.0, "EnergyCharge", "", obj);
    mEnergyAutoRecover.init(0.0, "EnergyAutoRecover", "", obj);
    mEnergyAutoRecoverInAir.init(0.0, "EnergyAutoRecoverInAir", "", obj);
    mEnergyAutoRecoverInvalidTime1.init(0.0, "EnergyAutoRecoverInvalidTime1", "", obj);
    mEnergyAutoRecoverInvalidTime2.init(0.0, "EnergyAutoRecoverInvalidTime2", "", obj);
    mColdTempDamageAdd.init(0.0, "ColdTempDamageAdd", "", obj);
    mHotTempDamageAdd.init(0.0, "HotTempDamageAdd", "", obj);
    mTempDamage.init(0.0, "TempDamage", "", obj);
    mTempEnergyDecDiamAdd.init(0.0, "TempEnergyDecDiamAdd", "", obj);
    mTempEnergyDecDegAdd.init(0.0, "TempEnergyDecDegAdd", "", obj);
    mVelDiamSand.init(0.0, "VelDiamSand", "", obj);
    mVelDiamTired.init(0.0, "VelDiamTired", "", obj);
    mStickDiamTired.init(0.0, "StickDiamTired", "", obj);
    mAutoRecoverNum.init(0.0, "AutoRecoverNum", "", obj);
    mAutoRecoverIntervalMin.init(0.0, "AutoRecoverIntervalMin", "", obj);
    mAutoRecoverIntervalMax.init(0.0, "AutoRecoverIntervalMax", "", obj);
    mAutoRecoverInvalidTime.init(0.0, "AutoRecoverInvalidTime", "", obj);
    mBowSubjectContTime.init(0.0, "BowSubjectContTime", "", obj);
    mLNGStickScale.init(0.0, "LNGStickScale", "", obj);
    mLATStickScale.init(0.0, "LATStickScale", "", obj);
    mLNGGyroScale.init(0.0, "LNGGyroScale", "", obj);
    mLATGyroScale.init(0.0, "LATGyroScale", "", obj);
    mBowSlowShootNum.init(0, "BowSlowShootNum", "", obj);
    mBowSlowRateDiam.init(1.0, "BowSlowRateDiam", "", obj);
    mBowSlowMaxTime.init(0.0, "BowSlowMaxTime", "", obj);
    mDiveBowSlowMaxTime.init(0.0, "DiveBowSlowMaxTime", "", obj);
    mBowSlowInvalidTime.init(0.0, "BowSlowInvalidTime", "", obj);
    mBowSlowInvalidHeight.init(0.0, "BowSlowInvalidHeight", "", obj);
    mBowSlowInvalidHeightOnShield.init(0.0, "BowSlowInvalidHeightOnShield", "", obj);
    mBowSlowInvalidHeightWeaponChange.init(0.0, "BowSlowInvalidHeightWeaponChange", "", obj);
    mGuardJustForceSlowTime.init(0.0, "GuardJustForceSlowTime", "", obj);
    mMoveMaxDecRateByWater.init(0.0, "MoveMaxDecRateByWater", "", obj);
    mMoveIgnoreWaterHeight.init(0.0, "MoveIgnoreWaterHeight", "", obj);
    mMoveDecRateByBog.init(0.0, "MoveDecRateByBog", "", obj);
    mMoveDecRateMaxHeight.init(0.0, "MoveDecRateMaxHeight", "", obj);
    mMaxForce.init(0.0, "MaxForce", "", obj);
    mMinForce.init(0.0, "MinForce", "", obj);
    mAddForce.init(0.0, "AddForce", "", obj);
    mSnowBallAddForce.init(0.0, "SnowBallAddForce", "", obj);
    mLogPushF.init(0.0, "LogPushF", "", obj);
    mRockPushF.init(0.0, "RockPushF", "", obj);
    mRockPushSpeed.init(0.0, "RockPushSpeed", "", obj);
    mWaistAngleUpperMax.init(0.0, "WaistAngleUpperMax", "", obj);
    mWaistAngleLowerMax.init(0.0, "WaistAngleLowerMax", "", obj);
    mWaistAngleSideMax.init(0.0, "WaistAngleSideMax", "", obj);
    mNoSquatWaterHeight.init(0.0, "NoSquatWaterHeight", "", obj);
    mInvalidReloadTime.init(0.0, "InvalidReloadTime", "", obj);
    mWeaponThrowSpeedY.init(0.0, "WeaponThrowSpeedY", "", obj);
    mWeaponThrowSpeedF.init(0.0, "WeaponThrowSpeedF", "", obj);
    mWeaponThrowSpeedFSquat.init(0.0, "WeaponThrowSpeedFSquat", "", obj);
    mDashUpEnableAngle.init(0.0, "DashUpEnableAngle", "", obj);
    mShockTime.init(0.0, "ShockTime", "", obj);
    mIceInvalidTime.init(0.0, "IceInvalidTime", "", obj);
    mMaxSpeedInAir.init(0.0, "MaxSpeedInAir", "", obj);
    mTurnEnableSpeed.init(0.0, "TurnEnableSpeed", "", obj);
    mTurnEnableStickSub.init(0.0, "TurnEnableStickSub", "", obj);
    mTurnEnableDirSub.init(0.0, "TurnEnableDirSub", "", obj);
    mShortDashImpulse.init(0, "ShortDashImpulse", "", obj);
    mShortDashDamage.init(0, "ShortDashDamage", "", obj);
    mSwordTerrorScope.init(0.0, "SwordTerrorScope", "", obj);
    mArrowTerrorScope.init(0.0, "ArrowTerrorScope", "", obj);
    mTorchTerrorScope.init(0.0, "TorchTerrorScope", "", obj);
    mTorchTerrorOffsetY.init(0.0, "TorchTerrorOffsetY", "", obj);
    mTorchTerrorOffsetZ.init(0.0, "TorchTerrorOffsetZ", "", obj);
    mDashNoise.init(0.0, "DashNoise", "", obj);
    mWhistleNoise.init(0.0, "WhistleNoise", "", obj);
    mClimbEnableAngle.init(0.0, "ClimbEnableAngle", "", obj);
    mClimbEnableSpeedMinAngle.init(0.0, "ClimbEnableSpeedMinAngle", "", obj);
    mClimbEnableSpeedMaxAngle.init(0.0, "ClimbEnableSpeedMaxAngle", "", obj);
    mSlipEnableSpeed.init(0.0, "SlipEnableSpeed", "", obj);
    mSlipSpeedAddMin.init(0.0, "SlipSpeedAddMin", "", obj);
    mSlipSpeedAddMax.init(0.0, "SlipSpeedAddMax", "", obj);
    mSlipSpeedAddDiamByRain.init(0.0, "SlipSpeedAddDiamByRain", "", obj);
    mMagnetAim2DPosOffsetY.init(0.0, "MagnetAim2DPosOffsetY", "", obj);
    mLookPosOffsetXZ.init(0.0, "LookPosOffsetXZ", "", obj);
    mLookPosOffsetY.init(0.0, "LookPosOffsetY", "", obj);
    mLookPosOffsetYSquat.init(0.0, "LookPosOffsetYSquat", "", obj);
    mLookPosOffsetYSwim.init(0.0, "LookPosOffsetYSwim", "", obj);
    mLookPosOffsetYHorse.init(0.0, "LookPosOffsetYHorse", "", obj);
    mLookEnableAngle.init(0.0, "LookEnableAngle", "", obj);
    mHitSlowTimeS.init(0.0, "HitSlowTimeS", "", obj);
    mHitSlowTimeM.init(0.0, "HitSlowTimeM", "", obj);
    mHitSlowTimeL.init(0.0, "HitSlowTimeL", "", obj);
    mHitSlowRate.init(0.0, "HitSlowRate", "", obj);
    mHitStopTimeS.init(0.0, "HitStopTimeS", "", obj);
    mHitStopTimeL.init(0.0, "HitStopTimeL", "", obj);
    mHitStopRate.init(0.0, "HitStopRate", "", obj);
    mAtnPosInterPolationRate.init(0.0, "AtnPosInterPolationRate", "", obj);
    mAtnPosInterPolationMin.init(0.0, "AtnPosInterPolationMin", "", obj);
    mAtnPosInterPolationMax.init(0.0, "AtnPosInterPolationMax", "", obj);
    mPredictDiffAngleMax.init(0.0, "PredictDiffAngleMax", "", obj);
    mDashToRunStickValueDec.init(0.0, "DashToRunStickValueDec", "", obj);
    mWindSupportReuseTime.init(0.0, "WindSupportReuseTime", "", obj);
    mFireSupportReuseTime.init(0.0, "FireSupportReuseTime", "", obj);
    mElectricSupportReuseTime.init(0.0, "ElectricSupportReuseTime", "", obj);
    mWaterSupportReuseTime.init(0.0, "WaterSupportReuseTime", "", obj);
    mWindSupportTimerRate.init(0.0, "WindSupportTimerRate", "", obj);
    mFireSupportTimerRate.init(0.0, "FireSupportTimerRate", "", obj);
    mElectricSupportTimerRate.init(0.0, "ElectricSupportTimerRate", "", obj);
    mWaterSupportTimerRate.init(0.0, "WaterSupportTimerRate", "", obj);
    mChemicalInvalidTime.init(0.0, "ChemicalInvalidTime", "", obj);
    mAutoDashUpTime.init(0.0, "AutoDashUpTime", "", obj);
    mAutoDashUpAngle.init(0.0, "AutoDashUpAngle", "", obj);
    mClimbRestartHeight.init(0.0, "ClimbRestartHeight", "", obj);
    mClimbRestartTime.init(0.0, "ClimbRestartTime", "", obj);
    mPushNoticeLookTime.init(0.0, "PushNoticeLookTime", "", obj);
    mEnergyUseSmall.init(0.0, "EnergyUseSmall", "", obj);
    mEnergyUseLarge.init(0.0, "EnergyUseLarge", "", obj);
    mNoEnergyDashInterval.init(0.0, "NoEnergyDashInterval", "", obj);
    mGuardableAngle.init(0.0, "GuardableAngle", "", obj);
    mStickMaxInStore.init(0.0, "StickMaxInStore", "", obj);
    mLookContinueTime.init(0.0, "LookContinueTime", "", obj);
    mPostureContinueTime.init(0.0, "PostureContinueTime", "", obj);
    mItemUseModelAlpha.init(0.0, "ItemUseModelAlpha", "", obj);
    mLadderCheckSide.init(0.0, "LadderCheckSide", "", obj);
    mLadderCheckDist.init(0.0, "LadderCheckDist", "", obj);
    mNoDeathDamageBase.init(0, "NoDeathDamageBase", "", obj);
    mNoDeathDamageAdd.init(0, "NoDeathDamageAdd", "", obj);
    mArmorCompSwimEnergyRate.init(0.0, "ArmorCompSwimEnergyRate", "", obj);
    mArmorCompRegistElecFrame.init(0.0, "ArmorCompRegistElecFrame", "", obj);
    mArmorCompNightSpeedRate.init(0.0, "ArmorCompNightSpeedRate", "", obj);
    mArmorCompClimbJumpEnergyRate.init(0.0, "ArmorCompClimbJumpEnergyRate", "", obj);
    mArmorCompPlusDropRate.init(0.0, "ArmorCompPlusDropRate", "", obj);
    mArmorCompWeaponBrakeRate.init(0.0, "ArmorCompWeaponBrakeRate", "", obj);
    mArmorCompSwordBeamAttackRate.init(0.0, "ArmorCompSwordBeamAttackRate", "", obj);
    mArmorCompAncientAttackRate.init(1.0, "ArmorCompAncientAttackRate", "", obj);
    mArmorCompBoneAttackRate.init(1.0, "ArmorCompBoneAttackRate", "", obj);
    mArmorCompTerrorLevel.init(0.0, "ArmorCompTerrorLevel", "", obj);
    mArmorCompTerrorRadius.init(0.0, "ArmorCompTerrorRadius", "", obj);
    mArmorCompNakedSwimSpeedRate.init(0.0, "ArmorCompNakedSwimSpeedRate", "", obj);
    mArmorCompNakedSwimAnimeRate.init(0.0, "ArmorCompNakedSwimAnimeRate", "", obj);
    mArmorCompNakedSwimEnergyRate.init(0.0, "ArmorCompNakedSwimEnergyRate", "", obj);
    mArmorAncientAttackRate.init(1.0, "ArmorAncientAttackRate", "", obj);
    mSupportWindNum.init(0, "SupportWindNum", "", obj);
    mSupportElectricNum.init(0, "SupportElectricNum", "", obj);
    mSupportElectricEnergy.init(0.0, "SupportElectricEnergy", "", obj);
    mSupportFireNum.init(0, "SupportFireNum", "", obj);
    mSupportWaterLifeAdd.init(0, "SupportWaterLifeAdd", "", obj);
    mSupportWaterEnergyAdd.init(0.0, "SupportWaterEnergyAdd", "", obj);
    mStickRInputFrame.init(0.0, "StickRInputFrame", "", obj);
    mDiffAngleFromLookVec.init(0.0, "DiffAngleFromLookVec", "", obj);
    mLookPosOffset.init(0.0, "LookPosOffset", "", obj);
    mLookFixAngle.init(0.0, "LookFixAngle", "", obj);
    mLookContinueTimeToCamera.init(0.0, "LookContinueTimeToCamera", "", obj);
    mCutKnockBackNoCrrDist.init(0.0, "CutKnockBackNoCrrDist", "", obj);
    mWaitUnsteadyApplyVel.init(0.0, "WaitUnsteadyApplyVel", "", obj);
    mCurseAddWeight.init(0.0, "CurseAddWeight", "", obj);
    mRoofCrashVel.init(0.0, "RoofCrashVel", "", obj);
    mCutJumpInvalidTime.init(0.0, "CutJumpInvalidTime", "", obj);
    mWaterDepthInGrudge.init(0.0, "WaterDepthInGrudge", "", obj);
    mLargeHorseLegBendAngY.init(0.0, "LargeHorseLegBendAngY", "", obj);
    mLargeHorseLegBendAngX.init(0.0, "LargeHorseLegBendAngX", "", obj);
    mLargeHorseLegBendFrame.init(0.0, "LargeHorseLegBendFrame", "", obj);
    mNoMaskPauseWaterHeight.init(0.0, "NoMaskPauseWaterHeight", "", obj);
    mLookAtThreshold.init(0.0, "LookAtThreshold", "", obj);
}

}  // namespace ksys::res
