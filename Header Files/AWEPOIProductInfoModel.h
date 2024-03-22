//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEPOIServiceSpuEntryModel;

@interface AWEPOIProductInfoModel : AWEBaseApiModel {
    NSString *_leftTitle;
    NSString *_moreTitle;
    NSString *_moreUrl;
    NSArray *_products;
    unsigned long long _displayStyle;
    NSString *_source;
    NSString *_supplierId;
    AWEPOIServiceSpuEntryModel *_poiCustomerEntry;
}

@property (copy, nonatomic) NSString *leftTitle;
@property (copy, nonatomic) NSString *moreTitle;
@property (copy, nonatomic) NSString *moreUrl;
@property (retain, nonatomic) NSArray *products;
@property (nonatomic) unsigned long long displayStyle;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *supplierId;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *poiCustomerEntry;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)moreTitle;
- (id)poiCustomerEntry;
- (id)supplierId;
- (void)setMoreTitle:(id)arg0;
- (id)moreUrl;
- (void)setMoreUrl:(id)arg0;
- (void)setSupplierId:(id)arg0;
- (void)setPoiCustomerEntry:(id)arg0;
- (void)setDisplayStyle:(unsigned long long)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)products;
- (void)setSource:(id)arg0;
- (unsigned long long)displayStyle;
- (void)setProducts:(id)arg0;
- (void)setLeftTitle:(id)arg0;
- (id)leftTitle;

@end
