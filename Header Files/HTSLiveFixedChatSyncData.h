//
//     Generated by private class-dump
//

@class NSString, HTSLiveFastChatInfo, HTSLiveFixedChatInfo;

@interface HTSLiveFixedChatSyncData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) HTSLiveFastChatInfo *fastChatInfo;
@property (nonatomic) BOOL hasFastChatInfo;
@property (retain, nonatomic) HTSLiveFixedChatInfo *fixedChatInfo;
@property (nonatomic) BOOL hasFixedChatInfo;

+ (id)descriptor;

@end
