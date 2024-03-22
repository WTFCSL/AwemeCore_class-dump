//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface IESLiveUploadTraceMonitorParamModel : IESLiveBridgeModel {
    NSString *_product;
    NSString *_businessType;
    NSString *_traceName;
    NSString *_step;
    NSNumber *_errorCode;
    NSString *_errorMessage;
    NSDictionary *_index;
    NSDictionary *_extra;
}

@property (copy, nonatomic) NSString *product;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *traceName;
@property (copy, nonatomic) NSString *step;
@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSDictionary *index;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void)setExtra:(id)arg0;
- (void)setBusinessType:(id)arg0;
- (id)step;
- (id)businessType;
- (void)setIndex:(id)arg0;
- (void)setStep:(id)arg0;
- (void).cxx_destruct;
- (void)setErrorCode:(id)arg0;
- (id)extra;
- (id)errorCode;
- (id)index;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg0;
- (id)product;
- (void)setProduct:(id)arg0;
- (id)traceName;
- (void)setTraceName:(id)arg0;

@end