//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXOReferMessageInfo : MTLModel <TIMXReferMessageInfoProtocol> {
    long long _serverMessageID;
    long long _messageType;
    NSString *_hint;
    long long _status;
    long long _rootMessageServerID;
    long long _rootMessageConversationIndex;
}

@property (nonatomic) long long serverMessageID;
@property (nonatomic) long long messageType;
@property (copy) NSString *hint;
@property long long status;
@property (nonatomic) long long rootMessageServerID;
@property (nonatomic) long long rootMessageConversationIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithJsonString:(id)arg0;
+ (id)instanceWithDictionary:(id)arg0;

- (void)setServerMessageID:(long long)arg0;
- (long long)serverMessageID;
- (void)setRootMessageServerID:(long long)arg0;
- (void)setRootMessageConversationIndex:(long long)arg0;
- (long long)rootMessageServerID;
- (long long)rootMessageConversationIndex;
- (long long)messageType;
- (void).cxx_destruct;
- (long long)status;
- (id)toDictionary;
- (void)setStatus:(long long)arg0;
- (void)setMessageType:(long long)arg0;
- (void)setHint:(id)arg0;
- (id)hint;

@end
