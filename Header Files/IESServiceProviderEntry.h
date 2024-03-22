//
//     Generated by private class-dump
//

@class IESServiceWeakObject;

@interface IESServiceProviderEntry : IESServiceEntry {
    id /* block */ _provider;
    long long _scopeType;
    id _singleCache;
    Class _aClass;
    IESServiceWeakObject *_weakObject;
    id /* block */ _didResolve;
}

@property (copy, nonatomic) id /* block */ didResolve;

- (id)extractObject;
- (id)tryExtractObject;
- (id)initWithProvider:(id /* block */)arg0 scopeType:(long long)arg1;
- (id)initWithClass:(Class)arg0 scopeType:(long long)arg1;
- (id /* block */)didResolve;
- (void)setDidResolve:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
