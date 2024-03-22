//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray;

@interface AWEPOIUGCRateShopListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    unsigned long long _barType;
    NSString *_extraMsgString;
    NSDictionary *_extraMsg;
    NSArray *_shopList;
    long long _shopCursor;
    long long _shopTotal;
    NSArray *_brandList;
    long long _brandCursor;
    long long _brandTotal;
}

@property (copy, nonatomic) NSString *extraMsgString;
@property (copy, nonatomic) NSDictionary *extraMsg;
@property (retain, nonatomic) NSArray *shopList;
@property (nonatomic) long long shopCursor;
@property (nonatomic) long long shopTotal;
@property (retain, nonatomic) NSArray *brandList;
@property (nonatomic) long long brandCursor;
@property (nonatomic) long long brandTotal;
@property (nonatomic) unsigned long long barType;
@property (nonatomic) BOOL hasMore;
@property (readonly, nonatomic) BOOL isNewStyle;

+ (id)shopListJSONTransformer;
+ (id)brandListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isNewStyle;
- (id)extraMsg;
- (void)setExtraMsg:(id)arg0;
- (void)setBarType:(unsigned long long)arg0;
- (id)extraMsgString;
- (id)brandList;
- (id)shopList;
- (long long)brandCursor;
- (long long)shopCursor;
- (long long)brandTotal;
- (long long)shopTotal;
- (void)setExtraMsgString:(id)arg0;
- (void)setShopList:(id)arg0;
- (void)setShopCursor:(long long)arg0;
- (void)setShopTotal:(long long)arg0;
- (void)setBrandList:(id)arg0;
- (void)setBrandCursor:(long long)arg0;
- (void)setBrandTotal:(long long)arg0;
- (long long)cursor;
- (long long)total;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (unsigned long long)barType;
- (id)itemList;

@end
