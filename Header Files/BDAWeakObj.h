//
//     Generated by private class-dump
//

@class NSString;

@interface BDAWeakObj : NSProxy <NSObject> {
    id _obj;
}

@property (readonly, weak, nonatomic) id obj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObj:(id)arg0;
- (BOOL)conformsToProtocol:(id)arg0;
- (Class)class;
- (BOOL)isProxy;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (id)obj;
- (BOOL)isKindOfClass:(Class)arg0;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)debugDescription;
- (Class)superclass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg0;

@end
