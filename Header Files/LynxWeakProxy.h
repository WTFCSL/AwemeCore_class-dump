//
//     Generated by private class-dump
//

@interface LynxWeakProxy : NSObject {
    id _target;
}

@property (readonly, weak, nonatomic) id target;

+ (id)proxyWithTarget:(id)arg0;

- (BOOL)conformsToProtocol:(id)arg0;
- (Class)class;
- (BOOL)isProxy;
- (BOOL)isMemberOfClass:(Class)arg0;
- (id)initWithTarget:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)target;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)debugDescription;
- (Class)superclass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg0;

@end
