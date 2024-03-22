//
//     Generated by private class-dump
//

@class TTVideoEngine, UIView, AWEAdLongVideoContext, AWELongVideoAdPageContext, AWEAdLongVideoInteractionView, AWEAdLVPlayerPreloader, CADisplayLink, NSString, AWELongVideoAdPlayerContext, AWEAdLongVideoContainerViewModel;
@protocol AWEAdLandscapeLongVideoDelegate, AWEAdLongVideoContainerInteractionDelegate, AWEAdLongVideoPlayerControllDelegate, AWEAdLongVideoContainerLifeCycleDelegate, AWEAdRelatedLongVideoDelegate;

@interface AWEAdLongVideoContainerViewController : UIViewController <AWEAdLongVideoContainerViewController, TTVideoEngineDelegate, TTVideoEngineDataSource> {
    BOOL _showAdCompleted;
    BOOL _isViewAppeared;
    id<AWEAdLongVideoPlayerControllDelegate> _landscapeLongVideoPlayerDelegate;
    id<AWEAdLongVideoContainerInteractionDelegate> interactionDelegate;
    id /* block */ landingscapeVideoClickBlock;
    id<AWEAdLandscapeLongVideoDelegate> landscapeLongVideoDelegate;
    id<AWEAdLongVideoContainerLifeCycleDelegate> lifeCycleDelegate;
    long long orientationType;
    id<AWEAdRelatedLongVideoDelegate> relatedLongVideoDelegate;
    AWEAdLongVideoContainerViewModel *_viewModel;
    TTVideoEngine *_playerViewController;
    UIView *_playerBackgroundView;
    AWEAdLongVideoInteractionView *_interactionView;
    AWELongVideoAdPlayerContext *_playerContext;
    AWELongVideoAdPageContext *_pageCongtext;
    AWEAdLongVideoContext *_currentLongVideoContext;
    AWEAdLVPlayerPreloader *_preloader;
    CADisplayLink *_playerDisplayLink;
    double _displayRemainingTime;
    double _duration;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _portraitFrame;
}

@property (retain, nonatomic) AWEAdLongVideoContainerViewModel *viewModel;
@property (retain, nonatomic) TTVideoEngine *playerViewController;
@property (retain, nonatomic) UIView *playerBackgroundView;
@property (retain, nonatomic) AWEAdLongVideoInteractionView *interactionView;
@property (retain, nonatomic) AWELongVideoAdPlayerContext *playerContext;
@property (retain, nonatomic) AWELongVideoAdPageContext *pageCongtext;
@property (retain, nonatomic) AWEAdLongVideoContext *currentLongVideoContext;
@property (retain, nonatomic) AWEAdLVPlayerPreloader *preloader;
@property (retain, nonatomic) CADisplayLink *playerDisplayLink;
@property (nonatomic) double displayRemainingTime;
@property (nonatomic) BOOL showAdCompleted;
@property (nonatomic) double duration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } portraitFrame;
@property (nonatomic) BOOL isViewAppeared;
@property (weak, nonatomic) id<AWEAdRelatedLongVideoDelegate> relatedLongVideoDelegate;
@property (weak, nonatomic) id<AWEAdLandscapeLongVideoDelegate> landscapeLongVideoDelegate;
@property (weak, nonatomic) id<AWEAdLongVideoContainerLifeCycleDelegate> lifeCycleDelegate;
@property (weak, nonatomic) id<AWEAdLongVideoContainerInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id<AWEAdLongVideoPlayerControllDelegate> landscapeLongVideoPlayerDelegate;
@property (copy, nonatomic) id /* block */ landingscapeVideoClickBlock;
@property (nonatomic) long long orientationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)setupGesture;
- (id)lifeCycleDelegate;
- (void)setLifeCycleDelegate:(id)arg0;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)videoEngine:(id)arg0 mdlKey:(id)arg1 hitCacheSze:(long long)arg2;
- (id)playerBackgroundView;
- (void)setOrientationType:(long long)arg0;
- (void)bindOberserver;
- (id)playerContext;
- (BOOL)isViewAppeared;
- (id)playerDisplayLink;
- (double)displayRemainingTime;
- (void)setIsViewAppeared:(BOOL)arg0;
- (BOOL)showAdCompleted;
- (id)pageCongtext;
- (void)clearCurrentLongVideoAdData;
- (void)setShowAdCompleted:(BOOL)arg0;
- (long long)orientationType;
- (id)relatedLongVideoDelegate;
- (id)landscapeLongVideoPlayerDelegate;
- (void)setPlayerContext:(id)arg0;
- (void)setPageCongtext:(id)arg0;
- (void)updatePlayerTimer;
- (void)setPlayerDisplayLink:(id)arg0;
- (void)setDisplayRemainingTime:(double)arg0;
- (void)refreshWithAdModels:(id)arg0;
- (void)adConatinerShowCompleted;
- (void)didTappedMainAreaView:(id)arg0;
- (void)didTappedEnterFullScreenView:(id)arg0;
- (void)didTappedLearnMoreView:(id)arg0;
- (void)didTappedBackbutton;
- (void)didTappedTimerCloseAdView:(id)arg0;
- (id)currentLongVideoContext;
- (id)landscapeLongVideoDelegate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })portraitFrame;
- (void)updateInterActionViewWithModel:(id)arg0 orientationType:(long long)arg1;
- (void)clickOpenAppOrLandingPageWithArea:(long long)arg0;
- (void)setPortraitFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setLandingscapeVideoClickBlock:(id /* block */)arg0;
- (void)updateTimeLabelWithRemainTime:(double)arg0 canCloseRemainTime:(double)arg1;
- (void)updatePlayerViewFrame;
- (void)initialAllData;
- (void)setupPlayerTimer;
- (BOOL)isAdContainerDislaying;
- (void)setRelatedLongVideoDelegate:(id)arg0;
- (void)setLandscapeLongVideoDelegate:(id)arg0;
- (void)setLandscapeLongVideoPlayerDelegate:(id)arg0;
- (id /* block */)landingscapeVideoClickBlock;
- (void)setPlayerBackgroundView:(id)arg0;
- (void)setCurrentLongVideoContext:(id)arg0;
- (void)didBecomeActive;
- (id)init;
- (void)updateTimer;
- (id)playerViewController;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setInteractionView:(id)arg0;
- (void)didResignActive;
- (void)setInteractionDelegate:(id)arg0;
- (id)interactionDelegate;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (double)duration;
- (id)viewModel;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)interactionView;
- (void)dealloc;
- (void)setDuration:(double)arg0;
- (id)preloader;
- (void)setPreloader:(id)arg0;
- (void)setPlayerViewController:(id)arg0;
- (void)setupPlayer;
- (void)refreshWithContext:(id)arg0;

@end
