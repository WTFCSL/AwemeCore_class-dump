//
//     Generated by private class-dump
//

@protocol NLEResourceDownloader <NSObject>

- (id)fetchResource:(id)arg0 onProgress:(id /* block */)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)pauseTask:(id)arg0;
- (void)resumeTask:(id)arg0 onProgress:(id /* block */)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)cancelTask:(id)arg0;

@end
