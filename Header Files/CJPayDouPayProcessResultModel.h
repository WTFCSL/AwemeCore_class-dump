//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface CJPayDouPayProcessResultModel : NSObject {
    unsigned long long _resultCode;
    NSString *_errorDesc;
    NSDictionary *_extParams;
}

@property (nonatomic) unsigned long long resultCode;
@property (copy, nonatomic) NSString *errorDesc;
@property (copy, nonatomic) NSDictionary *extParams;

- (id)extParams;
- (void)setExtParams:(id)arg0;
- (BOOL)isReachOrderFinalState;
- (void).cxx_destruct;
- (void)setErrorDesc:(id)arg0;
- (unsigned long long)resultCode;
- (id)errorDesc;
- (void)setResultCode:(unsigned long long)arg0;
- (long long)getErrorCode;

@end