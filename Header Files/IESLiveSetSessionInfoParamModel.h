//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveSetSessionInfoParamModel : IESLiveBridgeModel {
    NSString *_identifier;
    NSDictionary *_info;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *info;

+ (id)modelCustomPropertyMapper;

- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;
- (id)identifier;
- (void)setIdentifier:(id)arg0;

@end