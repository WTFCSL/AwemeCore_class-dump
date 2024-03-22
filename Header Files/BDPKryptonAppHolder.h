//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface BDPKryptonAppHolder : NSObject {
    NSMutableDictionary *_kryptonAppDict;
    NSRecursiveLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *kryptonAppDict;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedInstance;

- (id)kryptonAppWithKey:(id)arg0;
- (void)addKryptonApp:(id)arg0 withKey:(id)arg1;
- (void)removeKryptonAppWithKey:(id)arg0;
- (id)kryptonAppDict;
- (void)setKryptonAppDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
