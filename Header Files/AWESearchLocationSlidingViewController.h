//
//     Generated by private class-dump
//

@class AWESlidingViewController, NSArray, AWEPOITouchThroughView, AWESlidingTabbarView, AWEPOIPageTracker, NSString;

@interface AWESearchLocationSlidingViewController : UIViewController <AWESlidingViewControllerDelegate, AWESearchLocationMonitorProtocol> {
    AWEPOITouchThroughView *_naviBarContainerView;
    AWESlidingViewController *_slidingViewController;
    AWESlidingTabbarView *_slidingTabbarView;
    NSArray *_searchViewControllers;
    NSArray *_tabTitles;
    NSArray *_searchLocationContexts;
    AWEPOIPageTracker *_pageTracker;
    double _startTime;
}

@property (retain, nonatomic) AWEPOITouchThroughView *naviBarContainerView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWESlidingTabbarView *slidingTabbarView;
@property (copy, nonatomic) NSArray *searchViewControllers;
@property (copy, nonatomic) NSArray *tabTitles;
@property (copy, nonatomic) NSArray *searchLocationContexts;
@property (retain, nonatomic) AWEPOIPageTracker *pageTracker;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClicked;
- (id)slidingViewController;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didFinishTransitionToIndex:(unsigned long long)arg1;
- (void)setSlidingViewController:(id)arg0;
- (void)__setUpUI;
- (id)naviBarContainerView;
- (id)tabTitles;
- (void)setNaviBarContainerView:(id)arg0;
- (id)initWithSearchLocationContexts:(id)arg0;
- (void)markRequestSend;
- (void)markRequestCost;
- (void)markRequestFinishWithError:(id)arg0;
- (void)markContentFillStartWithRequestError:(id)arg0;
- (void)markCalculateFMPWithRequestError:(id)arg0;
- (void)__selectPoiListInfo:(id)arg0;
- (BOOL)isFromPublishPath;
- (id)publishCreationId;
- (void)setPageTracker:(id)arg0;
- (id)pageTracker;
- (id)publishMonitorCommonParams;
- (void)__setUpRequiredConfig;
- (id)searchLocationContexts;
- (id)__getTitleWithType:(unsigned long long)arg0;
- (void)setSearchViewControllers:(id)arg0;
- (void)setTabTitles:(id)arg0;
- (void)__setUpNaviBarContainerView;
- (void)__setUpSlidingTabbarView;
- (void)__setUpBackButton;
- (void)_setUpSlidingViewController;
- (id)searchViewControllers;
- (void)setSlidingTabbarView:(id)arg0;
- (id)slidingTabbarView;
- (long long)p_slidingViewDefaultSelectedIndex;
- (void)setSearchLocationContexts:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)startTime;
- (void)dealloc;
- (void)viewDidLoad;

@end