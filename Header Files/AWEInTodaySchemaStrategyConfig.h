//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEInTodaySchemaStrategyConfig : MTLModel <MTLJSONSerializing> {
    BOOL _aggregateVideo;
    BOOL _aggregateImage;
    BOOL _sortCreateTime;
    long long _pastType;
    NSString *_aggregatedDateRange;
    long long _maxVideoDuration;
    long long _maxAssetsCount;
    NSArray *_tagWeightList;
}

@property (nonatomic) long long pastType;
@property (copy, nonatomic) NSString *aggregatedDateRange;
@property (nonatomic) BOOL aggregateVideo;
@property (nonatomic) long long maxVideoDuration;
@property (nonatomic) BOOL aggregateImage;
@property (nonatomic) BOOL sortCreateTime;
@property (nonatomic) long long maxAssetsCount;
@property (copy, nonatomic) NSArray *tagWeightList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagWeightListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)maxVideoDuration;
- (id)tagWeightList;
- (void)setTagWeightList:(id)arg0;
- (void)setMaxVideoDuration:(long long)arg0;
- (void)setPastType:(long long)arg0;
- (id)aggregatedDateRange;
- (void)setAggregatedDateRange:(id)arg0;
- (BOOL)aggregateVideo;
- (void)setAggregateVideo:(BOOL)arg0;
- (BOOL)aggregateImage;
- (void)setAggregateImage:(BOOL)arg0;
- (BOOL)sortCreateTime;
- (void)setSortCreateTime:(BOOL)arg0;
- (long long)maxAssetsCount;
- (void)setMaxAssetsCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)pastType;

@end
