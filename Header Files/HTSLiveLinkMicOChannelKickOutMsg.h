//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon;

@interface HTSLiveLinkMicOChannelKickOutMsg : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long kickOutUid;
@property (copy, nonatomic) NSString *toastMsg;

+ (id)descriptor;

@end