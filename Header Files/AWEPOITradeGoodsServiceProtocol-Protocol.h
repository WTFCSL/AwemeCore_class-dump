//
//     Generated by private class-dump
//

@class NSObject;
@protocol AWEDynamicCardContextProtocol;

@protocol AWEPOITradeGoodsServiceProtocol <NSObject>

@property (weak, nonatomic) NSObject<AWEDynamicCardContextProtocol> *dynamicCardContext;

- (void)preloadConcernGoodsCardWithDataArray:(id)arg0 fromIndex:(int)arg1 dataSourceCount:(int)arg2 fetchType:(long long)arg3;
- (void)showGoodsServiceUnsubscribePopupViewWithAwemeModel:(id)arg0;
- (id)generateShareWebPOIGoodsModelWithAweme:(id)arg0;
- (id)generateShareWebPOIGoodsModelForContextTargetWithAweme:(id)arg0;
- (void)dislikePOIGoodsCardWithAweme:(id)arg0;
- (void)updateGoodsSubscribeStatusWithOperation:(long long)arg0 forUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dynamicCardContext;
- (void)getSubscribeGoodsSettingStatusCompletion:(id /* block */)arg0;
- (void)sendLongPressPanelEventWithEvent:(id)arg0 params:(id)arg1;
- (void)setDynamicCardContext:(id)arg0;

@end
