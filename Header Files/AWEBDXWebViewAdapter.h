//
//     Generated by private class-dump
//

@interface AWEBDXWebViewAdapter : NSObject

+ (BOOL)falconEnable;
+ (id)generateWebSecureLinkConfig:(id)arg0;
+ (BOOL)falconSchemeHandlerEnable:(id)arg0;
+ (id)pageContext:(id)arg0 queryItems:(id)arg1;
+ (id)bdxUrlAddCommonParams:(id)arg0;
+ (id)getContainerContextWithParams:(id)arg0 url:(id)arg1;
+ (id)bizGlobalPropsWithParams:(id)arg0;
+ (id)findBDXPage:(id)arg0;
+ (void)saveWebImage:(id)arg0 webURL:(id)arg1;
+ (id)generateUA:(id)arg0;
+ (BOOL)p_matchAweFalconList:(id)arg0;
+ (id)createWebViewController:(id)arg0 queryItems:(id)arg1;
+ (id)createEnterpriseWebViewController:(id)arg0 queryItems:(id)arg1;
+ (id)popupBDXWebViewControllerWith:(id)arg0;
+ (id)createLiveWebViewController:(id)arg0 queryItems:(id)arg1;
+ (void)image:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;
+ (long long)getStatusBarStyle:(id)arg0;

@end
