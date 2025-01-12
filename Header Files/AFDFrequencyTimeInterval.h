//
//     Generated by private class-dump
//

@interface AFDFrequencyTimeInterval : NSObject <NSCopying> {
    BOOL _usingCalendar;
    double _seconds;
    unsigned long long _calendarUnit;
    long long _calendarValue;
}

@property (nonatomic) double seconds;
@property (nonatomic) BOOL usingCalendar;
@property (nonatomic) unsigned long long calendarUnit;
@property (nonatomic) long long calendarValue;

+ (id)intervalWithCalendarDays:(long long)arg0;
+ (id)intervalWithSeconds:(double)arg0;
+ (id)intervalWithDays:(double)arg0;
+ (id)intervalWithCalendarUnit:(unsigned long long)arg0 value:(long long)arg1;

- (BOOL)isDate:(id)arg0 inSameIntervalWithDate:(id)arg1;
- (BOOL)isForever;
- (id)dateBySubtractingIntervalFromDate:(id)arg0;
- (id)dateByAddingIntervalToDate:(id)arg0;
- (BOOL)usingCalendar;
- (void)setUsingCalendar:(BOOL)arg0;
- (long long)calendarValue;
- (void)setCalendarValue:(long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)seconds;
- (void)setSeconds:(double)arg0;
- (unsigned long long)calendarUnit;
- (void)setCalendarUnit:(unsigned long long)arg0;

@end
