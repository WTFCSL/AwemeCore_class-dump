//
//     Generated by private class-dump
//

@class IESEC3DGoodsBaseModel, NSArray, IESEC3DGoodsTitleModel, IESEC3DGoodsTrackModel, NSString, NSDictionary, IESEC3DGoodsNavigationModel;

@interface IESEC3DGoodsParameters : MTLModel <MTLJSONSerializing> {
    IESEC3DGoodsTitleModel *_title;
    IESEC3DGoodsNavigationModel *_navigation;
    IESEC3DGoodsTrackModel *_trackInfo;
    NSArray *_product3DModel;
    NSArray *_buttons;
    NSArray *_productDiscountLabels;
    IESEC3DGoodsBaseModel *_goodsBaseInfo;
    NSString *_productID;
    NSString *_promotionID;
    NSString *_itemID;
    NSString *_KOLID;
    NSString *_metaParams;
    NSString *_enterFrom;
    NSDictionary *_metaParamsDict;
    NSString *_entranceInfo;
    NSDictionary *_entranceInfoDict;
    NSDictionary *_requestAdditionsDict;
    NSDictionary *_trackAdditionsDict;
}

@property (readonly, nonatomic) BOOL fromLive;
@property (retain, nonatomic) IESEC3DGoodsTitleModel *title;
@property (retain, nonatomic) IESEC3DGoodsNavigationModel *navigation;
@property (retain, nonatomic) IESEC3DGoodsTrackModel *trackInfo;
@property (retain, nonatomic) NSArray *product3DModel;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *productDiscountLabels;
@property (retain, nonatomic) IESEC3DGoodsBaseModel *goodsBaseInfo;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *KOLID;
@property (copy, nonatomic) NSString *metaParams;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *metaParamsDict;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSDictionary *entranceInfoDict;
@property (copy, nonatomic) NSDictionary *requestAdditionsDict;
@property (copy, nonatomic) NSDictionary *trackAdditionsDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonsJSONTransformer;
+ (id)product3DModelJSONTransformer;
+ (id)productDiscountLabelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)promotionID;
- (void)setPromotionID:(id)arg0;
- (void)setEntranceInfo:(id)arg0;
- (id)entranceInfo;
- (id)metaParams;
- (void)setMetaParams:(id)arg0;
- (id)KOLID;
- (void)setKOLID:(id)arg0;
- (BOOL)fromLive;
- (id)entranceInfoDict;
- (void)updateTrackParamWithRequest:(id)arg0;
- (id)product3DModel;
- (id)metaParamsDict;
- (id)goodsBaseInfo;
- (id)trackAdditionsDict;
- (id)productDiscountLabels;
- (id)requestAdditionsDict;
- (BOOL)isEnterFromGoodsDetail;
- (void)setMetaParamsDict:(id)arg0;
- (void)setEntranceInfoDict:(id)arg0;
- (void)setRequestAdditionsDict:(id)arg0;
- (void)setTrackAdditionsDict:(id)arg0;
- (BOOL)isEnterFromLiveRoom;
- (void)setProduct3DModel:(id)arg0;
- (void)setProductDiscountLabels:(id)arg0;
- (void)setGoodsBaseInfo:(id)arg0;
- (id)productID;
- (id)navigation;
- (void)setNavigation:(id)arg0;
- (void).cxx_destruct;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (id)itemID;
- (void)setProductID:(id)arg0;
- (void)setItemID:(id)arg0;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;

@end
