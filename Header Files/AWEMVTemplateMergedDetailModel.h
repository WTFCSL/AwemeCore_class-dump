//
//     Generated by private class-dump
//

@class NSString, AWEMvDetailModel, AWEAweMVTemplateModel;

@interface AWEMVTemplateMergedDetailModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _templateID;
    long long _type;
    AWEAweMVTemplateModel *_cutsameTemplate;
    AWEMvDetailModel *_classicalTemplate;
}

@property (nonatomic) unsigned long long templateID;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAweMVTemplateModel *cutsameTemplate;
@property (retain, nonatomic) AWEMvDetailModel *classicalTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cutsameTemplateJSONTransformer;
+ (id)classicalTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cutsameTemplate;
- (id)classicalTemplate;
- (void)setCutsameTemplate:(id)arg0;
- (void)setClassicalTemplate:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (unsigned long long)templateID;
- (void)setType:(long long)arg0;
- (void)setTemplateID:(unsigned long long)arg0;

@end
