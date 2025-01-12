//
//     Generated by private class-dump
//

@interface IESTimeFeatureUtils : NSObject {
    long long _minute;
    long long _minuteUpdateTime;
    long long _hour;
    long long _hourUpdateTime;
    long long _weekDay;
    long long _monthDay;
}

@property (nonatomic) long long minute;
@property (nonatomic) long long minuteUpdateTime;
@property (nonatomic) long long hour;
@property (nonatomic) long long hourUpdateTime;
@property (nonatomic) long long weekDay;
@property (nonatomic) long long monthDay;

+ (id)sharedInstance;

- (long long)hourUpdateTime;
- (void)setHourUpdateTime:(long long)arg0;
- (void)setWeekDay:(long long)arg0;
- (void)setMonthDay:(long long)arg0;
- (long long)minuteUpdateTime;
- (void)setMinuteUpdateTime:(long long)arg0;
- (void)updateCurTimes;
- (void)setMinute:(long long)arg0;
- (long long)hour;
- (long long)minute;
- (void)setHour:(long long)arg0;
- (long long)weekDay;
- (long long)monthDay;

@end
