//
//     Generated by private class-dump
//

@interface DAVLokiResourceProtocol_OC : DAVResourceProtocol_OC {
    struct shared_ptr<davinci::loki::LokiResourceProtocol> { struct LokiResourceProtocol *__ptr_; struct __shared_weak_count *__cntrl_; } _lokiResource;
}

+ (BOOL)isLokiResourceWithResourceId:(id)arg0;

- (id)buildURS;
- (id)initWithEffectId:(id)arg0;
- (id)initWithResourceId:(id)arg0 panel:(id)arg1;
- (id)getSourceFrom;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getParameters;

@end
