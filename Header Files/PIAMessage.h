//
//     Generated by private class-dump
//

@class PIAMessageHash, Protocol;

@interface PIAMessage : NSObject {
    unsigned int methodCount;
    Protocol *messageKey;
    struct objc_method_description { SEL x0; char *x1; } *methods;
    PIAMessageHash *hashObserver;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) unsigned int methodCount;
@property (nonatomic) struct objc_method_description { SEL x0; char *x1; } *methods;
@property (retain, nonatomic) Protocol *messageKey;
@property (retain, nonatomic) PIAMessageHash *hashObserver;

- (void)registerMessage:(id)arg0;
- (void)unregisterMessage:(id)arg0;
- (struct vector<objc_method_description, std::allocator<objc_method_description>> { struct objc_method_description *x0; struct objc_method_description *x1; struct __compressed_pair<objc_method_description *, std::allocator<objc_method_description>> { struct objc_method_description *x0; } x2; })getAllMethodOfProtocol:(id)arg0;
- (id)getObserversArrayForMessageKey:(id)arg0;
- (unsigned int)methodCount;
- (void)setMethodCount:(unsigned int)arg0;
- (id)hashObserver;
- (void)setHashObserver:(id)arg0;
- (id)initWithKey:(id)arg0;
- (void).cxx_destruct;
- (struct objc_method_description { SEL x0; char *x1; } *)methods;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })lock;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (id)messageKey;
- (void)setMessageKey:(id)arg0;
- (void)setMethods:(struct objc_method_description { SEL x0; char *x1; } *)arg0;

@end
