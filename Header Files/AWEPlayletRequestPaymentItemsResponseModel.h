//
//     Generated by private class-dump
//

@class NSArray, NSString, NSNumber;

@interface AWEPlayletRequestPaymentItemsResponseModel : AWEBaseApiModel {
    NSArray *_awemeModels;
    NSString *_errorMsg;
    NSNumber *_errorCode;
}

@property (copy, nonatomic) NSArray *awemeModels;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSNumber *errorCode;

+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (id)awemeModels;
- (void)setAwemeModels:(id)arg0;
- (void).cxx_destruct;
- (void)setErrorCode:(id)arg0;
- (id)errorCode;

@end