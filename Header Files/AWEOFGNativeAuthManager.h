//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEOFGNativeAuthManager : NSObject {
    NSMutableDictionary *_authCacheDict;
    NSObject<OS_dispatch_semaphore> *_authMethodAccessLock;
}

@property (retain, nonatomic) NSMutableDictionary *authCacheDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *authMethodAccessLock;

+ (id)sharedManager;

- (BOOL)isAuthorizedForClientKey:(id)arg0 appID:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (void)setAuthCacheDict:(id)arg0;
- (void)setAuthMethodAccessLock:(id)arg0;
- (id)authCacheDict;
- (id)authMethodAccessLock;
- (id)localAuthCacheDirectory;
- (id)readLocalAuthMethodCache;
- (BOOL)_isAuthorizedForClientKey:(id)arg0 appID:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (BOOL)isValidWithClientKey:(id)arg0 appID:(id)arg1 error:(id *)arg2;
- (id)localAuthCacheFile;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (id)errorWithCode:(long long)arg0 message:(id)arg1;

@end
