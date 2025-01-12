//
//     Generated by private class-dump
//

@interface IESECMallInnerFeedHelper : NSObject

+ (void)couponButtonActionWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)jumpToLiveRoomWithModel:(id)arg0 baseParams:(id)arg1;
+ (void)jumpToShopPageWithParams:(id)arg0;
+ (id)buildDetailParamsWithViewModel:(id)arg0 item:(id)arg1 node:(id)arg2 labelInfo:(id)arg3 index:(long long)arg4;
+ (id)commonParamsForProductEventsWithItemModel:(id)arg0 node:(id)arg1 labelInfo:(id)arg2;
+ (void)enterCommodityDetailPage:(id)arg0 viewController:(id)arg1 entranceInfoParams:(id)arg2 passthroughParams:(id)arg3 withNode:(id)arg4 withLivePlaybackMetaParams:(id)arg5 withHotSaleSKUID:(id)arg6;
+ (void)getCouponWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)useCouponWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)enterCommodityDetailPage:(id)arg0 withRoomID:(id)arg1 viewController:(id)arg2 entranceInfoParams:(id)arg3 passthroughParams:(id)arg4 withNode:(id)arg5 withUID:(id)arg6 withSecUID:(id)arg7 withItemID:(id)arg8 withLivePlaybackMetaParams:(id)arg9 withHotSaleSKUID:(id)arg10;
+ (id)commonParamsForProductEventsWithCardModel:(id)arg0 node:(id)arg1;
+ (void)addEntranceInfoFromCardModel:(id)arg0 entranceInfo:(id)arg1;
+ (id)buildDetailParamsWithViewModel:(id)arg0 item:(id)arg1 node:(id)arg2 labelInfo:(id)arg3 extraEntranceInfo:(id)arg4 index:(long long)arg5;
+ (id)subsideText:(id)arg0;
+ (BOOL)enablePerfOpt;
+ (void)enterCommodityDetailPage:(id)arg0 viewController:(id)arg1 entranceInfoParams:(id)arg2 passthroughParams:(id)arg3 withNode:(id)arg4;
+ (id)exposedMessageForParameters:(id)arg0;
+ (id)entranceInfoWithGoodsDetail:(id)arg0 extraParams:(id)arg1 node:(id)arg2;
+ (id)entranceInfoWithViewModel:(id)arg0 extraParams:(id)arg1 node:(id)arg2;
+ (id)buildEntranceInfoWithCardModel:(id)arg0 node:(id)arg1 extraEntranceInfo:(id)arg2 index:(long long)arg3;
+ (void)favoriteActionButtonDidTapWithProduct:(id)arg0 node:(id)arg1 containerView:(id)arg2 completion:(id /* block */)arg3;
+ (void)prefetchImageWithProductDict:(id)arg0;

@end
