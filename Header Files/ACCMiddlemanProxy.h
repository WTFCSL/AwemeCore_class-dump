//
//     Generated by private class-dump
//

@interface ACCMiddlemanProxy : NSProxy {
    id _originalDelegate;
    id _middlemanDelegate;
}

@property (weak, nonatomic) id originalDelegate;
@property (weak, nonatomic) id middlemanDelegate;

- (void)setMiddlemanDelegate:(id)arg0;
- (id)middlemanDelegate;
- (BOOL)conformsToProtocol:(id)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)debugDescription;
- (id)originalDelegate;
- (void)setOriginalDelegate:(id)arg0;

@end
