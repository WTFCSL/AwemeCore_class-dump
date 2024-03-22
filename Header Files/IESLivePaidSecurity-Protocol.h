//
//     Generated by private class-dump
//

@protocol IESLivePaidSecurityDelegate;

@protocol IESLivePaidSecurity <NSObject>

@property (weak, nonatomic) id<IESLivePaidSecurityDelegate> delegate;

- (BOOL)inScreenCaptured;
- (void)registerSecurityEventHandler:(id)arg0;
- (void)uninstallSecurity:(unsigned long long)arg0;
- (void)unregisterSecurityEventHandler:(id)arg0;
- (void)installSecurity:(unsigned long long)arg0;
- (id)registeredSecurityEventHandlers;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end