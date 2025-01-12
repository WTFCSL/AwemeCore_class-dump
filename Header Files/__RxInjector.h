//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface __RxInjector : NSObject <RxInjector, RxInjectorBinder> {
    NSMutableDictionary *_providers;
    NSMutableDictionary *_scopes;
}

@property (retain, nonatomic) NSMutableDictionary *providers;
@property (retain, nonatomic) NSMutableDictionary *scopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInstance:(id)arg0;
- (void)injectProperties:(id)arg0;
- (id)getInstance:(id)arg0 argArray:(id)arg1;
- (void)bind:(id)arg0 toBlock:(id /* block */)arg1;
- (void)bind:(id)arg0 withScope:(id)arg1;
- (void)bind:(id)arg0 toClass:(Class)arg1;
- (void)bind:(id)arg0 toInstance:(id)arg1;
- (id)__hashKey:(id)arg0;
- (id)__providerForKey:(id)arg0;
- (id)__scopeForKey:(id)arg0;
- (id)injectInjector:(id)arg0;
- (void)__setProvider:(id)arg0 forKey:(id)arg1;
- (void)__removeProviderForKey:(id)arg0;
- (void)bind:(id)arg0 toProvider:(id)arg1;
- (void)__setScope:(id)arg0 forKey:(id)arg1;
- (id)getInstance:(id)arg0 args:(id)arg1;
- (void)bind:(id)arg0 toClass:(Class)arg1 withScope:(id)arg2;
- (void)__removeScopeForKey:(id)arg0;
- (id)scopes;
- (void)setScopes:(id)arg0;
- (void)setProviders:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)providers;

@end
