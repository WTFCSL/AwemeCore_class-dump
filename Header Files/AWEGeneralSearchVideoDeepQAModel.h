//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEAwemeModel, AWEGeneralSearchVideoDeepQAUIConfigModel, AWEGeneralSearchVideoDeepQATitleModel;

@interface AWEGeneralSearchVideoDeepQAModel : AWEBaseApiModel {
    NSString *_deepQAType;
    AWEGeneralSearchVideoDeepQAUIConfigModel *_UIConfigModel;
    AWEGeneralSearchVideoDeepQATitleModel *_titleModel;
    NSString *_shortAnswer;
    AWEAwemeModel *_awemeInfo;
    NSArray *_commentList;
}

@property (copy, nonatomic) NSString *deepQAType;
@property (retain, nonatomic) AWEGeneralSearchVideoDeepQAUIConfigModel *UIConfigModel;
@property (retain, nonatomic) AWEGeneralSearchVideoDeepQATitleModel *titleModel;
@property (copy, nonatomic) NSString *shortAnswer;
@property (retain, nonatomic) AWEAwemeModel *awemeInfo;
@property (retain, nonatomic) NSArray *commentList;

+ (id)commentListJSONTransformer;
+ (id)awemeInfoJSONTransformer;
+ (id)UIConfigModelJSONTransformer;
+ (id)titleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeInfo;
- (id)commentList;
- (void)setCommentList:(id)arg0;
- (void)setAwemeInfo:(id)arg0;
- (id)titleModel;
- (void)setTitleModel:(id)arg0;
- (id)shortAnswer;
- (id)UIConfigModel;
- (id)deepQAType;
- (void)setDeepQAType:(id)arg0;
- (void)setUIConfigModel:(id)arg0;
- (void)setShortAnswer:(id)arg0;
- (void).cxx_destruct;

@end
