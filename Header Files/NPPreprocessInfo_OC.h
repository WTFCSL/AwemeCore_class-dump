//
//     Generated by private class-dump
//

@class NSString;

@interface NPPreprocessInfo_OC : NSObject {
    struct shared_ptr<nle::preset::NPPreprocessInfo> { struct NPPreprocessInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (readonly, copy, nonatomic) NSString *sourceMaterialPath;
@property (readonly, copy, nonatomic) NSString *preprocessMaterialPath;
@property (readonly, nonatomic) unsigned long long preprocessType;
@property (readonly, copy, nonatomic) NSString *preprocessFailMsg;

+ (id)getPreprocessInfosFromCPPArr:(struct vector<std::shared_ptr<nle::preset::NPPreprocessInfo>, std::allocator<std::shared_ptr<nle::preset::NPPreprocessInfo>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<nle::preset::NPPreprocessInfo> *, std::allocator<std::shared_ptr<nle::preset::NPPreprocessInfo>>> { void *x0; } x2; })arg0;

- (id)sourceMaterialPath;
- (struct shared_ptr<nle::preset::NPPreprocessInfo> { struct NPPreprocessInfo *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPPreprocessInfo> { struct NPPreprocessInfo *x0; struct __shared_weak_count *x1; })arg0;
- (id)preprocessMaterialPath;
- (unsigned long long)preprocessType;
- (id)preprocessFailMsg;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end