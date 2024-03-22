//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface RxMultipleDelegate : NSObject <RTVMultipleDelegateInterface> {
    NSMutableArray *delegateNodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllDelegates;
- (void)removeDelegate:(id)arg0 delegateQueue:(id)arg1;
- (id)duplicateInvocation:(id)arg0;
- (unsigned long long)countForSelector:(SEL)arg0;
- (BOOL)hasDelegateThatRespondsToSelector:(SEL)arg0;
- (id)init;
- (void)addDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (void)removeDelegate:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (unsigned long long)count;
- (void)dealloc;
- (void)doesNotRecognizeSelector:(SEL)arg0;
- (id)delegateEnumerator;
- (void)doNothing;
- (void)addDelegate:(id)arg0 delegateQueue:(id)arg1;
- (unsigned long long)countOfClass:(Class)arg0;

@end
