//
//     Generated by private class-dump
//

@class NSString, UIWindow, AWEVCDImportFansViewController;

@interface AWEContentSyncManager : NSObject <IESSDKApiDelegate, IESPlatformSDKApiDelegate, AWEContentSyncManagerProtocol> {
    id /* block */ _completionBlock;
    UIWindow *_contentSyncAuthWindow;
    UIWindow *_keyWindow;
    AWEVCDImportFansViewController *_authViewController;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIWindow *contentSyncAuthWindow;
@property (retain, nonatomic) UIWindow *keyWindow;
@property (retain, nonatomic) AWEVCDImportFansViewController *authViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationDidEnterBackgroundInOAuthMgr:(id)arg0;
- (void)doHideOAuthViewController;
- (void)endObservationDidAppEnterBackground;
- (id)authViewController;
- (void)startObservationDidAppEnterBackground;
- (void)setAuthViewController:(id)arg0;
- (BOOL)application:(id)arg0 openURL:(id)arg1;
- (BOOL)isAppSupported;
- (void)syncContent:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)registerProduct;
- (void)bindConfigutation;
- (void)showTeenAlert:(id /* block */)arg0;
- (id)contentSyncAuthWindow;
- (BOOL)askForContentSyncDidReceiveReq:(id)arg0 completion:(id /* block */)arg1;
- (void)setContentSyncAuthWindow:(id)arg0;
- (void)didReceiveResponse:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAppInstalled;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setup;
- (void)dealloc;
- (id)keyWindow;
- (void)setKeyWindow:(id)arg0;

@end
