//
//     Generated by private class-dump
//

@interface BDPClientAIDetectionUtils : NSObject

+ (BOOL)containSceneWithStrategy:(id)arg0 scene:(id)arg1;
+ (void)getPageViewTextWithUniqueID:(id)arg0 pageID:(long long)arg1 needDetectEmbedH5:(BOOL)arg2 completion:(id /* block */)arg3;
+ (void)uploadSnapshotImage:(id)arg0 appID:(id)arg1 completion:(id /* block */)arg2;
+ (void)screenShotWithUniqueID:(id)arg0 pageURL:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)decodeAES128WithEncryptData:(id)arg0 decryptKey:(id)arg1;
+ (id)getCommonTrackerContextWithDetectionModel:(id)arg0 uniqueID:(id)arg1 detectionConfig:(id)arg2;
+ (id)getContainPhoneFromText:(id)arg0;
+ (BOOL)checkContainPhoneWithOriginalText:(id)arg0 transparentTextArray:(id)arg1 dialogText:(id)arg2 possiblePhoneArr:(id)arg3;
+ (void)caculateViewHashWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2 needCache:(BOOL)arg3 completion:(id /* block */)arg4;
+ (id)createDetectionModelWithCommonInfo:(id)arg0 pageURL:(id)arg1 deviceInfoJsonString:(id)arg2 uniqueID:(id)arg3 detectionConfig:(id)arg4;
+ (id)webViewForAppPage:(id)arg0;
+ (id)getLocalNewestSensitiveWordFileInfo;
+ (id)getLocalNewestSecurityStrategyVersion;
+ (void)screenShotWithWebView:(id)arg0 uniqueID:(id)arg1 pathKey:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)getPageViewTextWithUniqueID:(id)arg0 pageID:(long long)arg1 needDetectEmbedH5:(BOOL)arg2 needCache:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)caculateViewHashWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2 needCache:(BOOL)arg3 completionWithContent:(id /* block */)arg4;
+ (id)createHashWithWebviewContent:(id)arg0;
+ (void)getPageViewContentWithUniqueID:(id)arg0 pageID:(long long)arg1 jsCode:(id)arg2 needCache:(BOOL)arg3 completion:(id /* block */)arg4;
+ (id)webViewForWebVC:(id)arg0;
+ (BOOL)checkHasCacheObjectWithPath:(id)arg0 detectionType:(long long)arg1;
+ (id)getHyperLinkFromText:(id)arg0;

@end