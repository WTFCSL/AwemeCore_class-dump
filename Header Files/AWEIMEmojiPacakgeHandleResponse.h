//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMEmojiPacakgeHandleResponse : MTLModel <MTLJSONSerializing> {
    BOOL _reachLimit;
    long long _statusCode;
    NSString *_statusMsg;
}

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL reachLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (BOOL)reachLimit;
- (void)setReachLimit:(BOOL)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;

@end
