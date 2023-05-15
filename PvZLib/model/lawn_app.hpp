#pragma once

#include "award_screen.hpp"
#include "board.hpp"
#include "challenge_screen.hpp"
#include "credit_screen.hpp"
#include "effect_system.hpp"
#include "game_selector.hpp"
#include "incompatible_stdlib.hpp"
#include "level_stats.hpp"
#include "music.hpp"
#include "player_info.hpp"
#include "pool_effect.hpp"
#include "pop_drm_comm.hpp"
#include "profile_mgr.hpp"
#include "reanimation.hpp"
#include "seed_chooser_screen.hpp"
#include "sexy_app.hpp"
#include "title_screen.hpp"
#include "tod_foley.hpp"
#include "typing_check.hpp"
#include "zen_garden.hpp"

namespace pvz {
    struct LawnApp : SexyApp {
        Board *mBoard;
        TitleScreen *mTitleScreen;
        GameSelector *mGameSelector;
        SeedChooserScreen *mSeedChooserScreen;
        AwardScreen *mAwardScreen;
        CreditScreen *mCreditScreen;
        ChallengeScreen *mChallengeScreen;
        TodFoley *mSoundSystem;
        IncompatibleList mControlButtonList;
        IncompatibleList mCreatedImageList;
        IncompatibleBasicString mReferId;
        IncompatibleBasicString mRegisterLink;
        IncompatibleBasicString mMod;
        bool mRegisterResourcesLoaded;
        bool mTodCheatKeys;
        GameMode mGameMode;
        GameScenes mGameScene;
        bool mLoadingZombiesThreadCompleted;
        bool mFirstTimeGameSelector;
        int32_t mGamesPlayed;
        int32_t mMaxExecutions;
        int32_t mMaxPlays;
        int32_t mMaxTime;
        bool mEasyPlantingCheat;
        PoolEffect *mPoolEffect;
        ZenGarden *mZenGarden;
        EffectSystem *mEffectSystem;
        ReanimatorCache *mReanimatorCache;
        ProfileMgr *mProfileMgr;
        PlayerInfo *mPlayerInfo;
        LevelStats *mLastLevelStats;
        bool mCloseRequest;
        int32_t mAppCounter;
        Music *mMusic;
        int32_t mCrazyDaveReanimID;
        CrazyDaveState mCrazyDaveState;
        int32_t mCrazyDaveBlinkCounter;
        int32_t mCrazyDaveBlinkReanimID;
        int32_t mCrazyDaveMessageIndex;
        IncompatibleBasicString mCrazyDaveMessageText;
        int32_t mAppRandSeed;
        HICON__ *mBigArrowCursor;
        PopDRMComm *mDRM;
        int32_t mSessionID;
        int32_t mPlayTimeActiveSession;
        int32_t mPlayTimeInactiveSession;
        BoardResult mBoardResult;
        bool mKilledYetiAndRestarted;
        TypingCheck *mKonamiCheck;
        TypingCheck *mMustacheCheck;
        TypingCheck *mMoustacheCheck;
        TypingCheck *mSuperMowerCheck;
        TypingCheck *mSuperMowerCheck2;
        TypingCheck *mFutureCheck;
        TypingCheck *mPinataCheck;
        TypingCheck *mDaisyCheck;
        TypingCheck *mSukhbirCheck;
        bool mMustacheMode;
        bool mSuperMowerMode;
        bool mFutureMode;
        bool mPinataMode;
        bool mDaisyMode;
        bool mSukhbirMode;
        UNKNOWN_BYTES(6);

        static LawnApp &GetInstance() { return **(LawnApp **) 0x6A9EC0; }
    };
} // namespace pvz
