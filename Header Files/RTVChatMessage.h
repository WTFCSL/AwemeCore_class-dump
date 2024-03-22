//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface RTVChatMessage : NSObject {
    BOOL _isFaked;
    BOOL _shouldShowInMessageListAsFakedMeesage;
    NSString *_messageID;
    unsigned long long _status;
    NSString *_senderID;
    NSString *_conversationID;
    NSString *_preferredSentIMConversationID;
    unsigned long long _type;
    NSDictionary *_rawContentDict;
}

@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *senderID;
@property (readonly, copy, nonatomic) NSDictionary *rawContentDict;
@property (nonatomic) BOOL isFaked;
@property (nonatomic) BOOL shouldShowInMessageListAsFakedMeesage;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *preferredSentIMConversationID;

+ (id)messageWithSender:(id)arg0 type:(unsigned long long)arg1 content:(id)arg2;

- (void)updateConversationID:(id)arg0;
- (void)updateMessageID:(id)arg0;
- (id)preferredSentIMConversationID;
- (void)updateSender:(id)arg0;
- (void)updateShouldShowInMessageList:(BOOL)arg0;
- (void)updatePreferredSentIMConversationID:(id)arg0;
- (id)initWithSender:(id)arg0 type:(unsigned long long)arg1 content:(id)arg2;
- (id)rawContentDict;
- (void)updateContentDict:(id)arg0;
- (BOOL)isFaked;
- (BOOL)isFaked;
- (void)setIsFaked:(BOOL)arg0;
- (BOOL)shouldShowInMessageListAsFakedMeesage;
- (void)setShouldShowInMessageListAsFakedMeesage:(BOOL)arg0;
- (BOOL)shouldShowInMessageList;
- (id)messageID;
- (id)init;
- (id)senderID;
- (void).cxx_destruct;
- (unsigned long long)status;
- (unsigned long long)type;
- (id)conversationID;
- (id)displayName;
- (void)setType:(unsigned long long)arg0;
- (void)setStatus:(unsigned long long)arg0;
- (void)setSenderID:(id)arg0;
- (unsigned long long)hash;
- (void)setMessageID:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (void)updateStatus:(unsigned long long)arg0;
- (id)contentDictionary;

@end