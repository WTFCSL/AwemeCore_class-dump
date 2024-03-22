//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsDetailPromotionGeneralModel : MTLModel <MTLJSONSerializing> {
    NSString *_text;
    NSString *_url;
    NSString *_activityId;
    NSString *_materialId;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *materialId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)text;
- (id)url;
- (id)activityId;
- (void)setActivityId:(id)arg0;
- (id)materialId;
- (void)setMaterialId:(id)arg0;

@end
