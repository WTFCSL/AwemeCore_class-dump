//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSError;

@interface AWEECommerceBridgeResult : NSObject {
    NSDictionary *_forcedResult;
    long long _code;
    NSDictionary *_additionalDictinary;
    NSString *_errorMessage;
    NSError *_error;
}

@property (retain, nonatomic) NSDictionary *forcedResult;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSDictionary *additionalDictinary;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSError *error;

- (void)setAdditionalDictinary:(id)arg0;
- (void)setForcedResult:(id)arg0;
- (id)forcedResult;
- (id)additionalDictinary;
- (id)IESJSBridgeResult;
- (void)setCode:(long long)arg0;
- (long long)code;
- (void).cxx_destruct;
- (void)setError:(id)arg0;
- (id)errorMessage;
- (id)error;
- (void)setErrorMessage:(id)arg0;

@end