//
//     Generated by private class-dump
//

@class UIView, NSString, UIImage, UIImageView, AWEListenFeedBackgroundGradientView, AWEGradientView, CAGradientLayer, AWEListenFeedExtendCoverCollectionView, AWEUILoadingView;

@interface AWEListenFeedPlayerElement : AWEListenFeedInteractionBaseElement <AWEListenFeedExtendCoverCollectionViewDelegate, AWEListenFeedExtendCoverCollectionViewDataSource, AWEPlayVideoViewControllerContainerProtocol, AWEPlayVideoDelegate> {
    BOOL _borderGradientLayerAlreadyChange;
    BOOL _isLeftLoading;
    BOOL _isRightLoading;
    BOOL _isContentFilterShowing;
    BOOL _needUpdate;
    UIView *_normalContentView;
    UIView *_mixContentView;
    UIView *_bgBorderGradientView;
    AWEGradientView *_gradientView;
    AWEListenFeedBackgroundGradientView *_backgroundGradientView;
    UIImageView *_coverImageView;
    UIImage *_defaultBgImage;
    CAGradientLayer *_borderGradientLayer;
    AWEListenFeedExtendCoverCollectionView *_extendCoverCollectionView;
    UIView *_rightLoadingContainerView;
    UIView *_leftLoadingContainerView;
    AWEUILoadingView *_leftLoadingView;
    AWEUILoadingView *_rightLoadingView;
    long long _firstIndex;
    long long _failCheckNextIndex;
    double _filterViewHeight;
    long long _delayToHideWhileFilteViewShow;
    UIImageView *_leftCover;
    UIImageView *_rightCover;
    UIImageView *_fakeBgBorderGradientView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _priviousBounds;
}

