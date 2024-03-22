//
//     Generated by private class-dump
//

@class AFDVirtualAvatarsBottomBar, NSIndexPath, AFDVirtualAvatarsLightInteractionAccumulateView, NSString, UIImpactFeedbackGenerator, AFDVirtualAvatarsCollectionViewModel, NSDictionary, AFDVirtualAvatarsNavigationBar, UICollectionView, UICollectionViewCell, AFDVirtualAvatarsCollectionViewLayout;

@interface AFDVirtualAvatarsCollectionViewController : UIViewController <UICollectionViewDelegate, AFDVirtualAvatarsNavigationBarDelegate, AFDVirtualAvatarsBottomBarDelegate, UICollectionViewDataSource, AFDVirtualAvatarMessage> {
    BOOL _isScrolling;
    BOOL _isInitFinishedScroll;
    BOOL _isNeedFetchWhenViewDidLoad;
    NSString *_pageIdentifier;
    AFDVirtualAvatarsCollectionViewModel *_viewModel;
    NSDictionary *_extraParams;
    UICollectionView *_collectionView;
    AFDVirtualAvatarsCollectionViewLayout *_collectionViewLayout;
    AFDVirtualAvatarsNavigationBar *_topBar;
    AFDVirtualAvatarsBottomBar *_bottomBar;
    UICollectionViewCell *_highLightView;
    long long _animationsCounter;
    long long _accumulateCounter;
    AFDVirtualAvatarsLightInteractionAccumulateView *_accumulateView;
    NSIndexPath *_tmpShowIndexPath;
    NSString *_lastLightinteractionName;
    long long _currentAnimationTag;
    UIImpactFeedbackGenerator *_feedBackGenerator;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_actLandingTab;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AFDVirtualAvatarsCollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) AFDVirtualAvatarsNavigationBar *topBar;
@property (retain, nonatomic) AFDVirtualAvatarsBottomBar *bottomBar;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isInitFinishedScroll;
@property (retain, nonatomic) UICollectionViewCell *highLightView;
@property (nonatomic) long long animationsCounter;
@property (nonatomic) long long accumulateCounter;
@property (retain, nonatomic) AFDVirtualAvatarsLightInteractionAccumulateView *accumulateView;
@property (retain, nonatomic) NSIndexPath *tmpShowIndexPath;
@property (retain, nonatomic) NSString *lastLightinteractionName;
@property (nonatomic) long long currentAnimationTag;
@property (nonatomic) BOOL isNeedFetchWhenViewDidLoad;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedBackGenerator;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *actLandingTab;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) AFDVirtualAvatarsCollectionViewModel *viewModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)extraParams;
- (void)backButtonClicked;
- (void)setExtraParams:(id)arg0;
- (void)p_setupCollectionView;
- (void)didTapTab:(id)arg0;
- (void)p_setupBinding;
- (void)p_setupBottomBar;
- (void)didFinishRequestCreateOrEditVirtualAvatarIsFirstTime:(BOOL)arg0 emotionText:(id)arg1 emotionIcon:(id)arg2;
- (void)didUpdateVirtualAvatarWithNewUserModel:(id)arg0;
- (double)__screenAvailableWidth;
- (void)lightInteractionButtonClicked;
- (void)sendMessageButtonClicked;
- (void)duetButtonClicked;
- (void)changeClothesButtonClicked;
- (void)changeEmotionButtonClicked;
- (void)goToProfileButtonClicked;
- (void)didClickIcon:(id)arg0 schema:(id)arg1 name:(id)arg2 withModel:(id)arg3;
- (void)createVirtualAvatarButtonClicked;
- (void)didFinishPressCell;
- (void)setIsNeedFetchWhenViewDidLoad:(BOOL)arg0;
- (void)setAccumulateCounter:(long long)arg0;
- (void)setCurrentAnimationTag:(long long)arg0;
- (void)setActLandingTab:(id)arg0;
- (void)p_trackEnterPage;
- (void)setFeedBackGenerator:(id)arg0;
- (id)feedBackGenerator;
- (void)p_setupTopBar;
- (void)p_scrollToCenter;
- (id)accumulateView;
- (BOOL)isNeedFetchWhenViewDidLoad;
- (void)setIsInitFinishedScroll:(BOOL)arg0;
- (void)setHighLightView:(id)arg0;
- (id)actLandingTab;
- (void)p_handleScrollStopNeedHaptic:(BOOL)arg0;
- (double)__screenAvailableHeight;
- (void)__updateCollectionViewFrame;
- (BOOL)isInitFinishedScroll;
- (id)tmpShowIndexPath;
- (void)setTmpShowIndexPath:(id)arg0;
- (void)p_checkPageInCenterIfNeed;
- (void)transferToCreateAvatarWithDefaultEnter:(id)arg0;
- (void)p_handleScrollStop;
- (id)composeDuetRouterUrl;
- (id)lastLightinteractionName;
- (long long)currentAnimationTag;
- (void)setLastLightinteractionName:(id)arg0;
- (void)collectAndExplodeViewPerformAnimationFromView:(id)arg0 withCollectAndExplodeView:(id)arg1;
- (long long)accumulateCounter;
- (id)highLightView;
- (id)initWithUserModels:(id)arg0 isNeedFetchWhenViewDidLoad:(BOOL)arg1;
- (long long)animationsCounter;
- (void)setAnimationsCounter:(long long)arg0;
- (void)setAccumulateView:(id)arg0;
- (void)setIsScrolling:(BOOL)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)viewDidLayoutSubviews;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)collectionViewLayout;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)setBottomBar:(id)arg0;
- (BOOL)isScrolling;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)topBar;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)viewModel;
- (id)bottomBar;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTopBar:(id)arg0;
- (void)setCollectionViewLayout:(id)arg0;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;

@end
