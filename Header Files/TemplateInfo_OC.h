//
//     Generated by private class-dump
//

@class TemplateConfig_OC, NSString, NLEResourceNode_OC, NLEVideoFrameModel_OC;

@interface TemplateInfo_OC : NLENode_OC {
    struct shared_ptr<cut::model::TemplateInfo> { struct TemplateInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (nonatomic) struct shared_ptr<cut::model::TemplateInfo> { struct TemplateInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppModel;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) TemplateConfig_OC *config;
@property (retain, nonatomic) NLEResourceNode_OC *coverRes;
@property (retain, nonatomic) NLEVideoFrameModel_OC *coverModel;

+ (id)restore:(id)arg0;

- (void)setCoverModel:(id)arg0;
- (struct shared_ptr<cut::model::TemplateInfo> { struct TemplateInfo *x0; struct __shared_weak_count *x1; })cppModel;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::TemplateInfo> { struct TemplateInfo *x0; struct __shared_weak_count *x1; })arg0;
- (id)coverModel;
- (void)setCoverRes:(id)arg0;
- (id)coverRes;
- (void)addMutableItem:(id)arg0;
- (void)clearMutableItem;
- (id)allMutableItems;
- (void)setCppModel:(struct shared_ptr<cut::model::TemplateInfo> { struct TemplateInfo *x0; struct __shared_weak_count *x1; })arg0;
- (id)desc;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)store;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)title;
- (void)setName:(id)arg0;
- (id).cxx_construct;
- (void)setDesc:(id)arg0;
- (id)name;
- (void)setTitle:(id)arg0;
- (id)templateId;
- (void)setTemplateId:(id)arg0;

@end
