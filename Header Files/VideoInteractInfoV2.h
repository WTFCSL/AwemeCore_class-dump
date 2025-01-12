//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface VideoInteractInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) BOOL hasActivityName;
@property (nonatomic) int userState;
@property (nonatomic) BOOL hasUserState;
@property (retain, nonatomic) NSMutableArray *activityBtnListArray;
@property (readonly, nonatomic) unsigned long long activityBtnListArray_Count;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (nonatomic) long long nowTimestamp;
@property (nonatomic) BOOL hasNowTimestamp;
@property (copy, nonatomic) NSString *eventData;
@property (nonatomic) BOOL hasEventData;

+ (id)descriptor;

@end
