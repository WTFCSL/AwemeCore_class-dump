//
//     Generated by private class-dump
//

@protocol BDVideoUploadClientDelegate <NSObject>

- (void)videoUpload:(id)arg0 didFinish:(id)arg1 error:(id)arg2;
- (void)videoUpload:(id)arg0 progressDidUpdate:(long long)arg1;

@optional

- (void)videoUploadDiskResumeFailed:(id)arg0;
- (long long)videoUploadGetNetState:(id)arg0;
- (id)videoUploadGetMetaString:(id)arg0;
- (void)videoUpload:(id)arg0 onLogInfo:(id)arg1;
- (void)videoUpload:(id)arg0 updateVideoStage:(long long)arg1 timestamp:(double)arg2;
- (void)videoUpload:(id)arg0 didFinish:(id)arg1 failNum:(long long)arg2;
- (void)videoUpload:(id)arg0 progressDidUpdate:(long long)arg1 identifier:(id)arg2;
- (void)videoUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2 identifier:(id)arg3;
- (void)videoUpload:(id)arg0 fileIndex:(long long)arg1 videoInfo:(id)arg2 error:(id)arg3 log:(id)arg4;

@end
