//
//     Generated by private class-dump
//

@class NSArray, NSString, NSHashTable;

@interface LynxLifecycleDispatcher : NSObject <LynxViewLifecycle> {
    NSHashTable *_innerLifecycleClients;
}

@property (readonly, nonatomic) NSArray *lifecycleClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addLifecycleClient:(id)arg0;
- (void)lynxView:(id)arg0 didRecieveError:(id)arg1;
- (id)lifecycleClients;
- (void)removeLifecycleClient:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (void)dummyMethod;

@end