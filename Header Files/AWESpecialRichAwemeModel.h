//
//     Generated by private class-dump
//

@class AWESpecialRichAwemeDescriptionModel, AWESpecialRichAwemeProductInfoModel, NSString, NSDictionary, AWESpecialRichAwemeProductCommentImageInfoModel, AWESpecialRichAwemeLifeEvaluationInfoModel;

@interface AWESpecialRichAwemeModel : AWEBaseApiModel {
    long long _type;
    AWESpecialRichAwemeDescriptionModel *_descriptionModel;
    AWESpecialRichAwemeProductInfoModel *_productInfoModel;
    NSString *_detailScheme;
    AWESpecialRichAwemeLifeEvaluationInfoModel *_lifeEvaluationInfoModel;
    NSString *_extraInfo;
    NSDictionary *_extraInfoDictionary;
    AWESpecialRichAwemeProductCommentImageInfoModel *_productCommentModel;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) AWESpecialRichAwemeDescriptionModel *descriptionModel;
@property (retain, nonatomic) AWESpecialRichAwemeProductInfoModel *productInfoModel;
@property (copy, nonatomic) NSString *detailScheme;
@property (retain, nonatomic) AWESpecialRichAwemeLifeEvaluationInfoModel *lifeEvaluationInfoModel;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSDictionary *extraInfoDictionary;
@property (retain, nonatomic) AWESpecialRichAwemeProductCommentImageInfoModel *productCommentModel;

+ (id)descriptionModelJSONTransformer;
+ (id)productInfoModelJSONTransformer;
+ (id)lifeEvaluationInfoModelJSONTransformer;
+ (id)productCommentModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtraInfo:(id)arg0;
- (BOOL)shouldAutoPostTag;
- (id)extraInfoDictionary;
- (id)postType;
- (id)descriptionModel;
- (void)setDescriptionModel:(id)arg0;
- (id)productInfoModel;
- (void)setProductInfoModel:(id)arg0;
- (id)detailScheme;
- (void)setDetailScheme:(id)arg0;
- (id)lifeEvaluationInfoModel;
- (void)setLifeEvaluationInfoModel:(id)arg0;
- (void)setExtraInfoDictionary:(id)arg0;
- (id)productCommentModel;
- (void)setProductCommentModel:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)extraInfo;

@end