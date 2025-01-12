//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate, NSNumber;
@protocol IESIMReferMessageInfoProtocol, IESIMMessageEditInfoProtocol;

@protocol IESIMMessageProtocol <NSObject>

@property (readonly) NSString *identifier;
@property (readonly) NSString *belongingConversationIdentifier;
@property (readonly) NSDictionary *content;
@property (readonly) BOOL recalled;
@property (readonly) long long recallerRole;
@property (readonly) NSDictionary *recalledContent;
@property (readonly) NSNumber *serverMessageID;
@property (readonly) NSDate *createdAt;
@property (readonly) long long messageType;
@property (readonly) long long sender;
@property (readonly, nonatomic) BOOL isInvalided;
@property (readonly) NSString *senderSecID;
@property (readonly) long long hintType;
@property (readonly) long long status;
@property (readonly) NSDictionary *syncedExt;
@property (readonly) NSDictionary *localExt;
@property (readonly) NSDictionary *properties;
@property (readonly) id<IESIMReferMessageInfoProtocol> referMessageInfo;
@property (readonly) id<IESIMMessageEditInfoProtocol> editInfo;

- (void)deleteWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)localExt;
- (id)syncedExt;
- (void)setLocalExtEntry:(id)arg0 value:(id)arg1 completion:(id /* block */)arg2;
- (void)setLocalExtWithKeys:(id)arg0 values:(id)arg1 completion:(id /* block */)arg2;
- (id)serverMessageID;
- (id)syncedExtInternal;
- (id)belongingConversationIdentifier;
- (long long)pullIndex;
- (id)senderSecID;
- (BOOL)isInvalided;
- (id)recalledContent;
- (long long)recallerRole;
- (void)recallMessageWithCompletion:(id /* block */)arg0;
- (long long)indexV2;
- (long long)hintType;
- (void)markMessageWithActionType:(unsigned long long)arg0 doAction:(BOOL)arg1 sortTime:(long long)arg2 completion:(id /* block */)arg3;
- (id)referMessageInfo;
- (id)editInfo;
- (long long)messageType;
- (long long)orderIndex;
- (long long)sender;
- (id)copy;
- (long long)status;
- (id)content;
- (id)identifier;
- (id)properties;
- (id)createdAt;
- (BOOL)recalled;

@end
