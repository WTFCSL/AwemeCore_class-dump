//
//     Generated by private class-dump
//

@class NSString, HTSLiveCommon, HTSLiveUser;

@interface HTSLiveRoomChannelInteractiveEmojiChatMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *interactiveEmojiDisplayName;
@property (copy, nonatomic) NSString *defaultContent;
@property (nonatomic) int showIdentity;

+ (id)descriptor;

@end