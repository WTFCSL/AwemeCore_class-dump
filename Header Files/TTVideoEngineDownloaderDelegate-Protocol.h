//
//     Generated by private class-dump
//

@protocol TTVideoEngineDownloaderDelegate <NSObject>

- (void)VideoEngineDownloader:(id)arg0 downloadTask:(id)arg1 stateChanged:(long long)arg2;
- (void)VideoEngineDownloader:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)VideoEngineDownloader:(id)arg0 downloadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)VideoEngineDownloader:(id)arg0 downloadTask:(id)arg1 writeData:(long long)arg2 timeInterval:(double)arg3;

@end