//
//     Generated by private class-dump
//

@class NSArray;

@interface AWELiveVSPaidInfo : AWEBaseApiModel {
    long long _paidType;
    long long _viewRight;
    long long _feedDuration;
    NSArray *_freeViewRanges;
    NSArray *_goodsInfos;
}

@property (nonatomic) long long paidType;
@property (nonatomic) long long viewRight;
@property (nonatomic) long long feedDuration;
@property (copy, nonatomic) NSArray *freeViewRanges;
@property (copy, nonatomic) NSArray *goodsInfos;

+ (id)goodsInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)paidType;
- (void)setPaidType:(long long)arg0;
- (long long)viewRight;
- (void)setViewRight:(long long)arg0;
- (id)goodsInfos;
- (id)freeViewRanges;
- (void)setFreeViewRanges:(id)arg0;
- (void)setGoodsInfos:(id)arg0;
- (void).cxx_destruct;
- (long long)feedDuration;
- (void)setFeedDuration:(long long)arg0;

@end