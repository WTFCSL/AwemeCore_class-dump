//
//     Generated by private class-dump
//

@protocol BDASDKProtocol <NSObject>

- (void)eventV3:(id)arg0 params:(id)arg1 isDoubleSending:(BOOL)arg2;
- (void)eventData:(id)arg0;

@optional

- (void)trackAdEvent:(id)arg0 tag:(id)arg1 extra:(id)arg2 adExtra:(id)arg3;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 priority:(long long)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 callback:(id /* block */)arg8;
- (id)requestForBinaryWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 priority:(long long)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 callback:(id /* block */)arg8;
- (id)requestForJSONWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 priority:(long long)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 callback:(id /* block */)arg8;
- (id)requestForJSONWithResponse:(id)arg0 params:(id)arg1 method:(id)arg2 needCommonParams:(BOOL)arg3 headerField:(id)arg4 priority:(long long)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 callback:(id /* block */)arg8;
- (void)performanceEventV3:(id)arg0 params:(id)arg1;
- (void)trackURLs:(id)arg0 eventV3:(id)arg1;
- (void)trackALog:(id)arg0 tag:(id)arg1 level:(long long)arg2;
- (void)monitorService:(id)arg0 value:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)monitorService:(id)arg0 value:(id)arg1 extra:(id)arg2;
- (void)trackURLs:(id)arg0 event:(id)arg1;
- (id)darkModeColorWithOriginalColor:(id)arg0 alpha:(double)arg1;
- (id)darkModeColorWithOriginalColor:(id)arg0 alpha:(double)arg1;
- (void)renderTintColorWithTargetView:(id)arg0 targetColor:(id)arg1;
- (void)renderTintColorWithTargetView:(id)arg0 targetColor:(id)arg1;
- (void)openURL:(id)arg0 options:(id)arg1 completionHandler:(id /* block */)arg2 customScene:(id)arg3;
- (void)openURL:(id)arg0 options:(id)arg1 completionHandler:(id /* block */)arg2 customScene:(id)arg3;
- (BOOL)openURL:(id)arg0 customScene:(id)arg1;
- (BOOL)openURL:(id)arg0 customScene:(id)arg1;
- (void)tryMakeSmartPhoneCallWithParams:(id)arg0 completionHandler:(id)arg1;
- (void)tryMakeSmartPhoneCallWithParams:(id)arg0 completionHandler:(id)arg1;
- (void)bdxPublishEventWithEventName:(id)arg0 params:(id)arg1;
- (void)bdxPublishEventWithEventName:(id)arg0 params:(id)arg1;
- (long long)connectionType;
- (id)fontSize;
- (id)createLandingPageConversionCardLynxViewWithParame:(id)arg0;
- (id)createLandingPageConversionCardLynxViewWithParame:(id)arg0;
- (id)createBDAProxyWebViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 parameters:(id)arg1 parentVC:(id)arg2 routeVC:(id)arg3 delegate:(id)arg4;
- (id)createBDAProxyWebViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 parameters:(id)arg1 parentVC:(id)arg2 routeVC:(id)arg3 delegate:(id)arg4;
- (id)createAdInteractionBarWithCommentView:(id)arg0 delegate:(id)arg1;
- (id)createAdInteractionBarWithCommentView:(id)arg0 delegate:(id)arg1;
- (id)createAdCommentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 cid:(id)arg1 logExtra:(id)arg2;
- (id)createAdCommentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 cid:(id)arg1 logExtra:(id)arg2;
- (id)createBDALynxView:(id /* block */)arg0 delegate:(id)arg1 completeBlock:(id /* block */)arg2;
- (id)createBDALynxView:(id /* block */)arg0 delegate:(id)arg1 completeBlock:(id /* block */)arg2;
- (id)getHostUserAgent;
- (id)filterSensitiveWithParams:(id)arg0;
- (id)filterSensitiveWithParams:(id)arg0;
- (id)videoDetailSDKSettings;
- (void)openWebURLWithUrlString:(id)arg0 extra:(id)arg1;
- (void)openWebURLWithUrlString:(id)arg0 extra:(id)arg1;
- (void)trackURLs:(id)arg0 adId:(id)arg1 logextra:(id)arg2;

@end
