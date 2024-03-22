//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECGoodsSeckillModel : MTLModel <IESECGoodsPriceLabelModel, MTLJSONSerializing> {
    NSString *_title;
    double _noticeTime;
    double _beginTime;
    double _endTime;
    NSNumber *_minPrice;
    NSNumber *_maxPrice;
    NSString *_cardTitle;
    NSNumber *_marketPrice;
    NSString *_activityID;
    double _initTimeinterval;
    double _serverTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double noticeTime;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (copy, nonatomic) NSString *cardTitle;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (readonly, nonatomic) double currentTime;
@property (copy, nonatomic) NSString *activityID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setServerTime:(double)arg0;
- (id)minPrice;
- (id)minPrice;
- (void)setMinPrice:(id)arg0;
- (id)maxPrice;
- (id)maxPrice;
- (void)setMaxPrice:(id)arg0;
- (id)marketPrice;
- (void)setMarketPrice:(id)arg0;
- (BOOL)hasGapPrice;
- (double)noticeTime;
- (void)setNoticeTime:(double)arg0;
- (double)initTimeinterval;
- (void)setInitTimeinterval:(double)arg0;
- (id)price;
- (id)init;
- (double)serverTime;
- (void).cxx_destruct;
- (void)setBeginTime:(double)arg0;
- (double)endTime;
- (id)title;
- (double)currentTime;
- (void)setEndTime:(double)arg0;
- (double)beginTime;
- (void)setTitle:(id)arg0;
- (id)cardTitle;
- (void)setCardTitle:(id)arg0;
- (id)activityID;
- (void)setActivityID:(id)arg0;

@end
