//
//     Generated by private class-dump
//

@interface NLETemplateMattingService_OC : NSObject {
    struct shared_ptr<nle::media::NLETemplateMattingService> { struct NLETemplateMattingService *__ptr_; struct __shared_weak_count *__cntrl_; } _cppNode;
}

@property (nonatomic) struct shared_ptr<nle::media::NLETemplateMattingService> { struct NLETemplateMattingService *__ptr_; struct __shared_weak_count *__cntrl_; } cppNode;

+ (id)getMattingWorkSpace:(id)arg0 filePath:(id)arg1;

- (void)startProcess;
- (id)initWithCPPNode:(struct shared_ptr<nle::media::NLETemplateMattingService> { struct NLETemplateMattingService *x0; struct __shared_weak_count *x1; })arg0;
- (id)initWithTemplateModel:(id)arg0 workspace:(id)arg1 algorithmConfigPath:(id)arg2 delegate:(id)arg3;
- (struct shared_ptr<nle::media::NLETemplateMattingService> { struct NLETemplateMattingService *x0; struct __shared_weak_count *x1; })cppNode;
- (void)setCppNode:(struct shared_ptr<nle::media::NLETemplateMattingService> { struct NLETemplateMattingService *x0; struct __shared_weak_count *x1; })arg0;
- (void).cxx_destruct;
- (void)cancel;
- (id).cxx_construct;

@end