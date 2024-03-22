//
//     Generated by private class-dump
//

@class NSString, GPBInt32Array, GPBInt64Array, NSMutableArray, SubscribeInfo;

@interface AnnouncementData : IESLivePBBaseMessage

@property (nonatomic) BOOL available;
@property (nonatomic) BOOL switch_p;
@property (nonatomic) BOOL switchCanOpen;
@property (nonatomic) int banned;
@property (nonatomic) long long banFinishTime;
@property (nonatomic) int scheduledTime;
@property (nonatomic) int scheduledDate;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekdaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (copy, nonatomic) NSString *scheduledTimeText;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int auditStatus;
@property (nonatomic) int updateLimit;
@property (nonatomic) BOOL reachUpdateLimit;
@property (nonatomic) BOOL groupSwitch;
@property (retain, nonatomic) GPBInt64Array *groupIdListArray;
@property (readonly, nonatomic) unsigned long long groupIdListArray_Count;
@property (retain, nonatomic) NSMutableArray *allGroupListArray;
@property (readonly, nonatomic) unsigned long long allGroupListArray_Count;
@property (nonatomic) long long groupRemindTime;
@property (nonatomic) int banType;
@property (retain, nonatomic) SubscribeInfo *subscribeInfo;
@property (nonatomic) BOOL hasSubscribeInfo;
@property (nonatomic) BOOL appointmentContainerOpen;
@property (nonatomic) BOOL stickerBan;
@property (copy, nonatomic) NSString *stickerBanToast;
@property (nonatomic) int autoPublishHighlight;
@property (nonatomic) long long announcementId;
@property (retain, nonatomic) GPBInt64Array *videoItemIdsArray;
@property (readonly, nonatomic) unsigned long long videoItemIdsArray_Count;

+ (id)descriptor;

@end
