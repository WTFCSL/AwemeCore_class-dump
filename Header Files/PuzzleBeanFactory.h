//
//     Generated by private class-dump
//

@class NSMapTable, NSMutableDictionary;

@interface PuzzleBeanFactory : NSObject {
    NSMapTable *_objectRegistry;
    NSMapTable *_classRegistry;
    NSMutableDictionary *_cachedDict;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

- (Class)getClassWithProtocol:(id)arg0;
- (id)serviceKeyWithProtocol:(id)arg0;
- (id)prototypeObjectWithProtocol:(id)arg0 context:(id)arg1;
- (BOOL)bindClass:(Class)arg0 forProtocol:(id)arg1;
- (BOOL)bindObject:(id)arg0 forProtocol:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
