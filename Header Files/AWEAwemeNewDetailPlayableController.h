//
//     Generated by private class-dump
//

@class AWEPlayableWebViewPreloadManager, NSMutableDictionary;

@interface AWEAwemeNewDetailPlayableController : AWEAwemeNewDetailBaseController {
    AWEPlayableWebViewPreloadManager *_playablePreloadManager;
    NSMutableDictionary *_prerenderAwemes;
}

@property (retain, nonatomic) AWEPlayableWebViewPreloadManager *playablePreloadManager;
@property (retain, nonatomic) NSMutableDictionary *prerenderAwemes;

- (id)prerenderAwemes;
- (void)setPrerenderAwemes:(id)arg0;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)loadMoreCompletion:(id)arg0 error:(id)arg1 isFooterRefreshing:(BOOL)arg2;
- (void)loadPreviousCompletion:(id)arg0 error:(id)arg1 isHeaderRefreshing:(BOOL)arg2;
- (void)preprocessAdAwemes:(id)arg0;
- (void)setPlayablePreloadManager:(id)arg0;
- (id)playablePreloadManager;
- (void)preRenderPlayableWithPreloadIndex:(long long)arg0;
- (void)clearPrerenderedPlayableWithIndex:(long long)arg0;
- (void)preprocessAdAwemes:(id)arg0 fromIndex:(long long)arg1;
- (void)preloadAlphaVideoResource:(id)arg0;
- (void)preRenderPlayableAwemeIfNeed:(id)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidLoad;

@end
