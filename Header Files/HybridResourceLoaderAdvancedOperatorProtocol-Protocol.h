//
//     Generated by private class-dump
//

@protocol HybridResourceLoaderAdvancedOperatorProtocol <NSObject>

- (void)registeAccessKey:(id)arg0 appendPrefixList:(id)arg1;
- (id)getDefaultAccessKey;
- (void)registeDefaultAccessKey:(id)arg0;
- (void)registeAccessKey:(id)arg0 withPrefixList:(id)arg1;
- (void)appendPrefixList:(id)arg0 withAccessKey:(id)arg1;
- (void)syncChannelIfNeeded:(id)arg0 accessKey:(id)arg1 completion:(id /* block */)arg2;
- (id)getFalconPrefixList;

@optional

- (unsigned long long)packageVersionForAccessKey:(id)arg0 andChannel:(id)arg1;

@end
