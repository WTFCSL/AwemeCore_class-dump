//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDPUnisusBundleVersionInfo : NSObject {
    struct shared_ptr<uni::service::base_bundle::BaseBundleVersionInfo> { struct BaseBundleVersionInfo *__ptr_; struct __shared_weak_count *__cntrl_; } versionInfo;
}

@property (readonly, nonatomic) long long update_version_int;
@property (readonly, copy, nonatomic) NSString *update_version_str;
@property (readonly, copy, nonatomic) NSString *external_version_str;
@property (readonly, nonatomic) NSArray *version_str_parts;

- (long long)update_version_int;
- (id)update_version_str;
- (id)initWithVersionInfo:(struct shared_ptr<uni::service::base_bundle::BaseBundleVersionInfo> { struct BaseBundleVersionInfo *x0; struct __shared_weak_count *x1; })arg0;
- (id)external_version_str;
- (id)version_str_parts;
- (void).cxx_destruct;
- (id).cxx_construct;

@end