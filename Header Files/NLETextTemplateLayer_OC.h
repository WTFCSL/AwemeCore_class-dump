//
//     Generated by private class-dump
//

@interface NLETextTemplateLayer_OC : NLELayer_OC {
    struct shared_ptr<nleimage_api::TextTemplateLayer> { struct TextTemplateLayer *__ptr_; struct __shared_weak_count *__cntrl_; } _cppTempateLayer;
}

@property (nonatomic) struct shared_ptr<nleimage_api::TextTemplateLayer> { struct TextTemplateLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppTempateLayer;

- (id)initWithCPPTextTemplateLayer:(struct shared_ptr<nleimage_api::TextTemplateLayer> { struct TextTemplateLayer *x0; struct __shared_weak_count *x1; })arg0;
- (void)setCppTempateLayer:(struct shared_ptr<nleimage_api::TextTemplateLayer> { struct TextTemplateLayer *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<nleimage_api::TextTemplateLayer> { struct TextTemplateLayer *x0; struct __shared_weak_count *x1; })cppTempateLayer;
- (id)initWithId:(id)arg0 resources:(id)arg1 dependResources:(id)arg2;
- (int)getTextCount;
- (id)getText:(long long)arg0;
- (void)setText:(long long)arg0 text:(id)arg1;
- (id)getTextParam:(long long)arg0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end