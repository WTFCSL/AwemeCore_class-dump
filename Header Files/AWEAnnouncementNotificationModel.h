//
//     Generated by private class-dump
//

@class NSString, AWEChallengeModel, AWESearchPushModel, NSNumber, AWEURLModel;

@interface AWEAnnouncementNotificationModel : AWEBaseApiModel {
    NSNumber *_task_id;
    NSString *_title;
    NSString *_content;
    AWEChallengeModel *_challenge;
    NSString *_schemaURL;
    AWEURLModel *_imageURL;
    long long _type;
    AWESearchPushModel *_searchModel;
    NSString *_targetID;
    double _contentW;
    double _contentH;
}

@property (retain, nonatomic) NSNumber *task_id;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWESearchPushModel *searchModel;
@property (retain, nonatomic) NSString *targetID;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;

+ (id)challengeJSONTransformer;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaURL;
- (void)setSchemaURL:(id)arg0;
- (void)setContentH:(double)arg0;
- (double)contentH;
- (double)contentW;
- (void)setContentW:(double)arg0;
- (id)task_id;
- (void)setTask_id:(id)arg0;
- (void).cxx_destruct;
- (id)challenge;
- (void)setImageURL:(id)arg0;
- (long long)type;
- (id)content;
- (id)imageURL;
- (void)setChallenge:(id)arg0;
- (void)setTargetID:(id)arg0;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;
- (id)targetID;
- (void)setTitle:(id)arg0;
- (id)searchModel;
- (void)setSearchModel:(id)arg0;

@end
