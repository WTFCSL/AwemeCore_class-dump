//
//     Generated by private class-dump
//

@class NSString, RxMultipleDelegate;
@protocol RTVAccountStateObserver;

@interface RTVAccountService : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, RTVAccountServiceInterface> {
    RxMultipleDelegate<RTVAccountStateObserver> *_observers;
}

@property (retain, nonatomic) RxMultipleDelegate<RTVAccountStateObserver> *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)rxAwakeFromPropertyInjection;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (void)dealloc;
- (void)addStateObserver:(id)arg0;
- (void)removeStateObserver:(id)arg0;

@end
