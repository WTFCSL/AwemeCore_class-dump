//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeStatus : NSObject {
    long long _statusCode;
    NSString *_message;
}

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *message;

+ (id)statusWithStatusCode:(long long)arg0 message:(id)arg1;
+ (id)statusMessageWithStatusCode:(long long)arg0;
+ (id)statusWithStatusCode:(long long)arg0;

- (long long)statusCode;
- (void)setMessage:(id)arg0;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (id)message;
- (id)description;

@end