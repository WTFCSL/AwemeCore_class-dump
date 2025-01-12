//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDXBridgeCreateCalendarEventMethodParamModel : BDXBridgeModel {
    NSString *_identifier;
    NSNumber *_repeatInterval;
    NSNumber *_repeatCount;
    NSNumber *_startDate;
    NSNumber *_endDate;
    NSNumber *_alarmOffset;
    NSNumber *_allDay;
    NSString *_title;
    NSString *_notes;
    NSString *_location;
    NSString *_url;
    NSString *_calendarName;
    long long _repeatFrequency;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *repeatInterval;
@property (retain, nonatomic) NSNumber *repeatCount;
@property (retain, nonatomic) NSNumber *startDate;
@property (retain, nonatomic) NSNumber *endDate;
@property (retain, nonatomic) NSNumber *alarmOffset;
@property (retain, nonatomic) NSNumber *allDay;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *calendarName;
@property (nonatomic) long long repeatFrequency;

+ (id)requiredKeyPaths;
+ (id)repeatFrequencyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)repeatFrequency;
- (long long)eventKitRepeatFrequencyType;
- (id)alarmOffset;
- (void)setAlarmOffset:(id)arg0;
- (void)setRepeatFrequency:(long long)arg0;
- (id)repeatCount;
- (void)setRepeatCount:(id)arg0;
- (id)allDay;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)location;
- (id)identifier;
- (void)setRepeatInterval:(id)arg0;
- (void)setEndDate:(id)arg0;
- (id)title;
- (id)repeatInterval;
- (id)notes;
- (id)startDate;
- (void)setLocation:(id)arg0;
- (void)setStartDate:(id)arg0;
- (void)setNotes:(id)arg0;
- (id)endDate;
- (id)url;
- (void)setAllDay:(id)arg0;
- (void)setIdentifier:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)calendarName;
- (void)setCalendarName:(id)arg0;

@end
