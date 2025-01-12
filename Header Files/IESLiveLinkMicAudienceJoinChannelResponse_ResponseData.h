//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkMicAudienceJoinChannelResponse_DelegateSetting, HTSLiveMatchEffect, HTSLiveCityEffect, NSMutableArray, IESLiveMsgBoardItemInfo;

@interface IESLiveLinkMicAudienceJoinChannelResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) IESLiveLinkMicAudienceJoinChannelResponse_DelegateSetting *delegateSetting;
@property (nonatomic) BOOL hasDelegateSetting;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *liveCoreSettings;
@property (nonatomic) long long payCount;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) unsigned long long version;
@property (nonatomic) int applyType;
@property (retain, nonatomic) HTSLiveMatchEffect *matchEffect;
@property (nonatomic) BOOL hasMatchEffect;
@property (retain, nonatomic) HTSLiveCityEffect *cityEffect;
@property (nonatomic) BOOL hasCityEffect;
@property (retain, nonatomic) IESLiveMsgBoardItemInfo *msgBoardItem;
@property (nonatomic) BOOL hasMsgBoardItem;
@property (nonatomic) BOOL isPaidLinkmic;
@property (copy, nonatomic) NSString *promptWithEarphone;

+ (id)descriptor;

@end
