//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface YataEventResponseObject : NSObject {
    BOOL _breakNext;
    BOOL _ignoreError;
    long long _status;
    NSString *_errorMsg;
    NSDictionary *_response;
}

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) BOOL breakNext;
@property (nonatomic) BOOL ignoreError;
@property (retain, nonatomic) NSDictionary *response;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (void)setIgnoreError:(BOOL)arg0;
- (BOOL)ignoreError;
- (BOOL)breakNext;
- (void)setBreakNext:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (long long)status;
- (id)response;
- (void)setStatus:(long long)arg0;

@end
