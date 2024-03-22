//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate, NSNumber;

@protocol BDECIMCloudMessageInterface <NSObject>

@property (readonly, nonatomic) NSNumber *orderInConversation;
@property (readonly, nonatomic) NSNumber *indexInConversation;
@property (readonly) NSString *identifier;
@property (readonly) NSNumber *serverMessageID;
@property (readonly) NSDictionary *syncedExtInternal;
@property (readonly) NSString *belongingConversationIdentifier;
@property (readonly) long long sender;
@property (readonly) NSDate *createdAt;
@property (readonly) long long messageStatus;
@property (readonly) long long belongingSubConvShortID;
@property (copy, nonatomic) id /* block */ messageStatusChangedBlock;
@property (readonly) NSDictionary *syncedExt;
@property (readonly) NSDictionary *localExt;
@property (readonly) NSDictionary *content;
@property (readonly) long long messageType;

- (id)localExt;
- (id)syncedExt;
- (id)indexInConversation;
- (id)orderInConversation;
- (void)setLocalExtEntry:(id)arg0 value:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithIdentifier:(id)arg0 inConversation:(id)arg1 config:(id)arg2;
- (void)updateMessageBody:(id)arg0 completion:(id /* block */)arg1;
- (void)updateMessageSyncedExt:(id)arg0 completion:(id /* block */)arg1;
- (void)setLocalExtWithKeys:(id)arg0 values:(id)arg1 completion:(id /* block */)arg2;
- (id)serverMessageID;
- (id)syncedExtInternal;
- (id)belongingConversationIdentifier;
- (long long)belongingSubConvShortID;
- (id /* block */)messageStatusChangedBlock;
- (void)setMessageStatusChangedBlock:(id /* block */)arg0;
- (long long)messageType;
- (long long)sender;
- (id)content;
- (id)identifier;
- (id)createdAt;
- (long long)messageStatus;

@end