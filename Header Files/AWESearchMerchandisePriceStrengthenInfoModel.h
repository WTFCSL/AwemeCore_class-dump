//
//     Generated by private class-dump
//

@class AWESearchMerchandiseCommonTextStruct, AWEURLModel;

@interface AWESearchMerchandisePriceStrengthenInfoModel : AWEBaseApiModel {
    AWEURLModel *_priceTrendBg;
    AWEURLModel *_priceGrabIcon;
    AWEURLModel *_priceTag;
    AWESearchMerchandiseCommonTextStruct *_priceUnderLine;
    AWESearchMerchandiseCommonTextStruct *_priceSuffix;
}

@property (retain, nonatomic) AWEURLModel *priceTrendBg;
@property (retain, nonatomic) AWEURLModel *priceGrabIcon;
@property (retain, nonatomic) AWEURLModel *priceTag;
@property (retain, nonatomic) AWESearchMerchandiseCommonTextStruct *priceUnderLine;
@property (retain, nonatomic) AWESearchMerchandiseCommonTextStruct *priceSuffix;

+ (id)priceTrendBgJsonTransformer;
+ (id)priceGrabIconJsonTransformer;
+ (id)priceTagJsonTransformer;
+ (id)priceUnderLineJsonTransformer;
+ (id)priceSuffixJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)priceTag;
- (void)setPriceTag:(id)arg0;
- (id)priceSuffix;
- (void)setPriceSuffix:(id)arg0;
- (id)priceTrendBg;
- (void)setPriceTrendBg:(id)arg0;
- (id)priceGrabIcon;
- (void)setPriceGrabIcon:(id)arg0;
- (id)priceUnderLine;
- (void)setPriceUnderLine:(id)arg0;
- (void).cxx_destruct;

@end
