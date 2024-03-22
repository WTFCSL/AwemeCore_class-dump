//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AnnieCreateCalendarEventParamModel : IESLiveBridgeModel {
    BOOL _allDay;
    NSNumber *_alarmOffset;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *startDate;
@property (retain, nonatomic) NSNumber *endDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) NSNumber *alarmOffset;
@property (nonatomic) BOOL allDay;
@property (nonatomic) long long repeatFrequency;
@property (retain, nonatomic) NSNumber *repeatInterval;
@property (retain, nonatomic) NSNumber *repeatCount;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (long long)eventKitRepeatFrequencyType;
- (id)alarmOffset;
- (void)setAlarmOffset:(id)arg0;
- (id)init;
- (BOOL)allDay;
- (void).cxx_destruct;
- (void)setAllDay:(BOOL)arg0;

@end