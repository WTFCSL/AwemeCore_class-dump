//
//     Generated by private class-dump
//

@class NSString, NSError;

@interface AWEIMRedPacketNLPResponseModel : AWEBaseApiModel <MTLJSONSerializing> {
    long long _status;
    NSString *_errorMessage;
    NSError *_error;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (void)setError:(id)arg0;
- (id)errorMessage;
- (id)error;
- (void)setErrorMessage:(id)arg0;

@end