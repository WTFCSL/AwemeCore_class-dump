//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;

@interface TIMXLongConnectionChangeObserver : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXMulticastDelegate *_multicastDelegate;
    NSString *_token;
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXMulticastDelegate *multicastDelegate;
@property (retain, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (void)removeObserverWithIdentifier:(id)arg0;
- (id)addWeakObserver:(id)arg0;
- (void)onLongConnectionStateChange:(unsigned long long)arg0;
- (void)setMulticastDelegate:(id)arg0;
- (id)multicastDelegate;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (void)dealloc;
- (void)setUp;
- (id)initWithRootObject:(id)arg0;

@end