@property (retain, nonatomic) UIView *normalContentView;
@property (retain, nonatomic) UIView *mixContentView;
@property (retain, nonatomic) UIView *bgBorderGradientView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) AWEListenFeedBackgroundGradientView *backgroundGradientView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImage *defaultBgImage;
@property (retain, nonatomic) CAGradientLayer *borderGradientLayer;
@property (nonatomic) BOOL borderGradientLayerAlreadyChange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } priviousBounds;
@property (retain, nonatomic) AWEListenFeedExtendCoverCollectionView *extendCoverCollectionView;
@property (retain, nonatomic) UIView *rightLoadingContainerView;
@property (retain, nonatomic) UIView *leftLoadingContainerView;
@property (retain, nonatomic) AWEUILoadingView *leftLoadingView;
@property (retain, nonatomic) AWEUILoadingView *rightLoadingView;
@property (nonatomic) BOOL isLeftLoading;
@property (nonatomic) BOOL isRightLoading;
@property (nonatomic) long long firstIndex;
@property (nonatomic) long long failCheckNextIndex;
@property (nonatomic) BOOL isContentFilterShowing;
@property (nonatomic) double filterViewHeight;
@property (nonatomic) long long delayToHideWhileFilteViewShow;
@property (retain, nonatomic) UIImageView *leftCover;
@property (retain, nonatomic) UIImageView *rightCover;
@property (retain, nonatomic) UIImageView *fakeBgBorderGradientView;
@property (nonatomic) BOOL needUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1;
- (void)playerWillStartNextLoop:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (id)relatedViewControllerForPrefetch;
- (BOOL)playIfNeeded;
- (BOOL)needUpdate;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setNeedUpdate:(BOOL)arg0;
- (void)handleConnectionChanged:(id)arg0;
- (BOOL)isPlayerUnplayedStatus;
- (void)updateVideoPlayer;
- (long long)videoActionState;
- (void)preloadIfNeeded;
- (void)bgImageColletionView:(id)arg0 didScrollFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)defaultBgImage;
- (void)updateWithModel:(id)arg0 playModel:(id)arg1 extendModelArray:(id)arg2 mixVideoModel:(id)arg3 currentModelIndex:(long long)arg4 context:(id)arg5;
- (void)updateWithModel:(id)arg0 playModel:(id)arg1 context:(id)arg2;
- (void)extendModelArrayDidUpdate;
- (void)prepareForReuseVC;
- (void)setDefaultBgImage:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })priviousBounds;
- (void)setPriviousBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)cancelFailCheckScroll;
- (long long)userActionPlayState;
- (void)showContentFilterView:(BOOL)arg0;
- (void)checkIfFilterViewShowing;
- (long long)currentMaxEpisode;
- (void)realShowFilterAnimation:(BOOL)arg0;
- (long long)coverColletionViewNumberOfItems:(id)arg0;
- (BOOL)modelCanAddPlayerView:(long long)arg0;
- (void)coverColletionViewLoadPre:(id)arg0 withLoadingCell:(id)arg1;
- (void)coverColletionViewLoadNext:(id)arg0 withLoadingCell:(id)arg1;
- (void)coverColletionViewDidScroll:(id)arg0;
- (void)coverColletionViewWillBeginDragging:(id)arg0;
- (void)coverColletionViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)coverColletionViewDidEndScrollingAnimation:(id)arg0;
- (void)coverColletionViewDidEndDecelerating:(id)arg0;
- (void)coverColletionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)coverColletionView:(id)arg0 cellForIndexPath:(id)arg1;
- (void)removeMixPlayerViewIfNeeded;
- (id)borderGradientLayer;
- (id)bgBorderGradientView;
- (void)setBorderGradientLayer:(id)arg0;
- (void)setBgBorderGradientView:(id)arg0;
- (double)filterViewHeight;
- (void)setFilterViewHeight:(double)arg0;
- (BOOL)enableContendFilterView;
- (BOOL)isContentFilterShowing;
- (void)setIsContentFilterShowing:(BOOL)arg0;
- (void)resetContentFilterViewIfNeed;
- (void)realShowContentFilterView;
- (void)finishFilterViewAnimation:(BOOL)arg0;
- (void)realHideContentFilterView;
- (void)p_updateWithModel:(id)arg0 playModel:(id)arg1 context:(id)arg2;
- (void)playPreExtendVideoIfNeededAndAnimate:(BOOL)arg0;
- (void)playNextExtendVideoIfNeededAndAnimate:(BOOL)arg0;
- (id)extendCoverRequestDelegate;
- (id)normalContentView;
- (id)mixContentView;
- (void)setDelayToHideWhileFilteViewShow:(long long)arg0;
- (id)extendCoverCollectionView;
- (id)leftLoadingContainerView;
- (id)rightLoadingContainerView;
- (void)handleFinishScrollIten;
- (void)replaceFakeBgBorderGradientViewIfNeed;
- (long long)currentFirstEpisode;
- (long long)currentLastEpisode;
- (void)updateModelFromIndex:(long long)arg0 ToIndex:(long long)arg1 first:(BOOL)arg2 silent:(BOOL)arg3;
- (void)configPlayerViewController;
- (void)updateCoverWithPlayModel:(id)arg0;
- (void)updateBorderGradientLayerIfNeed;
- (id)getFakeCoverImageViewWithIndex:(long long)arg0;
- (void)failCheckScrollToIndex;
- (void)failCheckScrollToNext;
- (void)loadPreIfSilent:(BOOL)arg0 withCompletion:(id /* block */)arg1;
- (void)loadMoreIfSilent:(BOOL)arg0 withCompletion:(id /* block */)arg1;
- (void)__showWifiToastIfNeed;
- (void)updateMixPlayIfNeededFromIndex:(long long)arg0 ToIndex:(long long)arg1;
- (void)hideExtendCoverCollectionCell:(BOOL)arg0 index:(long long)arg1;
- (void)playFirstVideoInMixDataArray;
- (BOOL)borderGradientLayerAlreadyChange;
- (void)setIsLeftLoading:(BOOL)arg0;
- (void)setIsRightLoading:(BOOL)arg0;
- (void)showLeftLoadingView:(BOOL)arg0 force:(BOOL)arg1;
- (void)showRightLoadingView:(BOOL)arg0 force:(BOOL)arg1;
- (BOOL)checkModelCanAddPlayerView:(id)arg0;
- (void)updateMixPlayerFromIndex:(long long)arg0 ToIndex:(long long)arg1;
- (BOOL)isLeftLoading;
- (id)leftLoadingCell;
- (BOOL)isRightLoading;
- (id)rightLoadingCell;
- (long long)delayToHideWhileFilteViewShow;
- (void)setFailCheckNextIndex:(long long)arg0;
- (long long)failCheckNextIndex;
- (long long)realNumberOfCoverItems;
- (id)leftLoadingView;
- (id)rightLoadingView;
- (void)prepareMixForFilterViewAnimationStart;
- (void)hideExtendNearbyCellIfNeeded:(BOOL)arg0;
- (id)leftCover;
- (id)rightCover;
- (void)configLayoutFilterView:(BOOL)arg0;
- (void)finishMixForFilterViewAnimation;
- (void)setLeftCover:(id)arg0;
- (void)setRightCover:(id)arg0;
- (void)setFakeBgBorderGradientView:(id)arg0;
- (id)fakeBgBorderGradientView;
- (void)setBorderGradientLayerAlreadyChange:(BOOL)arg0;
- (void)setNormalContentView:(id)arg0;
- (void)setMixContentView:(id)arg0;
- (void)setExtendCoverCollectionView:(id)arg0;
- (void)setRightLoadingContainerView:(id)arg0;
- (void)setLeftLoadingContainerView:(id)arg0;
- (void)setLeftLoadingView:(id)arg0;
- (void)setRightLoadingView:(id)arg0;
- (long long)numberOfItems;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (BOOL)stop;
- (void)setGradientView:(id)arg0;
- (long long)firstIndex;
- (BOOL)play;
- (id)gradientView;
- (BOOL)pause;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)backgroundGradientView;
- (void)setBackgroundGradientView:(id)arg0;
- (void)resetVideoPlayer;
- (void)setFirstIndex:(long long)arg0;

@end