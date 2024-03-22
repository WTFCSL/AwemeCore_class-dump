//
//     Generated by private class-dump
//

@interface BDPWebViewBlankDetection : NSObject

+ (void)blankDetectionWithWebView:(id)arg0 detectionModel:(id)arg1;
+ (void)blankDetectionWithView:(id)arg0 detectionModel:(id)arg1;
+ (void)p_preActionOfBlankDetection:(id)arg0 image:(id)arg1 detectionModel:(id)arg2 resultModel:(id)arg3 group:(id)arg4;
+ (void)p_handlePartialBlankDetectionResult:(id)arg0 image:(id)arg1 detectionModel:(id)arg2 resultModel:(id)arg3 group:(id)arg4;
+ (void)p_blankEventWithDetectionModel:(id)arg0 detecionResultModel:(id)arg1;
+ (void)snapshotWithWebView:(id)arg0 webViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 pagePath:(id)arg2 completion:(id /* block */)arg3;
+ (id)p_snapshotForView:(id)arg0;
+ (void)p_uploadBlankImage:(id)arg0 appID:(id)arg1;
+ (void)p_fetchBlankDetectionResultWithImage:(id)arg0 completionBlock:(id /* block */)arg1;
+ (void)p_postActionOfBlankDetection:(id)arg0 image:(id)arg1 detectionModel:(id)arg2 resultModel:(id)arg3 isBlank:(BOOL)arg4;
+ (void)p_fetchPartialBlankDetectionResultWithImage:(id)arg0 complete:(id /* block */)arg1;

@end