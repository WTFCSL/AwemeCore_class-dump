//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDUGLuckyCatAuthWXXBridgeResultModel : BDXBridgeModel {
    NSString *_code;
    NSString *_errorMessage;
    NSNumber *_errorCode;
}

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSNumber *errorCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCode:(id)arg0;
- (id)code;
- (void).cxx_destruct;
- (void)setErrorCode:(id)arg0;
- (id)errorCode;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg0;

@end
