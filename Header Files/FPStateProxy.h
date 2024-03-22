//
//     Generated by private class-dump
//

@interface FPStateProxy : NSProxy {
    id _state;
    id /* block */ _handler;
}

@property (retain, nonatomic) id state;
@property (copy, nonatomic) id /* block */ handler;

- (id)initWithWrappedState:(id)arg0 didSetPropertyHandler:(id /* block */)arg1;
- (id)obtainPropertyNameFromSetter:(id)arg0;
- (void).cxx_destruct;
- (id)state;
- (void)forwardInvocation:(id)arg0;
- (void)setState:(id)arg0;
- (void)setHandler:(id /* block */)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id /* block */)handler;

@end