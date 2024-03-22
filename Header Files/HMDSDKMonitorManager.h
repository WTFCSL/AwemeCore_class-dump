//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface HMDSDKMonitorManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
    NSMutableDictionary *_sdkInfoDict;
}

@property (retain, nonatomic) NSMutableDictionary *sdkInfoDict;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)setupSDKMonitorWithSDKAid:(id)arg0 monitorUserInfo:(id)arg1 productions:(id /* block */)arg2;
- (void)setSdkInfoDict:(id)arg0;
- (id)sdkInfoDict;
- (id)sdkHostAidWithSDKAid:(id)arg0;
- (id)ttMonitorUserInfoWithSDKAid:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)dealloc;

@end