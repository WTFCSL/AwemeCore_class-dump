//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, NSDate;

@protocol ECOMTIMSendTemplateModelProtocol <NSObject>

@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSString *conversation;
@property (copy, nonatomic) NSArray *mentionedUsers;
@property (copy, nonatomic) NSString *preferredUUID;
@property (retain, nonatomic) NSDate *preferredDate;
@property (nonatomic) long long forceOrderIndex;
@property (nonatomic) long long forceSenderID;
@property (nonatomic) BOOL skipRealSend;
@property (nonatomic) long long statusIfSkipRealSend;
@property (copy, nonatomic) NSDictionary *files;

- (void)setExt:(id)arg0;
- (id)localExt;
- (void)setLocalExt:(id)arg0;
- (id)mentionedUsers;
- (void)setMentionedUsers:(id)arg0;
- (BOOL)skipRealSend;
- (void)setSkipRealSend:(BOOL)arg0;
- (long long)forceOrderIndex;
- (void)setForceOrderIndex:(long long)arg0;
- (long long)forceSenderID;
- (void)setForceSenderID:(long long)arg0;
- (void)setStatusIfSkipRealSend:(long long)arg0;
- (id)preferredUUID;
- (void)setPreferredUUID:(id)arg0;
- (id)preferredDate;
- (void)setPreferredDate:(id)arg0;
- (long long)statusIfSkipRealSend;
- (long long)messageType;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setMessageType:(long long)arg0;
- (id)conversation;
- (void)setConversation:(id)arg0;
- (id)files;
- (void)setFiles:(id)arg0;
- (id)ext;

@end
