//
//     Generated by private class-dump
//

@class NSString;

@interface GameplayError : NSObject {
    long long _errorCode;
    NSString *_errorMsg;
}

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (void).cxx_destruct;
- (void)setErrorCode:(long long)arg0;
- (long long)errorCode;

@end