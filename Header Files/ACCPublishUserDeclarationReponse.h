//
//     Generated by private class-dump
//

@class NSString, ACCPublishUserDeclarationModel;

@interface ACCPublishUserDeclarationReponse : AWEBaseApiModel {
    ACCPublishUserDeclarationModel *_data;
    NSString *_userDeclarationTips;
}

@property (retain, nonatomic) ACCPublishUserDeclarationModel *data;
@property (copy, nonatomic) NSString *userDeclarationTips;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)userDeclarationTips;
- (void)setUserDeclarationTips:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;

@end
