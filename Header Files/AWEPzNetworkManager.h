//
//     Generated by private class-dump
//

@class MMKV;

@interface AWEPzNetworkManager : NSObject {
    id /* block */ _isDomainRegisterBlock;
    id /* block */ _isStrategyRegisterBlock;
    MMKV *_mmkv;
}

@property (retain, nonatomic) MMKV *mmkv;
@property (copy, nonatomic) id /* block */ isDomainRegisterBlock;
@property (copy, nonatomic) id /* block */ isStrategyRegisterBlock;

- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (void)requestComponentDataWithRequests:(id)arg0 completion:(id /* block */)arg1;
- (void)setIsDomainRegisterBlock:(id /* block */)arg0;
- (void)setIsStrategyRegisterBlock:(id /* block */)arg0;
- (id)getDomainConfigWithDomainName:(id)arg0;
- (id)storageKeyWithDomainName:(id)arg0;
- (id)tryGetHomePageDomainConfigInOldConfigWithError:(id *)arg0;
- (BOOL)p_checkDomainModel:(id)arg0 error:(id *)arg1 nonSupportStrategies:(id *)arg2;
- (BOOL)p_checkConfigModel:(id)arg0 error:(id *)arg1;
- (void)p_requestComponentDataWithRequests:(id)arg0 sessionID:(long long)arg1 completion:(id /* block */)arg2;
- (id)p_checkConfigModel:(id)arg0 sloExtra:(id)arg1;
- (BOOL)cacheDomain:(id)arg0 data:(id)arg1;
- (void)p_requestComponentDataWithURl:(id)arg0 hashMap:(id)arg1 uid:(id)arg2 sessionID:(long long)arg3 retryCount:(long long)arg4 completion:(id /* block */)arg5;
- (id /* block */)isDomainRegisterBlock;
- (id /* block */)isStrategyRegisterBlock;
- (void).cxx_destruct;

@end