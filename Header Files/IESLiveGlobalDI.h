//
//     Generated by private class-dump
//

@class Protocol;
@protocol HTSKVStore, IESLiveEnvironment, IESLiveSettings, IESLiveAppInfo;

@interface IESLiveGlobalDI : IESLiveDI {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rw_lock;
    id<IESLiveSettings> _liveSettings;
    id<HTSKVStore> _kvStore;
    id _debugService;
    id<IESLiveEnvironment> _environment;
    id<IESLiveAppInfo> _appInfo;
    id _userService;
    Protocol *_debugServiceProtocol;
    Protocol *_userServiceProtocol;
}

@property (weak, nonatomic) id<IESLiveSettings> liveSettings;
@property (weak, nonatomic) id<HTSKVStore> kvStore;
@property (weak, nonatomic) id debugService;
@property (weak, nonatomic) id<IESLiveEnvironment> environment;
@property (weak, nonatomic) id<IESLiveAppInfo> appInfo;
@property (weak, nonatomic) id userService;
@property (retain, nonatomic) Protocol *debugServiceProtocol;
@property (retain, nonatomic) Protocol *userServiceProtocol;

- (id)userService;
- (void)setUserService:(id)arg0;
- (id)liveSettings;
- (void)setLiveSettings:(id)arg0;
- (void)setDebugService:(id)arg0;
- (id)debugService;
- (id)cacheObjectWithProtocol:(id)arg0;
- (id)getLiveSettings;
- (id)getKvStore;
- (id)debugServiceProtocol;
- (id)getDebugService;
- (id)userServiceProtocol;
- (id)getUserService;
- (void)setDebugServiceProtocol:(id)arg0;
- (void)setUserServiceProtocol:(id)arg0;
- (id)kvStore;
- (void)setKvStore:(id)arg0;
- (void).cxx_destruct;
- (void)setEnvironment:(id)arg0;
- (id)environment;
- (id)getEnvironment;
- (void)dealloc;
- (void)setUp;
- (id)appInfo;
- (void)setAppInfo:(id)arg0;
- (id)getAppInfo;

@end