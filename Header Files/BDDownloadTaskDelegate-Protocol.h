//
//     Generated by private class-dump
//

@protocol BDDownloadTaskDelegate <NSObject>

- (void)downloadTask:(id)arg0 finishedWithData:(id)arg1 savePath:(id)arg2;
- (void)downloadTask:(id)arg0 failedWithError:(id)arg1;
- (void)downloadTaskDidCanceled:(id)arg0;

@optional

- (void)downloadTask:(id)arg0 didReceiveBlurHash:(id)arg1;
- (void)downloadTask:(id)arg0 didReceiveData:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isRepackNeeded:(id)arg0;
- (id)heicRepackData:(id)arg0;
- (void)downloadTask:(id)arg0 receivedSize:(long long)arg1 expectedSize:(long long)arg2;

@end
