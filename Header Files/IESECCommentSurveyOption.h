//
//     Generated by private class-dump
//

@class NSString, IESECCommentSurveySubOptionConfig;

@interface IESECCommentSurveyOption : MTLModel <MTLJSONSerializing> {
    NSString *_optionCode;
    NSString *_optionDesc;
    IESECCommentSurveySubOptionConfig *_subOptionConfig;
}

@property (copy, nonatomic) NSString *optionCode;
@property (copy, nonatomic) NSString *optionDesc;
@property (retain, nonatomic) IESECCommentSurveySubOptionConfig *subOptionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subOptionConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setOptionCode:(id)arg0;
- (id)optionCode;
- (id)optionDesc;
- (void)setOptionDesc:(id)arg0;
- (id)subOptionConfig;
- (void)setSubOptionConfig:(id)arg0;
- (void).cxx_destruct;

@end