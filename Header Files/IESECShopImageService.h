//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface IESECShopImageService : IESECShopService <IESECShopImageService> {
    NSMutableSet *_preloadImgs;
}

@property (retain, nonatomic) NSMutableSet *preloadImgs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProductImageTag:(id)arg0 firstScreen:(BOOL)arg1;
- (void)preloadFirstScreenProductImages:(id)arg0 tabStyle:(long long)arg1;
- (void)preloadProductImages:(id)arg0 tabStyle:(long long)arg1 curIdx:(long long)arg2;
- (void)p_preloadProductCoverImageIfNeeded:(id)arg0 tabStyle:(long long)arg1;
- (id)preloadImgs;
- (void)setPreloadImgs:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
