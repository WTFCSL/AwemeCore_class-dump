//
//     Generated by private class-dump
//

@class NSArray, NSString, NSURL, NSDate;

@interface BDCalendarEventModel : NSObject {
    BOOL _allDay;
    NSString *_eventIdentifier;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_title;
    NSString *_location;
    NSString *_notes;
    NSURL *_URL;
    NSArray *_alarms;
    NSArray *_recurrenceRules;
}

@property (copy, nonatomic) NSArray *alarms;
@property (copy, nonatomic) NSArray *recurrenceRules;
@property (copy, nonatomic) NSString *eventIdentifier;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSURL *URL;

- (void)addAlarmsWithRelativeOffsets:(id)arg0;
- (void)addRecurrenceRuleWithInterval:(long long)arg0 repeatCount:(long long)arg1 frequency:(long long)arg2;
- (void)setAlarms:(id)arg0;
- (BOOL)allDay;
- (void)setEventIdentifier:(id)arg0;
- (void).cxx_destruct;
- (id)eventIdentifier;
- (id)alarms;
- (id)location;
- (void)setURL:(id)arg0;
- (void)setEndDate:(id)arg0;
- (id)title;
- (id)notes;
- (id)startDate;
- (void)setLocation:(id)arg0;
- (void)setStartDate:(id)arg0;
- (void)setNotes:(id)arg0;
- (id)URL;
- (id)endDate;
- (void)setAllDay:(BOOL)arg0;
- (void)setTitle:(id)arg0;
- (void)setRecurrenceRules:(id)arg0;
- (id)recurrenceRules;

@end
