//
//     Generated by private class-dump
//

@class NSString;

@interface TCOError : NSObject {
    long long _code;
    NSString *_msg;
}

@property (nonatomic) long long code;
@property (retain, nonatomic) NSString *msg;

+ (void)setLastOAuthError:(int)arg0 msg:(id)arg1;
+ (id)getLastOAuthError;
+ (void)setLastQQApiError:(int)arg0 msg:(id)arg1;
+ (id)getLastQQApiError;

- (void)setCode:(long long)arg0;
- (long long)code;
- (void).cxx_destruct;
- (id)msg;
- (void)setMsg:(id)arg0;

@end