//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface PuzzleStateCenterService : NSObject {
    NSMutableDictionary *_observers;
    NSMutableDictionary *_stateData;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _observersLock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _dataLock;
}

@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSMutableDictionary *stateData;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } observersLock;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } dataLock;

+ (id)sharedService;

- (void)registeredObserver:(id)arg0 withKey:(id)arg1;
- (void)unregisteredObserver:(id)arg0 withKey:(id)arg1;
- (id)getStateWithKey:(id)arg0;
- (void)setSateKey:(id)arg0 value:(id)arg1;
- (id)getStatesWithKeys:(id)arg0;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })dataLock;
- (id)init;
- (void)setObserversLock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })observersLock;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (void)setDataLock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;
- (id)stateData;
- (void)setStateData:(id)arg0;

@end
