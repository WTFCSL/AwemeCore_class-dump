//
//     Generated by private class-dump
//

@class NSString, NLEModel_OC;

@interface NPPreset_OC : NSObject {
    struct shared_ptr<nle::preset::NPPreset> { struct NPPreset *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (nonatomic) struct shared_ptr<nle::preset::NPPreset> { struct NPPreset *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (readonly, copy, nonatomic) NSString *presetID;
@property (readonly, nonatomic) NLEModel_OC *contentModel;

- (struct shared_ptr<nle::preset::NPPreset> { struct NPPreset *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPPreset> { struct NPPreset *x0; struct __shared_weak_count *x1; })arg0;
- (void)setCppValue:(struct shared_ptr<nle::preset::NPPreset> { struct NPPreset *x0; struct __shared_weak_count *x1; })arg0;
- (id)initWithPresetID:(id)arg0;
- (id)contentModel;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)presetID;

@end