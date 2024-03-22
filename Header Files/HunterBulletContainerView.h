//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol BDXLoadingViewProtocol;

@interface HunterBulletContainerView : HunterContainerView <BDXContainerLifecycleProtocol> {
    UIView<BDXLoadingViewProtocol> *_loadingView;
}

@property (retain, nonatomic) UIView<BDXLoadingViewProtocol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dynamicPatchModel;
- (id)createChildView;
- (void)loadWithModel:(id)arg0;
- (void)registerBridgeHandle:(id /* block */)arg0 forMethod:(id)arg1;
- (void)setContainerSizeWithWidthMode:(long long)arg0 withHeightMode:(long long)arg1;
- (void)p_loadDataWithLoadType:(long long)arg0 model:(id)arg1;
- (void)loadDataUseCacheContainer:(id)arg0;
- (void)p_fullLoadWithModel:(id)arg0;
- (void)loadSchemaWithParams:(id)arg0;
- (void)replaceCacheContainerView;
- (void)loadDataCacheOnShow;
- (void).cxx_destruct;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
