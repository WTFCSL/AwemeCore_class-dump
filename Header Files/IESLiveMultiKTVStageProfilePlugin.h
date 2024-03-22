//
//     Generated by private class-dump
//

@class UIView, NSString, IESLiveMultiKTVSingerProfileView, NSArray, IESLiveCircleProgressView, IESLiveMultiKTVEmptyProfileView, HTSLiveUser, NSNumber;
@protocol IESLiveSubscription, IESLiveMultiKTVStageProvider;

@interface IESLiveMultiKTVStageProfilePlugin : IESLiveMultiKTVStagePluginBase <IESLiveMultiKTVStageActions, IESLiveMultiKTVAudioStageVideoPreviewViewAction, IESLiveMultiKTVEndAndHotRankActions, IESLiveMultiKTVStagePluginProtocol, IESLiveMultiKTVProfileProvider> {
    BOOL _isActive;
    BOOL _shouldBlockProgress;
    BOOL _inDynamicKTV;
    BOOL _isAnimatedTagShowFaileForMusic;
    BOOL _isCPUOptimize;
    IESLiveMultiKTVEmptyProfileView *_emptyProfileView;
    IESLiveCircleProgressView *_progressView;
    IESLiveMultiKTVSingerProfileView *_singerProfileView;
    IESLiveMultiKTVSingerProfileView *_lastGameSingerProfileView;
    UIView *_normalProfileContainer;
    UIView *_container;
    id /* block */ _singerWholeAreaAction;
    NSArray *_currentImageUrls;
    NSArray *_avatarImageLoopURLs;
    NSNumber *_currentPlayingUserID;
    HTSLiveUser *_currentSinger;
    id<IESLiveSubscription> _userDisposable;
    id<IESLiveMultiKTVStageProvider> _multiKTVStageProvider;
}

@property (retain, nonatomic) IESLiveMultiKTVEmptyProfileView *emptyProfileView;
@property (retain, nonatomic) IESLiveCircleProgressView *progressView;
@property (retain, nonatomic) IESLiveMultiKTVSingerProfileView *singerProfileView;
@property (retain, nonatomic) IESLiveMultiKTVSingerProfileView *lastGameSingerProfileView;
@property (retain, nonatomic) UIView *normalProfileContainer;
@property (retain, nonatomic) UIView *container;
@property (copy, nonatomic) id /* block */ singerWholeAreaAction;
@property (retain, nonatomic) NSArray *currentImageUrls;
@property (retain, nonatomic) NSArray *avatarImageLoopURLs;
@property (retain, nonatomic) NSNumber *currentPlayingUserID;
@property (retain, nonatomic) HTSLiveUser *currentSinger;
@property (retain, nonatomic) id<IESLiveSubscription> userDisposable;
@property (nonatomic) BOOL shouldBlockProgress;
@property (nonatomic) BOOL inDynamicKTV;
@property (nonatomic) BOOL isAnimatedTagShowFaileForMusic;
@property (nonatomic) BOOL isCPUOptimize;
@property (weak, nonatomic) id<IESLiveMultiKTVStageProvider> multiKTVStageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void)didSetAttachingDIContext;
- (void)hideProgressView;
- (void)showProgressView;
- (void)p_addObserver;
- (id)currentSinger;
- (void)updateSoundAnimationWithStartURLs:(id)arg0 loopURLs:(id)arg1;
- (void)setIsCPUOptimize:(BOOL)arg0;
- (BOOL)isCPUOptimize;
- (void)updateSingBtnBackgroundGradientColorWithStartColor:(id)arg0 endColor:(id)arg1;
- (void)updateListenerPlayingTime:(double)arg0;
- (void)updateShowingTheme:(id)arg0;
- (id)playingUser;
- (id)fanTicketView;
- (id)currentPlayingUserID;
- (void)resetSingerStatus;
- (void)setCurrentPlayingUserID:(id)arg0;
- (void)setAvatarImageLoopURLs:(id)arg0;
- (id)userDisposable;
- (void)setUserDisposable:(id)arg0;
- (void)updateVideoStyleLayout:(long long)arg0;
- (void)updateStageSingMode:(int)arg0;
- (id)avatarImageLoopURLs;
- (void)enterDynamicStageMode;
- (void)exitDynamicStageMode;
- (void)didActivateInKTVStageContainerView:(id)arg0;
- (void)didDeactivated;
- (void)updateSingerPlaying:(BOOL)arg0;
- (void)updateSingerPlayingTime:(double)arg0;
- (void)updateKTVStageState:(unsigned long long)arg0;
- (void)handleMultiKTVSEIModel:(id)arg0;
- (void)updatePlayingUser:(id)arg0;
- (void)eneterChallengeMode;
- (void)exitChallengeMode;
- (id)multiKTVStageProvider;
- (void)setMultiKTVStageProvider:(id)arg0;
- (void)willDisplayEndAndHotRankView:(id)arg0 style:(unsigned long long)arg1;
- (void)willEndDisplayEndAndHotRankView:(id)arg0 style:(unsigned long long)arg1;
- (BOOL)inDynamicKTV;
- (void)setInDynamicKTV:(BOOL)arg0;
- (void)updateProgressWithPlayingTime:(double)arg0;
- (void)setCurrentSinger:(id)arg0;
- (id)singerProfileView;
- (void)setShouldBlockProgress:(BOOL)arg0;
- (void)updateProgressViewHidden:(BOOL)arg0;
- (id)lastGameSingerProfileView;
- (void)p_updateLastGameSingerProfileHidden:(BOOL)arg0;
- (BOOL)shouldBlockProgress;
- (void)p_updateSingerProfileHidden:(BOOL)arg0;
- (void)updateSingerStatusIfNeeded;
- (id)emptyProfileView;
- (BOOL)shouldContainerShow;
- (void)p_updateContainer:(BOOL)arg0;
- (void)p_didStagePanelHide;
- (BOOL)isStagePanelShowing;
- (double)bottomOffsetForChallenge;
- (BOOL)p_isActivityCandidate;
- (id)p_getWebpUrlString;
- (void)setCurrentImageUrls:(id)arg0;
- (id)currentImageUrls;
- (id)normalProfileContainer;
- (void)p_updatePlayingUser:(id)arg0;
- (id)currentImageLoopURLs;
- (void)p_updateSingerTagWithUser:(id)arg0;
- (id)currentKTVStageTagDictionary:(int)arg0;
- (void)setIsAnimatedTagShowFaileForMusic:(BOOL)arg0;
- (BOOL)enableTopUserShowMidiTagWithMuisc:(id)arg0;
- (int)getCurrentKtvActivityRoleType;
- (void)emptyProfileViewActions:(id)arg0;
- (void)didShowColdStartList;
- (void)didHideColdStartList;
- (void)p_updateSingerAnimatedTagWithUser:(id)arg0;
- (void)setEmptyProfileView:(id)arg0;
- (void)setSingerProfileView:(id)arg0;
- (void)setLastGameSingerProfileView:(id)arg0;
- (void)setNormalProfileContainer:(id)arg0;
- (id /* block */)singerWholeAreaAction;
- (void)setSingerWholeAreaAction:(id /* block */)arg0;
- (BOOL)isAnimatedTagShowFaileForMusic;
- (id)container;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setContainer:(id)arg0;
- (double)scale;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (BOOL)isActive;
- (void)layoutSubViews;

@end