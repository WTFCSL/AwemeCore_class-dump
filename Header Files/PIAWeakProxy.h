//
//     Generated by private class-dump
//

@interface PIAWeakProxy : NSProxy {
    id _object;
}

@property (weak, nonatomic) id object;

+ (id)weakProxy:(id)arg0;

- (BOOL)conformsToProtocol:(id)arg0;
- (Class)class;
- (BOOL)isProxy;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)object;
- (id)initWithObject:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)debugDescription;
- (Class)superclass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)setObject:(id)arg0;

@end