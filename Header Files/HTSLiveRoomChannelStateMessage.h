//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveRoomChannelStateMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long memberCount;
@property (retain, nonatomic) NSMutableArray *topUserListArray;
@property (readonly, nonatomic) unsigned long long topUserListArray_Count;
@property (copy, nonatomic) NSString *channelName;
@property (retain, nonatomic) HTSLiveUser *needApprovalUser;
@property (nonatomic) BOOL hasNeedApprovalUser;
@property (retain, nonatomic) HTSLiveUser *owner;
@property (nonatomic) BOOL hasOwner;

+ (id)descriptor;

@end