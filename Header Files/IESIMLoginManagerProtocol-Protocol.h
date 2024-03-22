//
//     Generated by private class-dump
//

@class IESIMSetupOptions;
@protocol IESIMLoginManagerDelegate;

@protocol IESIMLoginManagerProtocol <NSObject>

@property (weak, nonatomic) id<IESIMLoginManagerDelegate> delegate;
@property (retain, nonatomic) IESIMSetupOptions *setupOptions;

- (BOOL)hasLogin;
- (void)continueFetchPullWithCompletion:(id /* block */)arg0;
- (void)manuallyKickOffPuller;
- (void)closeDatabaseForCurrentUserWithCompletion:(id /* block */)arg0;
- (void)truncateDatabaseWalWithCompletion:(id /* block */)arg0;
- (void)loginWithContext:(id)arg0;
- (void)configAndInitSDKWithSetupOptions:(id)arg0;
- (long long)currentSDKUid;
- (void)rebuildMessageDB;
- (void)recoverMessageDBWithBlock:(id /* block */)arg0;
- (void)logout;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)setupOptions;
- (void)setSetupOptions:(id)arg0;

@end
