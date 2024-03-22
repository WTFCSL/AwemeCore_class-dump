//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, IESECGoodsPrice, IESECMatchPurchaseSkuModel;

@interface IESECMatchPurchaseItemModel : MTLModel <MTLJSONSerializing, IGListDiffable> {
    BOOL _isSelected;
    BOOL _isHigtLight;
    NSString *_productID;
    NSString *_promotionID;
    IESECURLModel *_coverImage;
    NSString *_title;
    IESECGoodsPrice *_price;
    unsigned long long _productStatus;
    NSString *_imageTips;
    NSString *_urlSchema;
    unsigned long long _skuType;
    IESECMatchPurchaseSkuModel *_specInfo;
}

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) IESECURLModel *coverImage;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isHigtLight;
@property (retain, nonatomic) IESECGoodsPrice *price;
@property (nonatomic) unsigned long long productStatus;
@property (retain, nonatomic) NSString *imageTips;
@property (copy, nonatomic) NSString *urlSchema;
@property (nonatomic) unsigned long long skuType;
@property (retain, nonatomic) IESECMatchPurchaseSkuModel *specInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setCoverImage:(id)arg0;
- (id)promotionID;
- (void)setPromotionID:(id)arg0;
- (id)specInfo;
- (void)setSpecInfo:(id)arg0;
- (id)imageTips;
- (BOOL)isHigtLight;
- (unsigned long long)productStatus;
- (unsigned long long)skuType;
- (id)urlSchema;
- (void)setIsHigtLight:(BOOL)arg0;
- (void)setProductStatus:(unsigned long long)arg0;
- (void)setImageTips:(id)arg0;
- (void)setUrlSchema:(id)arg0;
- (void)setSkuType:(unsigned long long)arg0;
- (id)price;
- (id)productID;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (id)title;
- (BOOL)isSelected;
- (void)setTitle:(id)arg0;
- (void)setPrice:(id)arg0;
- (id)coverImage;

@end