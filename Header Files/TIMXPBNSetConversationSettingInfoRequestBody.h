//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXPBNSetConversationSettingInfoRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) BOOL setStickOnTop;
@property (nonatomic) BOOL hasSetStickOnTop;
@property (nonatomic) BOOL setMute;
@property (nonatomic) BOOL hasSetMute;
@property (nonatomic) BOOL setFavorite;
@property (nonatomic) BOOL hasSetFavorite;
@property (nonatomic) int pushStatus;
@property (nonatomic) BOOL hasPushStatus;

+ (id)descriptor;

@end
