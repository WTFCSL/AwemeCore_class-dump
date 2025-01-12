//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWELiveLocalLifeCardRawDataModel, AWELifeShelfCardListItem;

@interface AWELiveOrderSchemaHandler : NSObject {
    NSString *_goodsOrderSchema;
    NSDictionary *_liveRoomParams;
    NSDictionary *_extraParams;
    NSDictionary *_queryParams;
    NSDictionary *_liveInfo;
    NSDictionary *_sessionParams;
    AWELiveLocalLifeCardRawDataModel *_expoundCardInfo;
    AWELifeShelfCardListItem *_cardListItem;
    long long _fromPosition;
}

@property (copy, nonatomic) NSString *goodsOrderSchema;
@property (copy, nonatomic) NSDictionary *liveRoomParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *queryParams;
@property (copy, nonatomic) NSDictionary *liveInfo;
@property (copy, nonatomic) NSDictionary *sessionParams;
@property (retain, nonatomic) AWELiveLocalLifeCardRawDataModel *expoundCardInfo;
@property (retain, nonatomic) AWELifeShelfCardListItem *cardListItem;
@property (nonatomic) long long fromPosition;

+ (id)sharedInstance;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg0;
- (void)setFromPosition:(long long)arg0;
- (long long)fromPosition;
- (void)setLiveRoomParams:(id)arg0;
- (id)liveRoomParams;
- (void)setGoodsOrderSchema:(id)arg0;
- (id)goodsOrderSchema;
- (id)createGoodsOrderSchemaWithExpoundCardInfo:(id)arg0 params:(id)arg1 liveInfo:(id)arg2;
- (id)orderQueryParamsFromClientWithShelfCardItem:(id)arg0 expoundCardItem:(id)arg1 liveRoomInfo:(id)arg2 params:(id)arg3 liveInfo:(id)arg4;
- (void)saveGoodOrderBasicParamsWithFromPosition:(long long)arg0 shelfCardItem:(id)arg1 expoundCardItem:(id)arg2 liveRoomInfo:(id)arg3 extraParams:(id)arg4 liveInfo:(id)arg5;
- (id)expoundCardInfo;
- (id)p_queryParams;
- (void)setCardListItem:(id)arg0;
- (void)setExpoundCardInfo:(id)arg0;
- (id)p_localGoodsOrderParams;
- (id)p_commonLiveInfoParamsWithBlock:(id /* block */)arg0;
- (id)p_joinParamsToEnterpriseTabExtra;
- (id)p_generatePOISession;
- (void)p_saveLocalDataForConfirmAdEvent;
- (id)p_generateShelfItemSession;
- (id)p_generateExpoundCardSession;
- (id)getLifeExtraInfoWithParams:(id)arg0;
- (id)cardListItem;
- (id)p_localGoodsOrderEnterpriseTabExtraParams:(id)arg0;
- (id)p_localGoodsOrderEnterpriseTabExtraParamsForShelfItem;
- (id)p_localGoodsOrderEnterpriseTabExtraParamsForExpoundCard;
- (id)flashStateForExpoundCard;
- (id)p_getLocalDataForConfirmAdEvent;
- (id)createGoodsOrderSchemaWithItem:(id)arg0 liveRoomInfo:(id)arg1 params:(id)arg2 liveInfo:(id)arg3;
- (id)init;
- (void).cxx_destruct;
- (id)sessionParams;
- (id)queryParams;
- (void)setSessionParams:(id)arg0;
- (void)setQueryParams:(id)arg0;

@end
