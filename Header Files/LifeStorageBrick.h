//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface LifeStorageBrick : NSObject {
    NSRecursiveLock *_lock;
    NSMutableDictionary *_store;
    NSRecursiveLock *_observerLock;
    NSMutableDictionary *_observers;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *store;
@property (retain, nonatomic) NSRecursiveLock *observerLock;
@property (retain, nonatomic) NSMutableDictionary *observers;

- (void)notifyObserversForKey:(id)arg0 currentValue:(id)arg1 previousValue:(id)arg2;
- (id)observeValueForKey:(id)arg0 onChangeBlock:(id /* block */)arg1;
- (void)removeObserverForKey:(id)arg0 withHandle:(id)arg1;
- (id)observeEveryChanges:(id /* block */)arg0;
- (void)removeObserverForEveryChangesWithHandle:(id)arg0;
- (id)init;
- (id)observerLock;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)store;
- (id)observers;
- (void)setStore:(id)arg0;
- (void)setObservers:(id)arg0;
- (void)setObserverLock:(id)arg0;
- (id)lock;
- (id)objectForKey:(id)arg0;
- (void)setLock:(id)arg0;

@end
