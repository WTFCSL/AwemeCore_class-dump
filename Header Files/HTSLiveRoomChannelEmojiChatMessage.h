//
//     Generated by private class-dump
//

@class HTSLiveText, HTSLiveUser, HTSLiveCommon, NSString;

@interface HTSLiveRoomChannelEmojiChatMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long emojiId;
@property (retain, nonatomic) HTSLiveText *emojiContent;
@property (nonatomic) BOOL hasEmojiContent;
@property (copy, nonatomic) NSString *defaultContent;
@property (nonatomic) int showIdentity;

+ (id)descriptor;

@end
