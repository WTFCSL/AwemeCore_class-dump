//
//     Generated by private class-dump
//

@class HGMessageHash, Protocol;

@interface HGMessage : NSObject {
    unsigned int p_methodCount;
    Protocol *p_messageKey;
    struct objc_method_description { SEL x0; char *x1; } *p_methods;
    HGMessageHash *p_dicObserver;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

- (BOOL)registerMessage:(id)arg0;
- (void)unregisterMessage:(id)arg0;
- (id)getMessageListForSelector:(SEL)arg0;
- (id)initWithKey:(id)arg0;
- (void)cleanUp;
- (void).cxx_destruct;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })lock;
- (id)description;
- (void)dealloc;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;

@end