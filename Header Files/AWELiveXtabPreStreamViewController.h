//
//     Generated by private class-dump
//

@class AWELiveSkyLightCapsuleView, NSString, AWELiveXtabPreStreamViewModel, AWELiveTabSkyLightViewController, NSDictionary, AWELiveXtabSkyLightCatchView, AWELiveXtabDataController, UIViewController, UIPanGestureRecognizer, UIScrollView;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEXTabBaseChannelControllerProtocol;

@interface AWELiveXtabPreStreamViewController : UIViewController <UIGestureRecognizerDelegate, AWELiveXtabSkyLightCatchViewDelegate, AWEXTabChildViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> {
    BOOL _abTestSkyLight;
    id<AWEXTabBaseChannelControllerProtocol> _channelController;
    UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *_feedTableViewController;
    AWELiveXtabPreStreamViewModel *_viewModel;
    AWELiveXtabSkyLightCatchView *_catchView;
    UIPanGestureRecognizer *_gestureRecognizer;
    UIScrollView *_scrollView;
    AWELiveXtabDataController *_preStreamDataController;
    NSString *_enterFrom;
    unsigned long long _preStreamVCType;
    AWELiveTabSkyLightViewController *_skyLightViewController;
    AWELiveSkyLightCapsuleView *_capsuleView;
    NSDictionary *_landingParams;
}

@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *feedTableViewController;
@property (retain, nonatomic) AWELiveXtabPreStreamViewModel *viewModel;
@property (retain, nonatomic) AWELiveXtabSkyLightCatchView *catchView;
@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWELiveXtabDataController *preStreamDataController;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long preStreamVCType;
@property (retain, nonatomic) AWELiveTabSkyLightViewController *skyLightViewController;
@property (retain, nonatomic) AWELiveSkyLightCapsuleView *capsuleView;
@property (nonatomic) BOOL abTestSkyLight;
@property (copy, nonatomic) NSDictionary *landingParams;
@property (weak, nonatomic) id<AWEXTabBaseChannelControllerProtocol> channelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)pauseWithAnimation;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)enterFrom;
- (void)transition_didStartTransitionWithContext:(id)arg0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (void)animatedRefreshWithCompletion:(id /* block */)arg0;
- (BOOL)currentTabIsTop;
- (BOOL)canRefresh;
- (void)onAwemeDeleted:(id)arg0 isDislike:(BOOL)arg1;
- (void)onAwemeDeleted:(id)arg0 isLiveFinish:(BOOL)arg1 isDislike:(BOOL)arg2;
- (id)currentAweme;
- (id)currentAwemeID;
- (id)currentAwemeAuthorID;
- (double)getPlayTimeStamp;
- (id)channelController;
- (void)setChannelController:(id)arg0;
- (id)xtabFeedTableViewController;
- (BOOL)checkLeftPanWidth:(double)arg0;
- (BOOL)isSkyLightViewShowing;
- (unsigned long long)transition_destinatedType;
- (void)setLandingParams:(id)arg0;
- (void)setupBinding;
- (id)landingParams;
- (void)onCatchViewTouched;
- (void)onCatchViewPanned;
- (id)feedTableViewController;
- (id)skyLightViewController;
- (id)catchView;
- (void)closeSkylightAnimated:(BOOL)arg0;
- (void)setSkyLightViewController:(id)arg0;
- (void)setFeedTableViewController:(id)arg0;
- (void)setCatchView:(id)arg0;
- (id)initWithPreStreamVCType:(unsigned long long)arg0 enterFrom:(id)arg1;
- (id)initWithPreStreamVCType:(unsigned long long)arg0 enterFrom:(id)arg1 params:(id)arg2;
- (void)setPreStreamVCType:(unsigned long long)arg0;
- (void)deleteInnerItemNotification:(id)arg0;
- (BOOL)p_enableShowXtab;
- (void)requestSkyLightDataWithInitFetch:(BOOL)arg0;
- (void)trackerForSkyLightCapsuleShow;
- (void)trackerForSkyLightWindowShow;
- (double)p_getSkyLightOffsetYInXTab;
- (unsigned long long)preStreamVCType;
- (void)p_switchSkyLight;
- (void)p_setAutoEnterEnable:(BOOL)arg0;
- (void)p_updateCapsuleViewHiddenBySkyLight;
- (BOOL)abTestSkyLight;
- (BOOL)p_enableSkyLight;
- (BOOL)p_isXTabBarShowing;
- (BOOL)p_checkFristShowSkyLight;
- (BOOL)p_enableShowSkyLight;
- (void)p_hasShownSkyLightFirstTime;
- (void)p_updateXtabShowWithStatus:(BOOL)arg0;
- (void)p_updateSkyLightShowWithStatus:(BOOL)arg0;
- (void)p_openSkyLightWithAnimated:(BOOL)arg0;
- (void)p_closeSkyLightWithAnimated:(BOOL)arg0;
- (void)p_setLiveCellPureMode:(BOOL)arg0;
- (double)p_updateSubViewConstraints;
- (id)preStreamDataController;
- (void)trackerForSkyLightCapsuleClick;
- (void)setPreStreamDataController:(id)arg0;
- (void)setAbTestSkyLight:(BOOL)arg0;
- (void)setGestureRecognizer:(id)arg0;
- (void)reload;
- (void)setScrollEnabled:(BOOL)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)setCapsuleView:(id)arg0;
- (id)gestureRecognizer;
- (void)stop;
- (void)setViewModel:(id)arg0;
- (id)capsuleView;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)viewDidLoad;
- (id)scrollView;
- (void)setupUI;

@end
