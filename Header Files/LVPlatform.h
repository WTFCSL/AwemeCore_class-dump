//
//     Generated by private class-dump
//

@class NSString;

@interface LVPlatform : NSObject {
    struct shared_ptr<CutSame::PlatformClass> { struct PlatformClass *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *osName;
@property (copy, nonatomic) NSString *osVersion;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::PlatformClass> { struct PlatformClass *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::PlatformClass> { struct PlatformClass *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::PlatformClass> { struct PlatformClass *x0; struct __shared_weak_count *x1; })arg0;
- (id)init;
- (id)osName;
- (id)osVersion;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)appVersion;
- (id).cxx_construct;
- (void)setOsVersion:(id)arg0;
- (void)setOsName:(id)arg0;

@end
