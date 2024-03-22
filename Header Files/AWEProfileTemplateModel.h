//
//     Generated by private class-dump
//

@class AWEUserModel, NSString, NSNumber, AWEVideoModel;

@interface AWEProfileTemplateModel : AWEBaseApiModel <AWEProfileTemplateModelProtocol> {
    BOOL _isCollected;
    NSString *_templateID;
    NSNumber *_materialCount;
    NSNumber *_usageUserCountInVC;
    AWEVideoModel *_video;
    NSString *_templateTitle;
    NSString *_templateDesc;
    AWEUserModel *_author;
    long long _modelType;
    NSString *_paidTemplateTips;
    long long _freePaidTemplate;
}

@property (copy, nonatomic) NSString *templateID;
@property (retain, nonatomic) NSNumber *materialCount;
@property (retain, nonatomic) NSNumber *usageUserCountInVC;
@property (retain, nonatomic) AWEVideoModel *video;
@property (copy, nonatomic) NSString *templateTitle;
@property (copy, nonatomic) NSString *templateDesc;
@property (retain, nonatomic) AWEUserModel *author;
@property (nonatomic) long long modelType;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *paidTemplateTips;
@property (nonatomic) long long freePaidTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isCollected;
- (void)setIsCollected:(BOOL)arg0;
- (long long)freePaidTemplate;
- (id)templateDesc;
- (void)setTemplateDesc:(id)arg0;
- (void)setMaterialCount:(id)arg0;
- (id)usageUserCountInVC;
- (void)setUsageUserCountInVC:(id)arg0;
- (id)templateTitle;
- (void)setTemplateTitle:(id)arg0;
- (id)paidTemplateTips;
- (void)setPaidTemplateTips:(id)arg0;
- (void)setFreePaidTemplate:(long long)arg0;
- (void)setModelType:(long long)arg0;
- (long long)modelType;
- (void).cxx_destruct;
- (void)setVideo:(id)arg0;
- (id)templateID;
- (id)author;
- (void)setAuthor:(id)arg0;
- (id)video;
- (void)setTemplateID:(id)arg0;
- (id)materialCount;

@end