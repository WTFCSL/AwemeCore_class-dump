//
//     Generated by private class-dump
//

@class LSIMObserverHash, NSString;

@interface LSUserServiceImpl : NSObject <LSIMFunctionUser, AWEUserMessage> {
    LSIMObserverHash *_observeHash;
}

@property (retain, nonatomic) LSIMObserverHash *observeHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogout;
- (void)requireLogin:(id /* block */)arg0;
- (void)notifyUserLogout;
- (id)observeHash;
- (void)registerUserMessage:(id)arg0;
- (void)deregisterUserMessage:(id)arg0;
- (void)setObserveHash:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)observers;
- (BOOL)isLogin;

@end