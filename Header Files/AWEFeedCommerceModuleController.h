//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol AWEFeedAdPitayaReRankController, AWEFeedAdControllerProtocol;

@interface AWEFeedCommerceModuleController : AWEBaseController <AWEFeedControllerProtocol> {
    BOOL _isOnceRerank;
    NSObject<AWEFeedAdControllerProtocol> *_adController;
    id<AWEFeedAdPitayaReRankController> _adPitayaReRankController;
    long long _latestShowFeedIndex;
    NSMutableDictionary *_bindings;
    struct CGPoint { double x; double y; } _similarAdContentOffset;
}

@property (retain, nonatomic) NSObject<AWEFeedAdControllerProtocol> *adController;
@property (nonatomic) BOOL isOnceRerank;
@property (retain, nonatomic) id<AWEFeedAdPitayaReRankController> adPitayaReRankController;
@property (nonatomic) long long latestShowFeedIndex;
@property (retain, nonatomic) NSMutableDictionary *bindings;
@property (nonatomic) struct CGPoint { double x; double y; } similarAdContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adController;
- (void)setAdController:(id)arg0;
- (void)videoControllerWillStartNextLoop:(id)arg0;
- (void)beginLoadMore;
- (void)beginRefresh;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)tableView:(id)arg0 didEndDisplayingCellBeforeReset:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScrollEndWithActive;
- (id)adPitayaReRankController;
- (long long)latestShowFeedIndex;
- (void)setLatestShowFeedIndex:(long long)arg0;
- (void)setAdPitayaReRankController:(id)arg0;
- (BOOL)enablePitayaReRankStrategy;
- (BOOL)enableFakePitayaReRankStrategy;
- (void)reportUnshowDataFromCloseApp;
- (void)didPreloadNextCell:(long long)arg0;
- (void)setUpAdController;
- (void)setupAdPitayaReRankController;
- (void)increaseFeedAdVideoCacheWhenSlowSlideWithModel:(id)arg0 isForce:(BOOL)arg1;
- (BOOL)enableReRankStrategy;
- (struct CGPoint { double x0; double x1; })similarAdContentOffset;
- (void)updateUnshowFeedCacheData:(long long)arg0;
- (void)tryPreloadAdWebView;
- (void)setSimilarAdContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)unSetUpAdController;
- (BOOL)isOnceRerank;
- (void)setIsOnceRerank:(BOOL)arg0;
- (BOOL)unSetupAdPitayaReRankController;
- (void)monitorDuplicateItemWithRemoveArr:(id)arg0 insertArr:(id)arg1;
- (BOOL)hasDuplicateStrings:(id)arg0;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)bindings;
- (void)setBindings:(id)arg0;

@end