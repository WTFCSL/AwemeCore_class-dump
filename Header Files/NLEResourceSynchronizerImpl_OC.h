//
//     Generated by private class-dump
//

@interface NLEResourceSynchronizerImpl_OC : NSObject {
    struct shared_ptr<nle::resource::NLEResourceSynchronizerImpl> { struct NLEResourceSynchronizerImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _cppSynchronizer;
}

@property (nonatomic) struct shared_ptr<nle::resource::NLEResourceSynchronizerImpl> { struct NLEResourceSynchronizerImpl *__ptr_; struct __shared_weak_count *__cntrl_; } cppSynchronizer;

- (id)initWithCPPNode:(struct shared_ptr<nle::resource::NLEResourceSynchronizerImpl> { struct NLEResourceSynchronizerImpl *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<nle::resource::NLEResourceSynchronizerImpl> { struct NLEResourceSynchronizerImpl *x0; struct __shared_weak_count *x1; })cppSynchronizer;
- (int)fetch:(id)arg0 callback:(id)arg1;
- (int)push:(id)arg0 callback:(id)arg1;
- (void)setCppSynchronizer:(struct shared_ptr<nle::resource::NLEResourceSynchronizerImpl> { struct NLEResourceSynchronizerImpl *x0; struct __shared_weak_count *x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end