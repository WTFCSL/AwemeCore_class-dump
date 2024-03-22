//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface AWEFCoinBridgeOpenByteCertMethodResultModel : BDXBridgeModel {
    NSNumber *_errorCode;
    NSString *_errorMsg;
    NSDictionary *_extData;
}

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSDictionary *extData;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (id)extData;
- (void)setExtData:(id)arg0;
- (void).cxx_destruct;
- (void)setErrorCode:(id)arg0;
- (id)errorCode;

@end
