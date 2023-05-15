#pragma once

#include "magnet_item.hpp"

namespace pvz {
    struct Plant : GameObject {
        SeedType mSeedType;
        int32_t mPlantCol;
        int32_t mAnGameObject;
        int32_t mFrame;
        int32_t mFrameLength;
        int32_t mNumFrames;
        PlantState mState;
        int32_t mPlantHealth;
        int32_t mPlantMaxHealth;
        PlantSubClass mSubclass;
        int32_t mDisappearCountdown;
        int32_t mDoSpecialCountdown;
        int32_t mStateCountdown;
        int32_t mLaunchCounter;
        int32_t mLaunchRate;
        TRect<int32_t> mPlantRect;
        TRect<int32_t> mPlantAttackRect;
        int32_t mTargetX;
        int32_t mTargetY;
        int32_t mStartRow;
        int32_t mParticleID;
        int32_t mShootingCounter;
        int32_t mBodyReanimID;
        int32_t mHeadReanimID;
        int32_t mHeadReanimID2;
        int32_t mHeadReanimID3;
        int32_t mBlinkReanimID;
        int32_t mLightReanimID;
        int32_t mSleepingReanimID;
        int32_t mBlinkCountdown;
        int32_t mRecentlyEatenCountdown;
        int32_t mEatenFlashCountdown;
        int32_t mBeghouledFlashCountdown;
        float mShakeOffsetX;
        float mShakeOffsetY;
        MagnetItem mMagnetItems[5];
        int32_t mTargetZombieID; // For squash
        int32_t mWakeUpCounter;
        int32_t mInvisibilityLevel;
        SeedType mImitaterType;
        int32_t mOrientation;
        UNKNOWN_BYTES(1);
        bool mDead;
        bool mSquished;
        bool mIsAsleep;
        bool mIsOnBoard;
        bool mHighlighted;

        inline void CobCannonFire(int32_t x, int32_t y) {
            // asm("pusha;"
            //     "push %0;"
            //     "push %1;"
            //     "mov %2, %%eax;"
            //     "call %P3;"
            //     "popa;"

            //      "g"(y), "g"(x), "g"(this), "i"((void*)LAUNCH_COB_FUNC_ADDRESS)
            //      "eax", "esp");
        };
    };
} // namespace pvz
