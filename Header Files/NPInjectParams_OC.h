//
//     Generated by private class-dump
//

@class NSString;

@interface NPInjectParams_OC : NSObject {
    struct shared_ptr<nle::preset::NPInjectParams> { struct NPInjectParams *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
    NSString *_appID;
    NSString *_accessKey;
    NSString *_appVersion;
    NSString *_effectSdkVersion;
    NSString *_devicePlatform;
    NSString *_host;
    NSString *_effectDomain;
    NSString *_cacheDir;
    NSString *_deviceId;
    NSString *_deviceType;
    NSString *_region;
    NSString *_appLanguage;
    NSString *_deviceScore;
    NSString *_channel;
    NSString *_networkState;
    NSString *_gameplaySettings;
}

@property (readonly, nonatomic) struct shared_ptr<nle::preset::NPInjectParams> { struct NPInjectParams *x0; struct __shared_weak_count *x1; } cppValue;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSString *accessKey;
@property (readonly, copy, nonatomic) NSString *appVersion;
@property (readonly, copy, nonatomic) NSString *effectSdkVersion;
@property (readonly, copy, nonatomic) NSString *devicePlatform;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *effectDomain;
@property (readonly, copy, nonatomic) NSString *cacheDir;
@property (readonly, copy, nonatomic) NSString *deviceId;
@property (readonly, copy, nonatomic) NSString *deviceType;
@property (readonly, copy, nonatomic) NSString *region;
@property (readonly, copy, nonatomic) NSString *appLanguage;
@property (readonly, copy, nonatomic) NSString *deviceScore;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSString *networkState;
@property (readonly, copy, nonatomic) NSString *gameplaySettings;

- (id)deviceScore;
- (id)cacheDir;
- (struct shared_ptr<nle::preset::NPInjectParams> { struct NPInjectParams *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPInjectParams> { struct NPInjectParams *x0; struct __shared_weak_count *x1; })arg0;
- (id)effectSdkVersion;
- (id)initWithAppID:(id)arg0 accessKey:(id)arg1 appVersion:(id)arg2 effectSdkVersion:(id)arg3 host:(id)arg4 effectDomain:(id)arg5 channel:(id)arg6 region:(id)arg7 deviceID:(id)arg8 devicePlatform:(id)arg9 deviceType:(id)arg10 cacheDir:(id)arg11 deviceScore:(id)arg12 appLanguage:(id)arg13 networkState:(id)arg14 gameplaySettings:(id)arg15;
- (id)effectDomain;
- (id)gameplaySettings;
- (id)region;
- (id)channel;
- (id)deviceType;
- (void).cxx_destruct;
- (id)deviceId;
- (id)networkState;
- (id)host;
- (id)appVersion;
- (id)appID;
- (id).cxx_construct;
- (id)accessKey;
- (id)devicePlatform;
- (id)appLanguage;

@end