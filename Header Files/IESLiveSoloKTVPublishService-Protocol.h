//
//     Generated by private class-dump
//

@protocol IESLiveSoloKTVPublishService <NSObject>

- (void)silentlyPublishWithFilePath:(id)arg0 publishConfig:(id)arg1 trackExtra:(id)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (BOOL)existPublishingTask;
- (void)cancelCurrentPublishTaskWithCallBack:(id /* block */)arg0;
- (void)saveDraftWithFilePath:(id)arg0 trackExtra:(id)arg1 completion:(id /* block */)arg2;

@end
