//
//     Generated by private class-dump
//

@class IESLiveListUserEventInfo, NSMutableArray, HTSLiveUser;

@interface IESLiveLinkMicAudiencePrepareApplyUser : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long applyTime;
@property (nonatomic) long long offset;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (retain, nonatomic) IESLiveListUserEventInfo *eventInfo;
@property (nonatomic) BOOL hasEventInfo;

+ (id)descriptor;

@end
