//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWENearbyBubbleInfoModel : AWEBaseApiModel {
    NSString *_activityID;
    NSString *_bubbleText;
    long long _bubbleRangeType;
    NSArray *_citysArray;
    long long _randomRange;
    long long _delayDuration;
    double _startTime;
    double _endTime;
    long long _frequency;
}

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *bubbleText;
@property (nonatomic) long long bubbleRangeType;
@property (retain, nonatomic) NSArray *citysArray;
@property (nonatomic) long long randomRange;
@property (nonatomic) long long delayDuration;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long frequency;

+ (BOOL)canShowNearByBubble;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)delayDuration;
- (void)setDelayDuration:(long long)arg0;
- (long long)bubbleRangeType;
- (void)setBubbleRangeType:(long long)arg0;
- (id)citysArray;
- (void)setCitysArray:(id)arg0;
- (long long)randomRange;
- (void)setRandomRange:(long long)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)endTime;
- (double)startTime;
- (void)setFrequency:(long long)arg0;
- (void)setEndTime:(double)arg0;
- (long long)frequency;
- (id)activityID;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;
- (void)setActivityID:(id)arg0;

@end