//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;

@interface TIMXOStartUpObserver : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    int _inbox;
    TIMXSDKInstance *_r;
    TIMXMulticastDelegate *_multicastDelegate;
}

@property (nonatomic) int inbox;
@property (retain, nonatomic) TIMXMulticastDelegate *multicastDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (void)removeObserverWithIdentifier:(id)arg0;
- (id)addWeakObserver:(id)arg0;
- (void)setMulticastDelegate:(id)arg0;
- (id)multicastDelegate;
- (void).cxx_destruct;
- (int)inbox;
- (id)initWithRootObject:(id)arg0;
- (void)setInbox:(int)arg0;

@end