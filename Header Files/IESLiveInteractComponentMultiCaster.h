//
//     Generated by private class-dump
//

@class NSPointerArray;

@interface IESLiveInteractComponentMultiCaster : NSObject {
    NSPointerArray *_delegates;
}

@property (retain, nonatomic) NSPointerArray *delegates;

- (void)fallbackUnrecognizedSelector:(SEL)arg0;
- (id)initWithComponents:(id)arg0 retain:(BOOL)arg1;
- (void)p_removeDelegates:(void *)arg0;
- (id)signatureForSelector:(SEL)arg0;
- (void)mountComponents:(id)arg0;
- (void)unmountComponents:(id)arg0;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (BOOL)respondsToSelector:(SEL)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)debugDescription;
- (id)description;
- (id)allObjects;

@end
