//
//     Generated by private class-dump
//

@class AWEPaymentButtonInfo, NSString, NSArray, AWEPaymentProductPriceInfoModel, AWEPaymentMarketingInfoModel, NSNumber, AWEURLModel;

@interface AWEPaymentEntertainmentProductModel : AWEBaseApiModel {
    NSNumber *_productID;
    NSString *_title;
    AWEURLModel *_titleCoverURL;
    NSArray *_subTitle;
    AWEURLModel *_coverURL;
    AWEPaymentProductPriceInfoModel *_priceInfoModel;
    NSNumber *_salesCount;
    AWEPaymentMarketingInfoModel *_marketingInfoModel;
    NSString *_buySchema;
    AWEPaymentButtonInfo *_buttonInfo;
    NSNumber *_skuID;
    unsigned long long _bizType;
    long long _watchPeriod;
    NSString *_productIDStr;
    NSString *_skuIDStr;
}

@property (retain, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *titleCoverURL;
@property (retain, nonatomic) NSArray *subTitle;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEPaymentProductPriceInfoModel *priceInfoModel;
@property (retain, nonatomic) NSNumber *salesCount;
@property (retain, nonatomic) AWEPaymentMarketingInfoModel *marketingInfoModel;
@property (copy, nonatomic) NSString *buySchema;
@property (retain, nonatomic) AWEPaymentButtonInfo *buttonInfo;
@property (retain, nonatomic) NSNumber *skuID;
@property (nonatomic) unsigned long long bizType;
@property (nonatomic) long long watchPeriod;
@property (copy, nonatomic) NSString *productIDStr;
@property (copy, nonatomic) NSString *skuIDStr;

+ (id)coverURLJSONTransformer;
+ (id)titleCoverURLJSONTransformer;
+ (id)priceInfoModelJSONTransformer;
+ (id)marketingInfoModelJSONTransformer;
+ (id)productIDJSONTransformer;
+ (id)skuIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)buySchema;
- (void)setBuySchema:(id)arg0;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg0;
- (id)titleCoverURL;
- (void)setTitleCoverURL:(id)arg0;
- (id)priceInfoModel;
- (void)setPriceInfoModel:(id)arg0;
- (id)salesCount;
- (void)setSalesCount:(id)arg0;
- (id)marketingInfoModel;
- (void)setMarketingInfoModel:(id)arg0;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg0;
- (id)skuID;
- (void)setSkuID:(id)arg0;
- (long long)watchPeriod;
- (void)setWatchPeriod:(long long)arg0;
- (id)productIDStr;
- (void)setProductIDStr:(id)arg0;
- (id)skuIDStr;
- (void)setSkuIDStr:(id)arg0;
- (id)productID;
- (void).cxx_destruct;
- (void)setProductID:(id)arg0;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
