//
//     Generated by private class-dump
//

@class NSNumber, NSString, IESECLiveImageURLModel;

@interface IESECLiveListCellPriceScrollBannerItemModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_price;
    NSString *_priceHeader;
    NSString *_desc;
    NSString *_jumpSchema;
    NSNumber *_promotionID;
    NSNumber *_productID;
    IESECLiveImageURLModel *_cover;
}

@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSString *priceHeader;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *jumpSchema;
@property (retain, nonatomic) NSNumber *promotionID;
@property (retain, nonatomic) NSNumber *productID;
@property (retain, nonatomic) IESECLiveImageURLModel *cover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)promotionID;
- (void)setPromotionID:(id)arg0;
- (id)jumpSchema;
- (void)setJumpSchema:(id)arg0;
- (id)priceHeader;
- (void)setPriceHeader:(id)arg0;
- (id)price;
- (id)desc;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (void)setDesc:(id)arg0;
- (void)setPrice:(id)arg0;

@end