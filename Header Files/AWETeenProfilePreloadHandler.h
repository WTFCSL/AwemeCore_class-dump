//
//     Generated by private class-dump
//

@class NSString, UICollectionView;

@interface AWETeenProfilePreloadHandler : NSObject {
    BOOL _enabled;
    UICollectionView *_collectionView;
    NSString *_preloadScene;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *preloadScene;
@property (nonatomic) BOOL enabled;

+ (id)handlerWithCollectionView:(id)arg0 preloadScene:(id)arg1;
+ (void)preloaderUpdateParallelNumberIfLeavePage:(BOOL)arg0;

- (long long)videoPreloadSize;
- (id)preloadScene;
- (void)setPreloadScene:(id)arg0;
- (void)handleConnectionChanged:(id)arg0;
- (void)cancelPreload;
- (id)preloaderForModel:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0 referString:(id)arg1;
- (void)startVideoPreload:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 referString:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0 referString:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0 referString:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg0 referString:(id)arg1;
- (id)initWithCollectionView:(id)arg0 preloadScene:(id)arg1;
- (BOOL)shouldPreloadWithCell:(id)arg0 collectionView:(id)arg1;
- (void)preloadDataWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)__preloadActionWithModel:(id)arg0 bsModel:(id)arg1 urlModel:(id)arg2 preloadSize:(long long)arg3 completion:(id /* block */)arg4;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setEnabled:(BOOL)arg0;
- (void)dealloc;

@end
