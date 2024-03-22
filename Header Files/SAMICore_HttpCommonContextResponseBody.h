//
//     Generated by private class-dump
//

@class NSString, NSData;

@interface SAMICore_HttpCommonContextResponseBody : NSObject {
    int _statusCode;
    NSString *_statusText;
    NSString *_taskId;
    NSString *_apiNamespace;
    NSData *_data;
    long long _payloadType;
    id _payload;
}

@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *apiNamespace;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long payloadType;
@property (retain, nonatomic) id payload;

- (id)apiNamespace;
- (void)setApiNamespace:(id)arg0;
- (int)statusCode;
- (void)setStatusCode:(int)arg0;
- (id)data;
- (id)payload;
- (void)setPayload:(id)arg0;
- (id)statusText;
- (void)setData:(id)arg0;
- (void)dealloc;
- (id)taskId;
- (long long)payloadType;
- (void)setPayloadType:(long long)arg0;
- (void)setTaskId:(id)arg0;
- (void)setStatusText:(id)arg0;

@end