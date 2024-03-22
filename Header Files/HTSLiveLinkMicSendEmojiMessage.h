//
//     Generated by private class-dump
//

@class HTSLiveUser, NSString, HTSLiveCommon, HTSLiveImage, HTSLivePublicAreaCommon, HTSLiveLinkmicAudienceEmoji;

@interface HTSLiveLinkMicSendEmojiMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (retain, nonatomic) HTSLiveLinkmicAudienceEmoji *emoji;
@property (nonatomic) BOOL hasEmoji;
@property (retain, nonatomic) HTSLiveImage *emojiImageResult;
@property (nonatomic) BOOL hasEmojiImageResult;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (nonatomic) BOOL hasToUser;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;

+ (id)descriptor;

@end