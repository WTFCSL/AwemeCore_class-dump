//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface EEUIAnnotationAssetUIMoreAlgorithmRequirement : NSObject <EEUIAnnotationAssetUIMoreAlgorithmRequirement> {
    struct shared_ptr<EffectTemplateEditor::UIAnnotationAssetUIMoreAlgorithmRequirement> { struct UIAnnotationAssetUIMoreAlgorithmRequirement *__ptr_; struct __shared_weak_count *__cntrl_; } _algorithmRequirementPtr;
}

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationAssetUIMoreAlgorithmRequirement> { struct UIAnnotationAssetUIMoreAlgorithmRequirement *__ptr_; struct __shared_weak_count *__cntrl_; } algorithmRequirementPtr;
@property (readonly, nonatomic) NSArray *algs;
@property (readonly, copy, nonatomic) NSString *relation;
@property (readonly, nonatomic) long long albumFilter;
@property (readonly, nonatomic) BOOL needAlgPreprocess;
@property (readonly, nonatomic) NSArray *algPreprocess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAlgorithmRequirementPtr:(struct shared_ptr<EffectTemplateEditor::UIAnnotationAssetUIMoreAlgorithmRequirement> { struct UIAnnotationAssetUIMoreAlgorithmRequirement *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<EffectTemplateEditor::UIAnnotationAssetUIMoreAlgorithmRequirement> { struct UIAnnotationAssetUIMoreAlgorithmRequirement *x0; struct __shared_weak_count *x1; })algorithmRequirementPtr;
- (id)algs;
- (BOOL)needAlgPreprocess;
- (id)algPreprocess;
- (id)initWithAnnotationUIMoreAlgorithmRequirement:(const void *)arg0;
- (void).cxx_destruct;
- (id)relation;
- (id).cxx_construct;
- (long long)albumFilter;

@end
