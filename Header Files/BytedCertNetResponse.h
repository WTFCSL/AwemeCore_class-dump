//
//     Generated by private class-dump
//

@class NSString;

@interface BytedCertNetResponse : NSObject {
    long long _statusCode;
    NSString *_logId;
}

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *logId;

+ (id)responseWithTTNetHttpResponse:(id)arg0;

- (id)logId;
- (void)setLogId:(id)arg0;
- (id)initWithStatusCode:(long long)arg0 logId:(id)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;

@end
