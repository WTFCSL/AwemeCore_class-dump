//
//     Generated by private class-dump
//

@class NSString;

@interface DHScreenShotBridgeResultModel : BDXBridgeModel {
    NSString *_message;
    long long _statusCode;
}

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long statusCode;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)statusCode;
- (void)setMessage:(id)arg0;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (id)message;

@end
