//
//     Generated by private class-dump
//

@class NSString, NSMapTable, NSRecursiveLock;

@interface HGAuthorizationManager : NSObject <HGWarmBootMessage> {
    NSRecursiveLock *_lock;
    NSMapTable *_recorders;
    NSMapTable *_authorizers;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMapTable *recorders;
@property (retain, nonatomic) NSMapTable *authorizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)getPermissionRecorderWithUniqueID:(id)arg0;
- (id)getPermissionAuthorizerWithUniqueID:(id)arg0;
- (void)addPermissionRecorder:(id)arg0 uniqueID:(id)arg1;
- (void)addPermissionAuthorizer:(id)arg0 uniqueID:(id)arg1;
- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (void)setRecorders:(id)arg0;
- (void)setAuthorizers:(id)arg0;
- (id)authorizers;
- (id)recorders;
- (void)removePermissionRecorderWithUniqueID:(id)arg0;
- (void)removePermissionAuthorizerWithUniqueID:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
