//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, IESLiveAnnouncementApi, RACSubject, AnnouncementAnchorGetResponse_Data, IESLiveAnnouncementPanelConfig, NSDictionary, NSMutableDictionary, NSMutableSet, NSMutableArray, GPBInt64Array, IESLiveTimeScheduleViewModel;
@protocol IESLiveAnchorTimeSchedulePreference, IESLiveAnnouncementDataUpdateReaction;

@interface IESLiveAnnouncementViewModel : NSObject {
    BOOL _shouldReFetch;
    BOOL _needGotoPublishVideo;
    BOOL _changedVideo;
    IESLiveAnnouncementPanelConfig *_panelConfig;
    AnnouncementAnchorGetResponse_Data *_originAnnouncement;
    AnnouncementAnchorGetResponse_Data *_presentAnnouncement;
    NSMutableSet *_originSelectedFansGroups;
    NSMutableSet *_presentSelectedFansGroups;
    IESLiveTimeScheduleViewModel *_timeViewModel;
    NSString *_enterFrom;
    HTSEventContext *_trackContext;
    NSDictionary *_extra;
    long long _saveFailReason;
    NSString *_inputAnnouncementContent;
    id /* block */ _showAlertBlock;
    id /* block */ _switchBlock;
    NSMutableDictionary *_originAnnouncementsDic;
    NSMutableArray *_originAnnouncementsArray;
    long long _currentEditStatus;
    id<IESLiveAnnouncementDataUpdateReaction> _reaction;
    long long _entranceType;
    long long _resetAnnouncementID;
    NSMutableArray *_allGroupListArray;
    NSMutableArray *_appointmentListArray;
    GPBInt64Array *_groupIdListArray;
    IESLiveAnnouncementApi *_announcementApi;
    RACSubject *_settingViewStateSubject;
    id<IESLiveAnchorTimeSchedulePreference> _timeNoticePref;
}

@property (retain, nonatomic) IESLiveAnnouncementApi *announcementApi;
@property (retain, nonatomic) RACSubject *settingViewStateSubject;
@property (retain, nonatomic) AnnouncementAnchorGetResponse_Data *originAnnouncement;
@property (retain, nonatomic) id<IESLiveAnchorTimeSchedulePreference> timeNoticePref;
@property (retain, nonatomic) IESLiveAnnouncementPanelConfig *panelConfig;
@property (retain, nonatomic) AnnouncementAnchorGetResponse_Data *presentAnnouncement;
@property (retain, nonatomic) NSMutableSet *originSelectedFansGroups;
@property (retain, nonatomic) NSMutableSet *presentSelectedFansGroups;
@property (retain, nonatomic) IESLiveTimeScheduleViewModel *timeViewModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL shouldReFetch;
@property (nonatomic) long long saveFailReason;
@property (retain, nonatomic) NSString *inputAnnouncementContent;
@property (copy, nonatomic) id /* block */ showAlertBlock;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (nonatomic) BOOL needGotoPublishVideo;
@property (nonatomic) BOOL changedVideo;
@property (retain, nonatomic) NSMutableDictionary *originAnnouncementsDic;
@property (retain, nonatomic) NSMutableArray *originAnnouncementsArray;
@property (nonatomic) long long currentEditStatus;
@property (weak, nonatomic) id<IESLiveAnnouncementDataUpdateReaction> reaction;
@property (nonatomic) long long entranceType;
@property (nonatomic) long long resetAnnouncementID;
@property (retain, nonatomic) NSMutableArray *allGroupListArray;
@property (retain, nonatomic) NSMutableArray *appointmentListArray;
@property (retain, nonatomic) GPBInt64Array *groupIdListArray;

