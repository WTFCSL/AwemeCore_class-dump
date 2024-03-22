//
//     Generated by private class-dump
//

@class NSString, HTSLiveUser, HTSLiveText;

@interface ChannelChatResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *msgIdStr;
@property (retain, nonatomic) HTSLiveText *rtfContent;
@property (nonatomic) BOOL hasRtfContent;
@property (retain, nonatomic) HTSLiveText *emojiContent;
@property (nonatomic) BOOL hasEmojiContent;
@property (copy, nonatomic) NSString *interactiveEmojiDisplayName;
@property (nonatomic) int showIdentity;

+ (id)descriptor;

@end
