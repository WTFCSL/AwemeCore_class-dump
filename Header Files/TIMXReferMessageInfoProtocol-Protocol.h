//
//     Generated by private class-dump
//

@class NSString;

@protocol TIMXReferMessageInfoProtocol <NSObject>

+ (id)instanceWithJsonString:(id)arg0;
+ (id)instanceWithDictionary:(id)arg0;

@property (nonatomic) long long serverMessageID;
@property (nonatomic) long long messageType;
@property (copy) NSString *hint;
@property long long status;
@property (nonatomic) long long rootMessageServerID;
@property (nonatomic) long long rootMessageConversationIndex;

- (void)setServerMessageID:(long long)arg0;
- (long long)serverMessageID;
- (void)setRootMessageServerID:(long long)arg0;
- (void)setRootMessageConversationIndex:(long long)arg0;
- (long long)rootMessageServerID;
- (long long)rootMessageConversationIndex;
- (long long)messageType;
- (long long)status;
- (id)toDictionary;
- (void)setStatus:(long long)arg0;
- (void)setMessageType:(long long)arg0;
- (void)setHint:(id)arg0;
- (id)hint;

@end
