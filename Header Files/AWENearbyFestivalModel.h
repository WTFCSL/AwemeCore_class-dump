//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyFestivalModel : MTLModel <MTLJSONSerializing> {
    long long _startTime;
    long long _endTime;
    long long _frequency;
    long long _dayFrequency;
    NSString *_festivalName;
    NSString *_extra;
    long long _bubbleAttribute;
    long long _totalShowCnt;
    long long _lastShowTimestamp;
    long long _lastShowTimeCnt;
}

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long frequency;
@property (nonatomic) long long dayFrequency;
@property (copy, nonatomic) NSString *festivalName;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long bubbleAttribute;
@property (nonatomic) long long totalShowCnt;
@property (nonatomic) long long lastShowTimestamp;
@property (nonatomic) long long lastShowTimeCnt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void)setExtra:(id)arg0;
- (void)setDayFrequency:(long long)arg0;
- (id)festivalName;
- (void)setFestivalName:(id)arg0;
- (long long)bubbleAttribute;
- (void)setBubbleAttribute:(long long)arg0;
- (long long)lastShowTimestamp;
- (void)setLastShowTimestamp:(long long)arg0;
- (void)setTotalShowCnt:(long long)arg0;
- (void)setLastShowTimeCnt:(long long)arg0;
- (id)initWithNearbyGuideBubble:(id)arg0;
- (long long)totalShowCnt;
- (long long)lastShowTimeCnt;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (id)extra;
- (long long)endTime;
- (long long)startTime;
- (void)setFrequency:(long long)arg0;
- (void)setEndTime:(long long)arg0;
- (long long)frequency;
- (long long)dayFrequency;

@end
