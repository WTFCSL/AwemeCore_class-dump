//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, AWEECShoppingGuideChatPatchModel;

@interface AWEECShoppingGuideChatResponseModel : MTLModel <MTLJSONSerializing> {
    long long _statusCode;
    NSString *_statusMessage;
    unsigned long long _eventType;
    long long _chunkIndex;
    NSDictionary *_message;
    AWEECShoppingGuideChatPatchModel *_messagePatch;
    NSArray *_sug;
    long long _streamTime;
    NSDictionary *_extra;
}

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) long long chunkIndex;
@property (copy, nonatomic) NSDictionary *message;
@property (retain, nonatomic) AWEECShoppingGuideChatPatchModel *messagePatch;
@property (copy, nonatomic) NSArray *sug;
@property (nonatomic) long long streamTime;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (void)setExtra:(id)arg0;
- (id)messagePatch;
- (void)setMessagePatch:(id)arg0;
- (id)sug;
- (void)setSug:(id)arg0;
- (long long)streamTime;
- (void)setStreamTime:(long long)arg0;
- (long long)statusCode;
- (void)setMessage:(id)arg0;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)eventType;
- (id)message;
- (id)extra;
- (void)setEventType:(unsigned long long)arg0;
- (id)statusMessage;
- (void)setStatusMessage:(id)arg0;
- (long long)chunkIndex;
- (void)setChunkIndex:(long long)arg0;

@end