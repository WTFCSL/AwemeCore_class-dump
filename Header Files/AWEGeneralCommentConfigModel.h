//
//     Generated by private class-dump
//

@class AWECommentSurveyConfigModel;

@interface AWEGeneralCommentConfigModel : AWEBaseApiModel {
    AWECommentSurveyConfigModel *_commentSurveyConfig;
    long long _publishRetryInterval;
}

@property (retain, nonatomic) AWECommentSurveyConfigModel *commentSurveyConfig;
@property (nonatomic) long long publishRetryInterval;

+ (id)commentSurveyConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)publishRetryInterval;
- (id)commentSurveyConfig;
- (void)setCommentSurveyConfig:(id)arg0;
- (void)setPublishRetryInterval:(long long)arg0;
- (void).cxx_destruct;

@end
