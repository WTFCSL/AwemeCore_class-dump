//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWESearchEcommerceAladdinModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_aladdinID;
    NSString *_darkIcon;
    NSString *_lightIcon;
    NSArray *_goodsItems;
    long long _version;
    NSString *_commodityAllText;
    NSString *_commodityMoreText;
    NSString *_foldStatus;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *aladdinID;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *lightIcon;
@property (copy, nonatomic) NSArray *goodsItems;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *commodityAllText;
@property (copy, nonatomic) NSString *commodityMoreText;
@property (copy, nonatomic) NSString *foldStatus;

+ (id)aladdinIDJSONTransformer;
+ (id)goodsItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)darkIcon;
- (id)lightIcon;
- (id)aladdinID;
- (void)setLightIcon:(id)arg0;
- (void)setDarkIcon:(id)arg0;
- (id)foldStatus;
- (void)setFoldStatus:(id)arg0;
- (void)setAladdinID:(id)arg0;
- (id)goodsItems;
- (void)setGoodsItems:(id)arg0;
- (id)commodityAllText;
- (void)setCommodityAllText:(id)arg0;
- (id)commodityMoreText;
- (void)setCommodityMoreText:(id)arg0;
- (void)setVersion:(long long)arg0;
- (void).cxx_destruct;
- (id)title;
- (long long)version;
- (void)setTitle:(id)arg0;

@end
