//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate;
@protocol TIMXReferMessageInfoProtocol;

@interface TIMXStrangerMessageModel : MTLModel <TIMXStrangerMessageProtocol> {
    NSString *_identifier;
    long long _serverMessageID;
    NSString *_belongingConversationIdentifier;
    long long _sender;
    NSString *_senderSecID;
    NSDictionary *_content;
    long long _messageType;
    NSDate *_createdAt;
    NSDictionary *_syncedExt;
    id<TIMXReferMessageInfoProtocol> _referMessageInfo;
    long long _orderIndex;
}

@property (retain, nonatomic) id<TIMXReferMessageInfoProtocol> referMessageInfo;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long serverMessageID;
@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long sender;
@property (copy, nonatomic) NSString *senderSecID;
@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDictionary *syncedExt;
@property (nonatomic) long long orderIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)syncedExt;
- (void)setSyncedExt:(id)arg0;
- (void)setServerMessageID:(long long)arg0;
- (long long)serverMessageID;
- (id)belongingConversationIdentifier;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (id)senderSecID;
- (void)setSenderSecID:(id)arg0;
- (id)referMessageInfo;
- (void)setReferMessageInfo:(id)arg0;
- (id)initWithRootObject:(id)arg0 fromPBObject:(id)arg1;
- (id)initWithRootObject:(id)arg0 fromDBObject:(id)arg1;
- (long long)messageType;
- (long long)orderIndex;
- (void)setSender:(long long)arg0;
- (void).cxx_destruct;
- (long long)sender;
- (void)setCreatedAt:(id)arg0;
- (id)content;
- (id)identifier;
- (void)setContent:(id)arg0;
- (void)setMessageType:(long long)arg0;
- (id)createdAt;
- (void)setIdentifier:(id)arg0;
- (void)setOrderIndex:(long long)arg0;

@end
