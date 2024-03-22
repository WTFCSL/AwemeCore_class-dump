//
//     Generated by private class-dump
//

@protocol IESLiveGameOpenPlatformFoundationAPIServiceInterface <NSObject>

- (void)requestAppStartWithAppId:(id)arg0 source:(long long)arg1 extra:(id)arg2 stampExtra:(id)arg3 cardExtra:(id)arg4 callback:(id /* block */)arg5;
- (void)requestAppStopWithAppId:(id)arg0 startId:(id)arg1 callback:(id /* block */)arg2;
- (void)requestShowAppPanelStatusWithAppId:(id)arg0 roomId:(id)arg1 callback:(id /* block */)arg2;
- (void)requestHideAppPanelStatusWithAppId:(id)arg0 roomId:(id)arg1 callback:(id /* block */)arg2;
- (void)requestAppStartWithAppId:(id)arg0 source:(long long)arg1 extra:(id)arg2 stampExtra:(id)arg3 cardExtra:(id)arg4 openExtra:(id)arg5 callback:(id /* block */)arg6;
- (void)requestAppStopWithAppId:(id)arg0 startId:(id)arg1 extra:(id)arg2 callback:(id /* block */)arg3;
- (void)requestBootConfigWithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestSecretKeyWithAppID:(id)arg0 callback:(id /* block */)arg1;
- (void)requestAppReportReasonListWithScene:(id)arg0 callback:(id /* block */)arg1;
- (void)submitReportBaseInfoWithAppID:(id)arg0 reportReason:(id)arg1 reportDesc:(id)arg2 reportUris:(id)arg3 pagePath:(id)arg4 pageQuery:(id)arg5 noExtraData:(BOOL)arg6 callback:(id /* block */)arg7;

@end