//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface BDPLaunchDispatchCenter : NSObject {
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dispatchClassList;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *dispatchClassList;

+ (id)containerControllerWithLaunchParam:(id)arg0;
+ (void)registerDispatchObject:(Class)arg0 type:(id)arg1;
+ (Class)dispatchClassWithType:(id)arg0;
+ (BOOL)dispatchWithLaunchParam:(id)arg0;
+ (id)sharedCenter;

- (id)containerControllerWithLaunchParam:(id)arg0;
- (void)registerDispatchObject:(Class)arg0 type:(id)arg1;
- (void)setDispatchClassList:(id)arg0;
- (id)dispatchClassList;
- (BOOL)dispatchWithLaunchParam:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end