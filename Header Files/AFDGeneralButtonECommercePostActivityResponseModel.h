//
//     Generated by private class-dump
//

@class AFDGeneralButtonECommercePostActivityDetailModel;

@interface AFDGeneralButtonECommercePostActivityResponseModel : AWEBaseApiModel {
    AFDGeneralButtonECommercePostActivityDetailModel *_data;
}

@property (copy, nonatomic) AFDGeneralButtonECommercePostActivityDetailModel *data;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;

@end
