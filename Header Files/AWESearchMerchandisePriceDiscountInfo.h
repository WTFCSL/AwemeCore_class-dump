//
//     Generated by private class-dump
//

@class AWESearchMerchandiseCommonTextStruct, AWEURLModel;

@interface AWESearchMerchandisePriceDiscountInfo : AWEBaseApiModel {
    AWEURLModel *_icon;
    AWESearchMerchandiseCommonTextStruct *_info;
}

@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWESearchMerchandiseCommonTextStruct *info;

+ (id)iconJsonTransformer;
+ (id)InfoJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)icon;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (void)setIcon:(id)arg0;

@end