//
//     Generated by private class-dump
//

@class NSMutableDictionary, UITableViewCell, NSString, AWEPlayableWebViewPreloadManager;
@protocol AWEFeedTableViewCellProtocol;

@interface AWEFeedPlayableController : AWEBaseController <AWEFeedControllerProtocol> {
    BOOL _isInitialFetch;
    UITableViewCell<AWEFeedTableViewCellProtocol> *_currentCell;
    NSMutableDictionary *_innerPrerenderAwemes;
    AWEPlayableWebViewPreloadManager *_playablePreloadManager;
}

@property (weak, nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> *currentCell;
@property (retain, nonatomic) NSMutableDictionary *innerPrerenderAwemes;
@property (nonatomic) BOOL isInitialFetch;
@property (retain, nonatomic) AWEPlayableWebViewPreloadManager *playablePreloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInitialFetch;
- (void)setIsInitialFetch:(BOOL)arg0;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (void)preprocessAdAwemes:(id)arg0;
- (void)setPlayablePreloadManager:(id)arg0;
- (id)playablePreloadManager;
- (void)preRenderPlayableWithPreloadIndex:(long long)arg0;
- (void)clearPrerenderedPlayableWithIndex:(long long)arg0;
- (void)preprocessAdAwemes:(id)arg0 fromIndex:(long long)arg1;
- (void)preloadAlphaVideoResource:(id)arg0;
- (void)preRenderPlayableAwemeIfNeed:(id)arg0;
- (void)handleInteractiveVideo:(id)arg0;
- (void)setInnerPrerenderAwemes:(id)arg0;
- (void)preRenderSceneLynxCardIfNeeded:(long long)arg0;
- (id)innerPrerenderAwemes;
- (id)interactiveStatusModelWithAweme:(id)arg0;
- (void)removePrerenderedAweme:(id)arg0;
- (void)preRenderPlayableAweme:(id)arg0 url:(id)arg1;
- (void)resetInteractiveVideo:(id)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)clear;
- (void)viewDidLoad;
- (id)currentCell;
- (void)setCurrentCell:(id)arg0;

@end
