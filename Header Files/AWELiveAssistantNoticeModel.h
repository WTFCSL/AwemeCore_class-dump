//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEURLModel;

@interface AWELiveAssistantNoticeModel : AWEBaseApiModel {
    NSString *_title;
    NSString *_content;
    NSString *_schemaURL;
    NSString *_webURL;
    NSNumber *_subType;
    NSNumber *_task_id;
    AWEURLModel *_imageURL;
    double _contentW;
    double _contentH;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schemaURL;
@property (copy, nonatomic) NSString *webURL;
@property (retain, nonatomic) NSNumber *subType;
@property (retain, nonatomic) NSNumber *task_id;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (nonatomic) double contentW;
@property (nonatomic) double contentH;

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
- (void)setSubType:(id)arg0;
- (id)webURL;
- (void)setImageURL:(id)arg0;
- (void)setWebURL:(id)arg0;
- (id)subType;
- (id)content;
- (id)imageURL;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;

@end
