//
//     Generated by private class-dump
//

@interface CSJAdActionManager : NSObject

+ (void)gotoDetailPage:(id)arg0 context:(id)arg1 isSplash:(BOOL)arg2;
+ (void)gotoSplashDetailPage:(id)arg0 context:(id)arg1;
+ (void)gotoDetailPage:(id)arg0 context:(id)arg1;
+ (id)sharedManager;

- (void)_trackLiveAdCustomActionResult:(id)arg0 meta:(id)arg1 context:(id)arg2;
- (id)_genLiveAdCustomActionModelWithMeta:(id)arg0 context:(id)arg1;
- (id)_urlStringFromParameters:(id)arg0;
- (void)pbu_reportClickUrlWithData:(id)arg0;
- (void)pbu_preProccessWithModel:(id)arg0 context:(id)arg1 completion:(id /* block */)arg2;
- (void)bu_splashHandleWebPageActionWithModel:(id)arg0 context:(id)arg1;
- (BOOL)tryLiveAdCustomActionWithModel:(id)arg0 context:(id)arg1;
- (void)bu_handelCallActionWithModel:(id)arg0 withIsWebPage:(BOOL)arg1 context:(id)arg2;
- (void)bu_openUrlString:(id)arg0 context:(id)arg1;
- (void)bu_handelCallActionWithModel:(id)arg0 context:(id)arg1;
- (void)bu_handleVideoAdActionWithModel:(id)arg0 context:(id)arg1;
- (void)bu_handleAppActionWithModel:(id)arg0 context:(id)arg1 withDownloadActionType:(id /* block */)arg2 withSucessCallBack:(id /* block */)arg3 withFailedCallback:(id /* block */)arg4;
- (void)bu_handleWebPageActionWithModel:(id)arg0 context:(id)arg1;
- (void)bu_handleSafariActionWithModel:(id)arg0 context:(id)arg1;
- (void)bu_openPolicy:(id)arg0 context:(id)arg1;

@end
