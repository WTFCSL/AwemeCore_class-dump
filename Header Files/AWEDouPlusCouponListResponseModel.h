//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEDouPlusCouponListResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    NSArray *_couponList;
}

@property (copy, nonatomic) NSArray *couponList;
@property (nonatomic) BOOL hasMore;

+ (id)couponListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)couponList;
- (void)setCouponList:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;

@end