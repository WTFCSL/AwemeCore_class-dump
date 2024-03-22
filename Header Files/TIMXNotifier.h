//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;

@interface TIMXNotifier : NSObject <TIMXNotifierProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
    TIMXMulticastDelegate *_observerMulticast;
}

@property (retain, nonatomic) TIMXMulticastDelegate *observerMulticast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDelegateWithIdentifier:(id)arg0;
- (id)observerMulticast;
- (void)setObserverMulticast:(id)arg0;
- (id)addWeakDelegate:(id)arg0 onQueue:(id)arg1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end