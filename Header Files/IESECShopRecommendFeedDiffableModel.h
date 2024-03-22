//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface IESECShopRecommendFeedDiffableModel : NSObject <IGListDiffable> {
    BOOL _shopProducts;
    NSString *_authorId;
    NSString *_secAuthorId;
    long long _followStatus;
    NSMutableArray *_cards;
    unsigned long long _productCardType;
    NSMutableArray *_goods;
}

@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *secAuthorId;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) NSMutableArray *cards;
@property (nonatomic) unsigned long long productCardType;
@property (retain, nonatomic) NSMutableArray *goods;
@property (nonatomic, getter=isShopProducts) BOOL shopProducts;

- (long long)followStatus;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setFollowStatus:(long long)arg0;
- (id)goods;
- (void)setGoods:(id)arg0;
- (void)setCards:(id)arg0;
- (id)secAuthorId;
- (void)setSecAuthorId:(id)arg0;
- (unsigned long long)productCardType;
- (void)setProductCardType:(unsigned long long)arg0;
- (id)mixCardModelWithType:(unsigned long long)arg0;
- (BOOL)isShopProducts;
- (void)setShopProducts:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)cards;
- (id)authorId;
- (void)setAuthorId:(id)arg0;

@end