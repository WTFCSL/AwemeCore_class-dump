//
//     Generated by private class-dump
//

@class DUXPicker, NSDateFormatter, NSTimeZone, NSCalendar, NSDate, NSString;

@interface AWEPadChildDatePicker : UIView <DUXPickerDelegate> {
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSDate *_currentDate;
    NSTimeZone *_timeZone;
    NSCalendar *_calendar;
    unsigned long long _extraYearsBeforeMinYear;
    unsigned long long _extraYearsAfterMaxYear;
    DUXPicker *_picker;
    NSDateFormatter *_fmt;
}

@property (retain, nonatomic) DUXPicker *picker;
@property (retain, nonatomic) NSDateFormatter *fmt;
@property (copy, nonatomic) NSDate *minimumDate;
@property (copy, nonatomic) NSDate *maximumDate;
@property (copy, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSCalendar *calendar;
@property (nonatomic) unsigned long long extraYearsBeforeMinYear;
@property (nonatomic) unsigned long long extraYearsAfterMaxYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)componentCountInDUXPicker:(id)arg0;
- (long long)duxPicker:(id)arg0 numberOfRowsInComponent:(long long)arg1;
- (id)duxPicker:(id)arg0 titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (void)setExtraYearsBeforeMinYear:(unsigned long long)arg0;
- (void)setExtraYearsAfterMaxYear:(unsigned long long)arg0;
- (void)checkCurrentDate;
- (unsigned long long)extraYearsBeforeMinYear;
- (void)reloadComponents;
- (unsigned long long)extraYearsAfterMaxYear;
- (void)updateTimeByTimeZone;
- (void)setFmt:(id)arg0;
- (void)setCalendar:(id)arg0;
- (id)calendar;
- (void)setTimeZone:(id)arg0;
- (void).cxx_destruct;
- (id)timeZone;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrentDate:(id)arg0;
- (id)currentDate;
- (id)fmt;
- (id)minimumDate;
- (void)setMinimumDate:(id)arg0;
- (id)maximumDate;
- (void)setMaximumDate:(id)arg0;
- (id)picker;
- (void)setPicker:(id)arg0;

@end
