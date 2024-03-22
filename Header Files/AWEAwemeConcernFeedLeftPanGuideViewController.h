//
//     Generated by private class-dump
//

@class AWEFeedConcernLeftPanGuideViewModel, AWEFeedConcernLeftPanGuideView, NSString, UIViewController;
@protocol AWEAwemeConcernFeedLeftPanGuideViewControllerDelegate;

@interface AWEAwemeConcernFeedLeftPanGuideViewController : UIViewController <CAAnimationDelegate, AWEFollowFeedAlertShowDelegate, AWEAwemeConcernLeftPanGuideProtocol> {
    BOOL _isReachFollowLeftPanaGuideShowTime;
    BOOL _allFeedShow;
    id<AWEAwemeConcernFeedLeftPanGuideViewControllerDelegate> _delegate;
    AWEFeedConcernLeftPanGuideViewModel *_viewModel;
    AWEFeedConcernLeftPanGuideView *_leftPanGuideView;
    UIViewController *_parentVC;
}

@property (retain, nonatomic) AWEFeedConcernLeftPanGuideViewModel *viewModel;
@property (retain, nonatomic) AWEFeedConcernLeftPanGuideView *leftPanGuideView;
@property (weak, nonatomic) UIViewController *parentVC;
@property (nonatomic) BOOL isReachFollowLeftPanaGuideShowTime;
@property (nonatomic) BOOL allFeedShow;
@property (weak, nonatomic) id<AWEAwemeConcernFeedLeftPanGuideViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)bindObserver;
- (void)__addObserver;
- (void)showFollowFeedAlert:(id)arg0 withCompletion:(id /* block */)arg1;
- (BOOL)canShowFollowFeedAlert:(id)arg0;
- (void)stopGuideAnimation;
- (void)concernHandleTransition:(long long)arg0 context:(id)arg1 parentViewController:(id)arg2;
- (id)initWithParentVC:(id)arg0;
- (BOOL)hadShowConcernUserProfileGuideView;
- (void)awe_nunkiForbidLeftPanGuideView;
- (void)setAllFeedShow:(BOOL)arg0;
- (BOOL)allFeedShow;
- (id)leftPanGuideView;
- (void)leftPanGuideViewAnimation:(BOOL)arg0;
- (void)__videoWillLoop:(id)arg0;
- (void)__hasBecomeSecondCell:(id)arg0;
- (void)setIsReachFollowLeftPanaGuideShowTime:(BOOL)arg0;
- (BOOL)shouldAvoidGuideView;
- (void)__startSingleColumnFeedGuideAnimationWithVC:(id)arg0;
- (void)__startGuideAnimation;
- (void)__addAnimationViewOnParentSingleColumnVC;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; })originModelContext;
- (void)__triggleAnimation;
- (void)__addViewOnParentVC;
- (void)__stopGuideAnimation:(BOOL)arg0;
- (void)startAnimationPhaseOne;
- (void)startAnimationPhaseTwo;
- (BOOL)isReachFollowLeftPanaGuideShowTime;
- (void)setLeftPanGuideView:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end
