//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSArray;

@interface AWELiveGoodsInfo : AWEBaseApiModel {
    NSString *_itemID;
    NSString *_itemSKU;
    long long _itemType;
    NSArray *_tags;
    NSArray *_imageURLs;
    NSDictionary *_platformPriceList;
    long long _itemSaleType;
    NSDictionary *_MarkInfo;
    NSDictionary *_ItemIcon;
}

@property (copy, nonatomic) NSDictionary *MarkInfo;
@property (copy, nonatomic) NSDictionary *ItemIcon;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *itemSKU;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSArray *imageURLs;
@property (copy, nonatomic) NSDictionary *platformPriceList;
@property (nonatomic) long long itemSaleType;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setItemIcon:(id)arg0;
- (id)platformPriceList;
- (id)itemSKU;
- (id)MarkInfo;
- (id)ItemIcon;
- (void)setItemSKU:(id)arg0;
- (void)setPlatformPriceList:(id)arg0;
- (long long)itemSaleType;
- (void)setItemSaleType:(long long)arg0;
- (void)setMarkInfo:(id)arg0;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (id)tags;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (void)setTags:(id)arg0;
- (id)imageURLs;
- (void)setImageURLs:(id)arg0;

@end
