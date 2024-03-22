//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, NSDate;

@protocol IESIMSDKSendMessageModel <NSObject>

@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (copy, nonatomic) NSString *preferredUUID;
@property (retain, nonatomic) NSDate *preferredDate;
@property (nonatomic) BOOL skipSend;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSArray *mentionedUsers;
@property (nonatomic) long long forceSenderID;
@property (copy, nonatomic) NSString *forceSenderSecID;
@property (nonatomic) long long forceOrderIndex;

- (id)localExt;
- (id)syncedExt;
- (void)setSyncedExt:(id)arg0;
- (void)setLocalExt:(id)arg0;
- (BOOL)skipSend;
- (void)setSkipSend:(BOOL)arg0;
- (id)mentionedUsers;
- (void)setMentionedUsers:(id)arg0;
- (long long)forceOrderIndex;
- (void)setForceOrderIndex:(long long)arg0;
- (long long)forceSenderID;
- (void)setForceSenderID:(long long)arg0;
- (id)preferredUUID;
- (void)setPreferredUUID:(id)arg0;
- (id)preferredDate;
- (void)setPreferredDate:(id)arg0;
- (void)setNeedToSyncWithOldSDK;
- (void)overrideExistingMessageContentWithMessageIdentifier:(id)arg0;
- (id)forceSenderSecID;
- (void)setForceSenderSecID:(id)arg0;
- (void)addReferMessage:(long long)arg0 messageType:(long long)arg1 hint:(id)arg2;
- (void)enableWriteDBSyncOnMessageSend;
- (void)iesim_replaceUserDefinedPropertyMap:(id)arg0;
- (long long)messageType;
- (long long)status;
- (id)content;
- (void)setStatus:(long long)arg0;
- (void)setContent:(id)arg0;
- (void)setMessageType:(long long)arg0;

@end