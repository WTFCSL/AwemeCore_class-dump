//
//     Generated by private class-dump
//

@class AFDECAssistResponseData;

@interface AFDECAssistResponseModel : AWEBaseApiModel {
    AFDECAssistResponseData *_data;
}

@property (retain, nonatomic) AFDECAssistResponseData *data;

+ (id)dataModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;

@end