//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface IESECGoodsGroupBuyingModel : MTLModel <IESECGoodsPriceLabelModel, MTLJSONSerializing> {
    double _endTime;
    NSArray *_groupBuyerList;
    NSNumber *_joined;
    NSNumber *_groupSize;
    NSNumber *_groupingPercent;
    NSNumber *_minPrice;
    NSNumber *_maxPrice;
    NSString *_groupID;
    NSString *_activityID;
    NSNumber *_marketPrice;
    double _initTimeinterval;
    double _serverTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSArray *groupBuyerList;
@property (retain, nonatomic) NSNumber *joined;
@property (retain, nonatomic) NSNumber *groupSize;
@property (retain, nonatomic) NSNumber *groupingPercent;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *activityID;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupBuyerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setServerTime:(double)arg0;
- (void)setGroupSize:(id)arg0;
- (id)groupSize;
- (id)minPrice;
- (id)minPrice;
- (void)setMinPrice:(id)arg0;
- (id)maxPrice;
- (id)maxPrice;
- (void)setMaxPrice:(id)arg0;
- (id)marketPrice;
- (void)setMarketPrice:(id)arg0;
- (BOOL)hasGapPrice;
- (double)initTimeinterval;
- (void)setInitTimeinterval:(double)arg0;
- (id)groupBuyerList;
- (id)groupingPercent;
- (id)groupBuyingModelWithNewInfo:(id)arg0;
- (void)setGroupBuyerList:(id)arg0;
- (void)setGroupingPercent:(id)arg0;
- (id)price;
- (void)setGroupID:(id)arg0;
- (id)init;
- (id)groupID;
- (double)serverTime;
- (void).cxx_destruct;
- (double)endTime;
- (double)currentTime;
- (void)setEndTime:(double)arg0;
- (id)activityID;
- (void)setActivityID:(id)arg0;
- (id)joined;
- (void)setJoined:(id)arg0;

@end
