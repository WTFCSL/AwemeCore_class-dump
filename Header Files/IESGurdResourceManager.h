//
//     Generated by private class-dump
//

@class IESGurdDefaultNetworkDelegate, IESGurdNetworkDelegateImpl;

@interface IESGurdResourceManager : NSObject {
    IESGurdDefaultNetworkDelegate *_defaultNetworkDelegate;
    IESGurdNetworkDelegateImpl *_networkDelegate;
}

@property (class, nonatomic, getter=isRetryEnabled) BOOL retryEnabled;
@property (class, nonatomic, getter=isPollingEnabled) BOOL pollingEnabled;

@property (retain, nonatomic) IESGurdDefaultNetworkDelegate *defaultNetworkDelegate;
@property (retain, nonatomic) IESGurdNetworkDelegateImpl *networkDelegate;

+ (void)setRetryTotalDuration:(long long)arg0;
+ (long long)retryTotalDuration;
+ (void)realRequestWithMethod:(id)arg0 URLString:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
+ (void)setRetryEnabled:(BOOL)arg0;
+ (void)downloadPackageWithDownloadInfoModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)cancelDownloadWithIdentity:(id)arg0;
+ (void)addTTResponseFilterObject:(id /* block */)arg0;
+ (void)downloadResources:(id)arg0 completion:(id /* block */)arg1;
+ (void)fetchConfigWithURLString:(id)arg0 multiAccessKeysRequest:(id)arg1;
+ (BOOL)isPollingEnabled;
+ (void)setPollingEnabled:(BOOL)arg0;
+ (BOOL)isRetryEnabled;
+ (BOOL)checkIfServerAvailable;
+ (void)updateServerAvailable:(BOOL)arg0;
+ (void)POSTWithURLString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestConfigWithURLString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (id)packagesArrayWithResponse:(id)arg0 request:(id)arg1;
+ (void)gurdDidFetchConfigWithPackagesArray:(id)arg0 request:(id)arg1;
+ (void)sendQuerySettingsResponse:(id)arg0 logInfo:(id)arg1;
+ (void)fetchSettingsWithRequest:(id)arg0 completion:(id /* block */)arg1;
+ (id)networkDelegateForDownload;
+ (void)sendDownloadStats:(id)arg0 packageSize:(unsigned long long)arg1 error:(id)arg2;
+ (void)innerRequestWithMethod:(id)arg0 URLString:(id)arg1 params:(id)arg2 completion:(id /* block */)arg3;
+ (id)networkDelegateForRequest;
+ (void)GETWithURLString:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
+ (void)setRetryCount:(long long)arg0;
+ (long long)retryCount;
+ (id)sharedManager;
+ (void)setDebugDelegate:(id)arg0;

- (id)defaultNetworkDelegate;
- (void)setDefaultNetworkDelegate:(id)arg0;
- (void).cxx_destruct;
- (id)networkDelegate;
- (void)setNetworkDelegate:(id)arg0;

@end
