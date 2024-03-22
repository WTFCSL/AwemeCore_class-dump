//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, GPBInt32Array, GPBInt64ObjectDictionary;

@interface Appointment : IESLivePBBaseMessage

@property (nonatomic) long long appointmentId;
@property (nonatomic) long long appointmentType;
@property (nonatomic) long long anchorId;
@property (nonatomic) long long roomId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *insidePushText;
@property (copy, nonatomic) NSString *insidePushTitle;
@property (copy, nonatomic) NSString *outsidePushText;
@property (nonatomic) long long subscriberCount;
@property (copy, nonatomic) NSString *operator_p;
@property (nonatomic) long long dueStartTime;
@property (copy, nonatomic) NSString *appointmentIdStr;
@property (copy, nonatomic) NSString *anchorIdStr;
@property (copy, nonatomic) NSString *roomIdStr;
@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *feedTitle;
@property (copy, nonatomic) NSString *feedSubtitle;
@property (copy, nonatomic) NSString *feedImgURL;
@property (copy, nonatomic) NSString *feedJumpURL;
@property (copy, nonatomic) NSString *secAnchorId;
@property (retain, nonatomic) GPBInt64ObjectDictionary *liveFragmentsMap;
@property (readonly, nonatomic) unsigned long long liveFragmentsMap_Count;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) long long showStatus;
@property (nonatomic) long long actualStartTime;
@property (nonatomic) int hideStartTime;
@property (copy, nonatomic) NSString *currentRoomIdStr;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) int cycle;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekdaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (nonatomic) int scheduledTime;
@property (nonatomic) long long dueEndTime;

+ (id)descriptor;

@end
