//
//     Generated by private class-dump
//

@class NSString, NSHashTable;
@protocol IESLiveSubscription, IESLivePaidSecurityDelegate;

@interface IESLivePaidStreamSecurity : NSObject <IESLivePaidSecurity> {
    id<IESLivePaidSecurityDelegate> _delegate;
    NSHashTable *_securityEventHandlers;
    id<IESLiveSubscription> _screenCaptureSubscription;
    id _banScreenCaptureAlert;
}

@property (retain, nonatomic) NSHashTable *securityEventHandlers;
@property (retain, nonatomic) id<IESLiveSubscription> screenCaptureSubscription;
@property (weak, nonatomic) id banScreenCaptureAlert;
@property (weak, nonatomic) id<IESLivePaidSecurityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inScreenCaptured;
- (BOOL)isScreenCaptured;
- (void)sendEventWillInstallSecurityType:(unsigned long long)arg0;
- (void)sendEventWillStartScreenCaptured;
- (void)sendEventScreenCapturedDidChange:(BOOL)arg0;
- (void)sendEventWillDisplayScreenCapturedAlert;
- (void)sendEventDidEndDisplayScreenCapturedAlert;
- (void)registerSecurityEventHandler:(id)arg0;
- (void)uninstallSecurity:(unsigned long long)arg0;
- (void)unregisterSecurityEventHandler:(id)arg0;
- (void)installSecurity:(unsigned long long)arg0;
- (void)sendEventToHandlers:(SEL)arg0 event:(id /* block */)arg1;
- (id)registeredSecurityEventHandlers;
- (void)sendEventDidTakeScreenshot;
- (id)securityEventHandlers;
- (void)installSecurityScreenCapture;
- (void)installSecurityTakeScreenshot;
- (id)screenCaptureSubscription;
- (BOOL)enableAddObserverForScreenCapture;
- (void)setScreenCaptureSubscription:(id)arg0;
- (BOOL)verifyScreenCaptured;
- (void)takeScreenshotNotification:(id)arg0;
- (void)setSecurityEventHandlers:(id)arg0;
- (id)banScreenCaptureAlert;
- (void)setBanScreenCaptureAlert:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
