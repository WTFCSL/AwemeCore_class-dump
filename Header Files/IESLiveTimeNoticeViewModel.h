//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, NSDate, NSArray, IESLiveTimeNoticeApi, NSMutableDictionary, RACCommand, IESLiveOpenLiveBroadcastConfig, NSNumber;
@protocol IESLiveAnchorTimeSchedulePreference, IESLiveAnnouncementTimeNoticeReaction;

@interface IESLiveTimeNoticeViewModel : NSObject {
    HTSEventContext *_trackContext;
    NSString *_enterFrom;
    double _cornerRadius;
    unsigned long long _style;
    RACCommand *_cancelCommand;
    RACCommand *_confirmCommand;
    NSDate *_date;
    NSString *_hour;
    NSString *_minute;
    NSNumber *_stickerSwitch;
    NSNumber *_profileSwitch;
    NSArray *_selectedDays;
    IESLiveOpenLiveBroadcastConfig *_broadcastConf;
    id /* block */ _cycleBlock;
    NSMutableDictionary *_headerText;
    id<IESLiveAnnouncementTimeNoticeReaction> _reaction;
    IESLiveTimeNoticeApi *_api;
    id<IESLiveAnchorTimeSchedulePreference> _timeNoticePref;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (retain, nonatomic) IESLiveTimeNoticeApi *api;
@property (retain, nonatomic) IESLiveOpenLiveBroadcastConfig *broadcastConf;
@property (retain, nonatomic) id<IESLiveAnchorTimeSchedulePreference> timeNoticePref;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) RACCommand *cancelCommand;
@property (retain, nonatomic) RACCommand *confirmCommand;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *hour;
@property (copy, nonatomic) NSString *minute;
@property (retain, nonatomic) NSNumber *stickerSwitch;
@property (retain, nonatomic) NSNumber *profileSwitch;
@property (retain, nonatomic) NSArray *selectedDays;
@property (copy, nonatomic) id /* block */ cycleBlock;
@property (retain, nonatomic) NSMutableDictionary *headerText;
@property (weak, nonatomic) id<IESLiveAnnouncementTimeNoticeReaction> reaction;

- (void)setEnterFrom:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (void)didSetAttachingDIContext;
- (id)profileSwitch;
- (void)setupCommand;
- (id)scheduleDays;
- (id)timeNoticePref;
- (void)setTimeNoticePref:(id)arg0;
- (void)trackerSettingPanelShow:(BOOL)arg0;
- (id)datesStringWithSelectedDays:(id)arg0;
- (id)initWithSettingModel:(id)arg0;
- (id)strWithWeekDay:(long long)arg0;
- (id)selectedDays;
- (void)onWeekConfirmButtonTapped;
- (void)setSelectedDays:(id)arg0;
- (void)userSelectDays:(id)arg0;
- (void)onTimeCancelButtonTapped;
- (void)onTimeConfirmButtonTapped;
- (void)setCycleBlock:(id /* block */)arg0;
- (void)userSelectHour:(id)arg0 minute:(id)arg1 date:(id)arg2;
- (void)trackerReminderSwitchChanged;
- (id)requestScheduleTimeTextWithConf:(id)arg0 byUser:(BOOL)arg1;
- (void)parsePropertyWithModel:(id)arg0;
- (id)confirmCommand;
- (BOOL)isScheduledDateExpiredThanCurrent:(id)arg0;
- (id)broadcastConf;
- (id /* block */)cycleBlock;
- (id)scheduledFullTimeString;
- (id)scheduledDateString;
- (void)trackConfigChange:(id)arg0;
- (id)changeScheduleTimeTextWithConf:(id)arg0;
- (void)setConfirmCommand:(id)arg0;
- (id)dateStringWithDayString:(id)arg0;
- (id)dismissSignal;
- (id)stickerSwitch;
- (void)setStickerSwitch:(id)arg0;
- (void)setProfileSwitch:(id)arg0;
- (void)setBroadcastConf:(id)arg0;
- (void)setMinute:(id)arg0;
- (unsigned long long)style;
- (id)hour;
- (id)minute;
- (id)headerText;
- (void)setHour:(id)arg0;
- (void).cxx_destruct;
- (void)setDate:(id)arg0;
- (double)cornerRadius;
- (id)date;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupActions;
- (void)setCornerRadius:(double)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setHeaderText:(id)arg0;
- (id)cancelCommand;
- (void)setCancelCommand:(id)arg0;
- (id)reaction;
- (id)api;
- (void)setReaction:(id)arg0;
- (id)settingModel;
- (void)setApi:(id)arg0;

@end
