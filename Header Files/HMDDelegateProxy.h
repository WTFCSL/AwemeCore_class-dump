//
//     Generated by private class-dump
//

@protocol HMDUITrackable;

@interface HMDDelegateProxy : NSProxy {
    id _target;
    id<HMDUITrackable> _consignor;
}

@property (weak, nonatomic) id target;
@property (readonly, nonatomic) id<HMDUITrackable> consignor;

+ (id)proxyWithTarget:(id)arg0 consignor:(id)arg1;

- (id)initWithTarget:(id)arg0 consignor:(id)arg1;
- (id)consignor;
- (BOOL)conformsToProtocol:(id)arg0;
- (Class)class;
- (BOOL)isProxy;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)setTarget:(id)arg0;
- (id)target;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)debugDescription;
- (Class)superclass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (void)dealloc;

@end
