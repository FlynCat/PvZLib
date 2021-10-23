#pragma once

namespace pvz {
    struct Zombie : GameObject {
        ZombieType mZombieType;
        ZombiePhase mZombiePhase;
        float mPosX;
        float mPosY;
        float mVelX;
        int32_t mAnimCounter;
        int32_t mGroanCounter;
        int32_t mAnimTicksPerFrame;
        int32_t mAnimFrames;
        int32_t mFrame;
        int32_t mPrevFrame;
        bool mVariant;
        bool mIsEating;
        int32_t mJustGotShotCounter;
        int32_t mShieldJustGotShotCounter;
        int32_t mShieldRecoilCounter;
        int32_t mZombieAge;
        ZombieHeight mZombieHeight;
        int32_t mPhaseCounter;
        int32_t mFromWave;
        bool mDroppedLoot;
        int32_t mZombieFade;
        bool mFlatTires;
        int32_t mUseLadderCol;
        int32_t mTargetCol;
        float mAltitude;
        bool mHitUmbrella;
        TRect<int32_t> mZombieRect;
        TRect<int32_t> mZombieAttackRect;
        int32_t mChilledCounter;
        int32_t mButteredCounter;
        int32_t mIceTrapCounter;
        bool mMindControlled;
        bool mBlowingAway;
        bool mHasHead;
        bool mHasArm;
        bool mHasObject;
        bool mInPool;
        bool mOnHighGround;
        bool mYuckyFace;
        int32_t mYuckyFaceCounter;
        HelmType mHelmType;
        int32_t mBodyHealth;
        int32_t mBodyMaxHealth;
        int32_t mHelmHealth;
        int32_t mHelmMaxHealth;
        ShieldType mShieldType;
        int32_t mShieldHealth;
        int32_t mShieldMaxHealth;
        int32_t mFlyingHealth;
        int32_t mFlyingMaxHealth;
        bool mDead;
        int32_t mRelatedZombieID;
        int32_t mFollowerZombieID[4];
        bool mPlayingSong;
        int32_t mParticleOffsetX;
        int32_t mParticleOffsetY;
        int32_t mAttachmentID;
        int32_t mSummonCounter;
        int32_t mBodyReanimID;
        float mScaleZombie;
        float mVelZ;
        float mOrginalAnimRate;
        int32_t mTargetPlantID;
        int32_t mBossMode;
        int32_t mTargetRow;
        int32_t mBossBungeeCounter;
        int32_t mBossStompCounter;
        int32_t mBossHeadCounter;
        int32_t mBossFireBallReanimID;
        int32_t mSpecialHeadReanimID;
        int32_t mFireballRow;
        bool mIsFireBall;
        int32_t mMoweredReanimID;
        int32_t mLastPortalX;
    };
} // namespace pvz
