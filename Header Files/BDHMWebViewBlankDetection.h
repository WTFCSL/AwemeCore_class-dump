//
//     Generated by private class-dump
//

@interface BDHMWebViewBlankDetection : NSObject

+ (void)_preActionOfBlankDetectionImage:(id)arg0 detectionModel:(id)arg1 resultModel:(id)arg2 group:(id)arg3;
+ (void)_blankEventWithPerfDic:(id)arg0 detectionModel:(id)arg1 detecionResultModel:(id)arg2;
+ (void)snapshotWithWebView:(id)arg0 detectionModel:(id)arg1 completion:(id /* block */)arg2;
+ (void)_fetchBlankDetectionResultWithImage:(id)arg0 completionBlock:(id /* block */)arg1;
+ (void)blankDetectionWithWebView:(id)arg0 detectionModel:(id)arg1;

@end