- (void)setEnterFrom:(id)arg0;
- (void)setExtra:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (id /* block */)switchBlock;
- (void)setSwitchBlock:(id /* block */)arg0;
- (long long)entranceType;
- (void)setEntranceType:(long long)arg0;
- (BOOL)isLightMode;
- (void)setPanelConfig:(id)arg0;
- (id)panelConfig;
- (void)setShowAlertBlock:(id /* block */)arg0;
- (id /* block */)showAlertBlock;
- (id)groupIdListArray;
- (void)setGroupIdListArray:(id)arg0;
- (id)timeNoticePref;
- (void)setTimeNoticePref:(id)arg0;
- (void)publishPreAnnouncementWithUserID:(id)arg0 announcementID:(long long)arg1 completion:(id /* block */)arg2;
- (void)unpublishPreAnnouncementWithUserID:(id)arg0 completion:(id /* block */)arg1;
- (void)trackAnnounceSettingCellTap;
- (id)originAnnouncement;
- (id)editValidationString;
- (id)presentAnnouncement;
- (long long)currentEditStatus;
- (id)originAnnouncementsArray;
- (void)resetOriginDataConfig:(id)arg0;
- (void)refreshAllAnnouncementsInfoAsyncWithCompletion:(id /* block */)arg0 isFromAnnouncement:(BOOL)arg1;
- (void)trackSettingAllShow;
- (id)commitValidedString;
- (void)trackAnnouncementSaveButtonClickWithIsSuccess:(BOOL)arg0;
- (void)setNeedGotoPublishVideo:(BOOL)arg0;
- (void)trackEditorSubmit;
- (void)setCurrentEditStatus:(long long)arg0;
- (void)trackDeleteCurrentAnnouncement;
- (BOOL)isNotifyTimeChanged;
- (BOOL)shouldShowCanlenderAlert;
- (void)trackLinkVideoButtonShow:(long long)arg0;
- (void)commitAnnouncementInfoWithCompletion:(id /* block */)arg0;
- (BOOL)needGotoPublishVideo;
- (BOOL)shouldReFetch;
- (id)timeViewModel;
- (void)presentAnnouncementDataDidChange:(BOOL)arg0;
- (void)trackMoreSettingPanelShow;
- (void)trackEditorShow;
- (void)updateTimeScheduled:(id)arg0;
- (void)trackAnnouncementCalendarAlertComfirm;
- (void)trackAnnouncementShowCalendarAlert;
- (void)setInputAnnouncementContent:(id)arg0;
- (BOOL)checkAuditStatusOperational;
- (void)fetchRandomContentWithCompletion:(id /* block */)arg0;
- (id)allGroupListArray;
- (id)presentSelectedFansGroups;
- (void)trackRemindTimePickerSave;
- (void)trackFansGroupRemindTimeTap;
- (void)setAnnouncementApi:(id)arg0;
- (id)announcementApi;
- (id)initWithConfig:(id)arg0 announcement:(id)arg1;
- (void)refreshAnnouncementInfoAsyncWithCompletion:(id /* block */)arg0;
- (void)trackLinkVideoPanelShow;
- (void)trackLinkVideoPanelClick:(id)arg0;
- (id)inputAnnouncementContent;
- (void)setChangedVideo:(BOOL)arg0;
- (void)setShouldReFetch:(BOOL)arg0;
- (id)weekdaysString:(id)arg0;
- (id)selectedFansGroupsStrWtihSet:(id)arg0;
- (id)originSelectedFansGroups;
- (void)trackEditorChanage;
- (id)translateModel:(id)arg0;
- (void)setOriginAnnouncementsArray:(id)arg0;
- (void)setAllGroupListArray:(id)arg0;
- (id)appointmentListArray;
- (void)setAppointmentListArray:(id)arg0;
- (void)updatePresentDataConfig:(id)arg0;
- (id)transformationWith:(id)arg0;
- (void)setOriginSelectedFansGroups:(id)arg0;
- (void)setOriginAnnouncement:(id)arg0;
- (void)setPresentAnnouncement:(id)arg0;
- (void)setPresentSelectedFansGroups:(id)arg0;
- (BOOL)isScheduleTimeEmpty;
- (void)setSaveFailReason:(long long)arg0;
- (BOOL)isFansGroupTimeEmpty;
- (BOOL)isFansGroupSelectedEmpty;
- (BOOL)isScheduledDateEarlierThanNow10minsLater;
- (BOOL)isContentChanged;
- (BOOL)isAnnouncementChanged;
- (BOOL)changedVideo;
- (BOOL)isFansGroupChanged;
- (id)currentSelectDateWith:(int)arg0 scheduledTime:(int)arg1;
- (BOOL)isFansGroupSelectedChanged;
- (BOOL)showPublishVideoEntrance;
- (long long)saveFailReason;
- (void)trackVideoDetail;
- (id)priorityAnnouncement;
- (BOOL)isContentEmpty;
- (void)trackPublishButtonClick:(BOOL)arg0;
- (void)trackAnnounceSettingShow;
- (void)trackNoticeCheckWithType:(id)arg0;
- (void)setTimeViewModel:(id)arg0;
- (id)originAnnouncementsDic;
- (void)setOriginAnnouncementsDic:(id)arg0;
- (long long)resetAnnouncementID;
- (void)setResetAnnouncementID:(long long)arg0;
- (id)settingViewStateSubject;
- (void)setSettingViewStateSubject:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)extra;
- (id)reaction;
- (void)setReaction:(id)arg0;

@end