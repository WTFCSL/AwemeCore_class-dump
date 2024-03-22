//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyActivityBubbleResource : AWEBaseApiModel {
    long long _activityID;
    double _startTime;
    double _endTime;
    long long _maxRepeatedCount;
    long long _repeatedTimesPerDay;
    long long _delayTimeAfterColdLaunch;
    NSString *_content;
    long long _dayCountPerPeriod;
    long long _timesPerPeriod;
}

@property (nonatomic) long long activityID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long maxRepeatedCount;
@property (nonatomic) long long repeatedTimesPerDay;
@property (nonatomic) long long delayTimeAfterColdLaunch;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long dayCountPerPeriod;
@property (nonatomic) long long timesPerPeriod;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)timesPerPeriod;
- (long long)dayCountPerPeriod;
- (long long)repeatedTimesPerDay;
- (void)setTimesPerPeriod:(long long)arg0;
- (void)setDayCountPerPeriod:(long long)arg0;
- (long long)maxRepeatedCount;
- (long long)delayTimeAfterColdLaunch;
- (void)setMaxRepeatedCount:(long long)arg0;
- (void)setRepeatedTimesPerDay:(long long)arg0;
- (void)setDelayTimeAfterColdLaunch:(long long)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)content;
- (double)endTime;
- (double)startTime;
- (void)setContent:(id)arg0;
- (void)setEndTime:(double)arg0;
- (long long)activityID;
- (void)setActivityID:(long long)arg0;

@end
