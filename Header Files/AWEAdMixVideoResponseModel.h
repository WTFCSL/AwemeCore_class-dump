//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEAdMixVideoResponseDataModel;

@interface AWEAdMixVideoResponseModel : AWEBaseApiModel {
    NSString *_message;
    NSNumber *_code;
    AWEAdMixVideoResponseDataModel *_data;
}

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) AWEAdMixVideoResponseDataModel *data;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setMessage:(id)arg0;
- (void)setCode:(id)arg0;
- (id)data;
- (id)code;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)message;

@end
