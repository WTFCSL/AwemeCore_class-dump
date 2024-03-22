//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESLiveCalendarEventParamModel : IESLiveDynamicModel {
    NSArray *_recurrenceWeekDays;
    NSString *_url;
}

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long alarmTime;
@property (copy, nonatomic) NSString *eventId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *anchorSecId;
@property (retain, nonatomic) NSArray *recurrenceWeekDays;
@property (copy, nonatomic) NSString *url;

- (void)setRecurrenceWeekDays:(id)arg0;
- (id)recurrenceWeekDays;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;

@end
