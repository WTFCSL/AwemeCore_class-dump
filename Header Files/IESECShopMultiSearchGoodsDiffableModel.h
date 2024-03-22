//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface IESECShopMultiSearchGoodsDiffableModel : NSObject <IGListDiffable> {
    NSString *_authorId;
    NSString *_secAuthorId;
    NSMutableArray *_goods;
    long long _followStatus;
    unsigned long long _productCardType;
}

@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *secAuthorId;
@property (retain, nonatomic) NSMutableArray *goods;
@property (nonatomic) long long followStatus;
@property (nonatomic) unsigned long long productCardType;

- (long long)followStatus;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setFollowStatus:(long long)arg0;
- (id)goods;
- (void)setGoods:(id)arg0;
- (id)secAuthorId;
- (void)setSecAuthorId:(id)arg0;
- (unsigned long long)productCardType;
- (void)setProductCardType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)authorId;
- (void)setAuthorId:(id)arg0;

@end
