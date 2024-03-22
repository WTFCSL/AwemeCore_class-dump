//
//     Generated by private class-dump
//

@class XiGuaOpenSDKNavigationController, NSMutableDictionary, NSString, XiGuaOpenSDKWebAuthViewController;
@protocol XiGuaOpenSDKLogDelegate;

@interface XiGuaOpenSDKApplicationDelegate : NSObject <XiGuaOpenSDKWebAuthViewDelegate> {
    BOOL _needPreload;
    NSMutableDictionary *_req2servicesMapper;
    NSMutableDictionary *_name2servicesMapper;
    XiGuaOpenSDKWebAuthViewController *_webVC;
    XiGuaOpenSDKNavigationController *_navVC;
    id<XiGuaOpenSDKLogDelegate> _logDelegate;
}

@property (retain, nonatomic) NSMutableDictionary *req2servicesMapper;
@property (retain, nonatomic) NSMutableDictionary *name2servicesMapper;
@property (retain, nonatomic) XiGuaOpenSDKWebAuthViewController *webVC;
@property (retain, nonatomic) XiGuaOpenSDKNavigationController *navVC;
@property (nonatomic) BOOL needPreload;
@property (weak, nonatomic) id<XiGuaOpenSDKLogDelegate> logDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLServicerForServiceName:(id)arg0;
+ (id)URLServicerForReq:(id)arg0;
+ (void)doLog:(id)arg0;
+ (BOOL)sendAuthToBytedanceAPPsWithReq:(id)arg0 viewController:(id)arg1 delegate:(id)arg2 webFirst:(BOOL)arg3;
+ (BOOL)webAuthSupported;
+ (void)webAuthToBytedanceAPPsWithReq:(id)arg0 viewController:(id)arg1 delegate:(id)arg2;
+ (void)preloadWebAuthUIWithReq:(id)arg0;
+ (void)registerLogDelegate:(id)arg0;
+ (void)unregisterLogDelegate;
+ (BOOL)handleOpenURL:(id)arg0 delegate:(id)arg1;
+ (BOOL)sendMsgToBytedanceAPPsWithReq:(id)arg0;
+ (BOOL)sendAuthToBytedanceAPPsWithReq:(id)arg0 viewController:(id)arg1 delegate:(id)arg2;
+ (BOOL)sendMsgToBytedanceAPPsWithResp:(id)arg0;
+ (void)preloadWebAuthWithReq:(id)arg0;
+ (void)clearPreloadWebAuthCache;
+ (id)sharedDelegate;
+ (void)registerServiceClass:(Class)arg0;

- (id)URLServicerForServiceName:(id)arg0;
- (void)setReq2servicesMapper:(id)arg0;
- (void)setName2servicesMapper:(id)arg0;
- (void)setLogDelegate:(id)arg0;
- (id)logDelegate;
- (id)req2servicesMapper;
- (id)name2servicesMapper;
- (id)URLServicerForReq:(id)arg0;
- (id)navVC;
- (void)setNavVC:(id)arg0;
- (BOOL)needPreload;
- (void)setNeedPreload:(BOOL)arg0;
- (void)finishWithResp:(id)arg0 sdkDelegate:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)webVC;
- (void)setWebVC:(id)arg0;
- (void)registerServiceClass:(Class)arg0;

@end