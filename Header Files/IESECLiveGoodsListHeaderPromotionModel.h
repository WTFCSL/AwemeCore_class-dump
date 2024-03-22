//
//     Generated by private class-dump
//

@class NSString, IESECLiveGoodsListHeaderSubPromotionModel;

@interface IESECLiveGoodsListHeaderPromotionModel : MTLModel <MTLJSONSerializing> {
    long long _promotionType;
    IESECLiveGoodsListHeaderSubPromotionModel *_vertical;
    IESECLiveGoodsListHeaderSubPromotionModel *_horizontal;
}

@property (nonatomic) long long promotionType;
@property (retain, nonatomic) IESECLiveGoodsListHeaderSubPromotionModel *vertical;
@property (retain, nonatomic) IESECLiveGoodsListHeaderSubPromotionModel *horizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setPromotionType:(long long)arg0;
- (long long)promotionType;
- (void).cxx_destruct;
- (void)setVertical:(id)arg0;
- (id)vertical;
- (id)horizontal;
- (void)setHorizontal:(id)arg0;

@end