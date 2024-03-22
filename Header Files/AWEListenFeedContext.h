//
//     Generated by private class-dump
//

@class NSString, AWEListenFeedViewController, AWEAwemeModel, AWEListDataController;
@protocol AWEListenFeedPlayControlViewDelegate;

@interface AWEListenFeedContext : NSObject {
    BOOL _isUserPause;
    BOOL _slidingSeekTime;
    BOOL _isUsedForSecondPage;
    BOOL _isEnterSecondPage;
    BOOL _finishScrollWhileEnter;
    BOOL _isAnimationLocked;
    BOOL _isHiddenControlView;
    AWEAwemeModel *_fromModel;
    NSString *_referString;
    NSString *_enterMethod;
    NSString *_playEnterMethod;
    double _timingRemainSeconds;
    id<AWEListenFeedPlayControlViewDelegate> _controlViewDelegate;
    AWEListDataController *_externalDataController;
    long long _initialIndex;
    long long _lastCellIndex;
    NSString *_sliderString;
    NSString *_scene;
    NSString *_mixFromListenFeedItemID;
    id /* block */ _openPlayList;
    long long _shouldAvoidDuraingPadRotate;
    AWEListenFeedViewController *_controller;
}

@property (weak, nonatomic) AWEListenFeedViewController *controller;
@property (nonatomic) BOOL isHiddenControlView;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *playEnterMethod;
@property (nonatomic) BOOL isUserPause;
@property (nonatomic) double timingRemainSeconds;
@property (nonatomic) BOOL slidingSeekTime;
@property (weak, nonatomic) id<AWEListenFeedPlayControlViewDelegate> controlViewDelegate;
@property (retain, nonatomic) AWEListDataController *externalDataController;
@property (nonatomic) long long initialIndex;
@property (nonatomic) long long lastCellIndex;
@property (copy, nonatomic) NSString *sliderString;
@property (nonatomic) BOOL isUsedForSecondPage;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL isEnterSecondPage;
@property (nonatomic) BOOL finishScrollWhileEnter;
@property (nonatomic) BOOL isAnimationLocked;
@property (copy, nonatomic) NSString *mixFromListenFeedItemID;
@property (copy, nonatomic) id /* block */ openPlayList;
@property (nonatomic) long long shouldAvoidDuraingPadRotate;

+ (BOOL)enableFixIPadRoteScreenFix;
+ (BOOL)enableFixUIGraphicsCrash;
+ (double)filterAnimationDuration;

- (id)referString;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (id)logExtraDict;
- (id)fromModel;
- (void)setFromModel:(id)arg0;
- (id)currentAweme;
- (BOOL)slidingSeekTime;
- (void)setSlidingSeekTime:(BOOL)arg0;
- (void)setExternalDataController:(id)arg0;
- (id)externalDataController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentBounds;
- (long long)shouldAvoidDuraingPadRotate;
- (void)setShouldAvoidDuraingPadRotate:(long long)arg0;
- (BOOL)isUsedForSecondPage;
- (void)setMixFromListenFeedItemID:(id)arg0;
- (void)setIsEnterSecondPage:(BOOL)arg0;
- (void)playNextVideo;
- (BOOL)hasNextVideo;
- (void)playerWillLoopPlaying;
- (void)updateUIToPauseState;
- (BOOL)isHiddenControlView;
- (void)updateProgressUI;
- (void)updateCurrentTime:(double)arg0 totalTime:(double)arg1;
- (void)updateLocalSpeed:(double)arg0;
- (void)setIsHiddenControlView:(BOOL)arg0;
- (void)interactionViewDidUpdatePlayer;
- (void)trackDescritionLabelShow;
- (BOOL)supportFilterView;
- (BOOL)isShowingContentFilter;
- (void)hideSpeedSheetIfNeed;
- (void)realShowFilterAnimation:(BOOL)arg0;
- (id)mixFromListenFeedItemID;
- (void)playNextVideoWithNoClick;
- (unsigned long long)playStyle;
- (void)hiddenControlView:(BOOL)arg0;
- (void)switchLoadingModel:(BOOL)arg0;
- (void)updateCurrentPlayModelToPlayList;
- (BOOL)useExternalDataController;
- (id)playStyleString;
- (id)getIsRecommendString:(id)arg0;
- (id)playEnterMethod;
- (void)setPlayEnterMethod:(id)arg0;
- (void)setIsUserPause:(BOOL)arg0;
- (double)timingRemainSeconds;
- (void)setTimingRemainSeconds:(double)arg0;
- (id)controlViewDelegate;
- (void)setControlViewDelegate:(id)arg0;
- (long long)lastCellIndex;
- (void)setLastCellIndex:(long long)arg0;
- (id)sliderString;
- (void)setSliderString:(id)arg0;
- (void)setIsUsedForSecondPage:(BOOL)arg0;
- (BOOL)isEnterSecondPage;
- (BOOL)finishScrollWhileEnter;
- (void)setFinishScrollWhileEnter:(BOOL)arg0;
- (BOOL)isAnimationLocked;
- (void)setIsAnimationLocked:(BOOL)arg0;
- (id /* block */)openPlayList;
- (void)setOpenPlayList:(id /* block */)arg0;
- (void)setController:(id)arg0;
- (void)resetTimer;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (double)playbackRate;
- (long long)currentIndex;
- (id)controller;
- (id)initWithController:(id)arg0;
- (BOOL)isUserPause;
- (id)scene;
- (long long)videoCount;
- (long long)initialIndex;
- (void)setInitialIndex:(long long)arg0;

@end