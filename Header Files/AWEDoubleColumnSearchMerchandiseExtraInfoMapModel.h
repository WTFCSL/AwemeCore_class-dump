//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDoubleColumnSearchMerchandiseExtraInfoMapModel : AWEBaseApiModel {
    long long _isShopSearch;
    long long _productRank;
    NSString *_fromAlgorithm;
}

@property (nonatomic) long long isShopSearch;
@property (nonatomic) long long productRank;
@property (copy, nonatomic) NSString *fromAlgorithm;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)isShopSearch;
- (void)setIsShopSearch:(long long)arg0;
- (long long)productRank;
- (void)setProductRank:(long long)arg0;
- (id)fromAlgorithm;
- (void)setFromAlgorithm:(id)arg0;
- (void).cxx_destruct;

@end
