//
//     Generated by private class-dump
//

@class NSString;
@protocol MediaNetworkDelegate, MediaThreadDelegate;

@interface CKAppConfig : NSObject {
    struct shared_ptr<CK::AppConfig> { struct AppConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
    id /* block */ _requestHeaderFieldBlock;
    id<MediaNetworkDelegate> _networkDelegate;
    id<MediaThreadDelegate> _threadDelegate;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *cacheDir;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) id /* block */ requestHeaderFieldBlock;
@property (retain, nonatomic) id<MediaNetworkDelegate> networkDelegate;
@property (retain, nonatomic) id<MediaThreadDelegate> threadDelegate;

- (void)setCacheDir:(id)arg0;
- (id)cacheDir;
- (void)setRequestHeaderFieldBlock:(id /* block */)arg0;
- (void)setLogger:(id)arg0 level:(unsigned long long)arg1;
- (id /* block */)requestHeaderFieldBlock;
- (id)initWithCppModel:(void *)arg0;
- (struct shared_ptr<CK::AppConfig> { struct AppConfig *x0; struct __shared_weak_count *x1; })cppModel;
- (void)setThreadDelegate:(id)arg0;
- (id)threadDelegate;
- (id)init;
- (void)setApplicationName:(id)arg0;
- (void)setAppID:(id)arg0;
- (void)setHost:(id)arg0;
- (id)deviceType;
- (void)setAppVersion:(id)arg0;
- (void).cxx_destruct;
- (id)deviceId;
- (void)setPlatform:(id)arg0;
- (id)platform;
- (id)host;
- (id)appVersion;
- (id)appID;
- (void)setDeviceType:(id)arg0;
- (id)applicationName;
- (void)setDeviceId:(id)arg0;
- (id).cxx_construct;
- (id)sdkVersion;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (id)networkDelegate;
- (void)setNetworkDelegate:(id)arg0;
- (void)setSdkVersion:(id)arg0;

@end
