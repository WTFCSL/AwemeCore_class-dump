//
//     Generated by private class-dump
//

@class NSMutableDictionary, LynxComponentScopeRegistry;
@protocol LynxTemplateProvider;

@interface LynxConfig : NSObject {
    struct shared_ptr<lynx::piper::ModuleManagerDarwin> { struct ModuleManagerDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } _managerPtr;
    id<LynxTemplateProvider> _templateProvider;
    LynxComponentScopeRegistry *_componentRegistry;
    NSMutableDictionary *_contextDict;
}

@property (readonly, nonatomic) id<LynxTemplateProvider> templateProvider;
@property (readonly, nonatomic) LynxComponentScopeRegistry *componentRegistry;
@property (copy, nonatomic) NSMutableDictionary *contextDict;

+ (id)globalConfig;
+ (void)prepareGlobalConfig:(id)arg0;

- (id)contextDict;
- (void)setContextDict:(id)arg0;
- (void)registerUI:(Class)arg0 withName:(id)arg1;
- (void)registerModule:(Class)arg0 param:(id)arg1;
- (void)registerContext:(id)arg0 sessionInfo:(id /* block */)arg1;
- (void)registerMethodAuth:(id /* block */)arg0;
- (void)registerShadowNode:(Class)arg0 withName:(id)arg1;
- (id)componentRegistry;
- (struct shared_ptr<lynx::piper::ModuleManagerDarwin> { struct ModuleManagerDarwin *x0; struct __shared_weak_count *x1; })moduleManagerPtr;
- (void)setRenderkitImpl:(void *)arg0;
- (void)registerModule:(Class)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProvider:(id)arg0;
- (id).cxx_construct;
- (id)templateProvider;

@end
