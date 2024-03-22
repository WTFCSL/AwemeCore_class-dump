//
//     Generated by private class-dump
//

@class NSString, AWEDetailNewStyleShootButton, UIView, AWELuckyCatRewardBubbleView, AWEDetailServiceProvider;
@protocol BDXViewContainerProtocol;

@interface AWEDetailPropFullViewController : AWEDetailFullViewController <AWEDetailPropEmptyPageHost> {
    BOOL _isAIGCSticker;
    BOOL _isTrackActionButtonShow;
    BOOL _isAppearing;
    AWEDetailServiceProvider *_serviceProvider;
    AWELuckyCatRewardBubbleView *_rewardView;
    AWEDetailNewStyleShootButton *_createButton;
    UIView<BDXViewContainerProtocol> *_jumpToUlikeView;
    double _appearTimestamp;
}

@property (retain, nonatomic) AWELuckyCatRewardBubbleView *rewardView;
@property (nonatomic) BOOL isTrackActionButtonShow;
@property (retain, nonatomic) AWEDetailNewStyleShootButton *createButton;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *jumpToUlikeView;
@property (nonatomic) double appearTimestamp;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) BOOL isAIGCSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocolClass;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (BOOL)isAIGCSticker;
- (void)setIsAIGCSticker:(BOOL)arg0;
- (id)rewardView;
- (void)setRewardView:(id)arg0;
- (id)preViewController;
- (void)setupInjectServiceOnInit;
- (void)registerBusinessHandlersOnInit;
- (void)setupUIOnViewDidLoad;
- (void)bindViewModelOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (BOOL)needAmendEmptyAwemeListTip;
- (id)jumpToUlikeView;
- (void)setJumpToUlikeView:(id)arg0;
- (id)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocol;
- (id)emptyViewContainerForHandler:(id)arg0;
- (void)setAppearTimestamp:(double)arg0;
- (BOOL)needShowCreateAI;
- (void)updateAIGCButtonLayout;
- (void)updateJumpToUlikeButtonLayout:(BOOL)arg0 model:(id)arg1;
- (void)setUpBind;
- (void)trackStayTime:(BOOL)arg0;
- (BOOL)isTrackActionButtonShow;
- (void)setIsTrackActionButtonShow:(BOOL)arg0;
- (void)onCreateButtonClicked:(id)arg0;
- (double)appearTimestamp;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)setIsAppearing:(BOOL)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (BOOL)isAppearing;
- (id)serviceProvider;
- (void)dealloc;
- (void)viewDidLoad;
- (id)createButton;
- (void)setCreateButton:(id)arg0;

@end