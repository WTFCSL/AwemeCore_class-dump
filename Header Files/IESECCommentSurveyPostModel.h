//
//     Generated by private class-dump
//

@class NSString;

@interface IESECCommentSurveyPostModel : MTLModel <MTLJSONSerializing> {
    long long _surveyId;
    long long _surveyScene;
    NSString *_optionCode;
    NSString *_content;
    NSString *_subOptionCodeList;
}

@property (nonatomic) long long surveyId;
@property (nonatomic) long long surveyScene;
@property (copy, nonatomic) NSString *optionCode;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *subOptionCodeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)surveyId;
- (void)setSurveyId:(long long)arg0;
- (void)setSurveyScene:(long long)arg0;
- (void)setOptionCode:(id)arg0;
- (void)setSubOptionCodeList:(id)arg0;
- (id)optionCode;
- (long long)surveyScene;
- (id)subOptionCodeList;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;

@end
