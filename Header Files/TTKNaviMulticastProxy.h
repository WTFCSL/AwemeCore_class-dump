//
//     Generated by private class-dump
//

@class Protocol;

@interface TTKNaviMulticastProxy : NSProxy {
    Protocol *_proto;
    id /* block */ _targets;
}

@property (retain, nonatomic) Protocol *proto;
@property (copy, nonatomic) id /* block */ targets;

+ (struct objc_method_description { SEL x0; char *x1; })methodSignatureOfProtocol:(id)arg0 with:(SEL)arg1;

- (void)setProto:(id)arg0;
- (id)initWithProtocol:(id)arg0 targets:(id /* block */)arg1;
- (BOOL)conformsToProtocol:(id)arg0;
- (id /* block */)targets;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (id)proto;
- (BOOL)respondsToSelector:(SEL)arg0;
- (void)setTargets:(id /* block */)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;

@end
