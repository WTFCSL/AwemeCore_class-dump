//
//     Generated by private class-dump
//

@protocol BDImageUploadClientDelegate <NSObject>

- (void)imageUploadDidFinish:(id)arg0;
- (void)imageUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)imageUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (long long)imageUploadGetNetState:(id)arg0;

@optional

- (void)imageUpload:(id)arg0 onLogInfo:(id)arg1;
- (void)imageUpload:(id)arg0 updateStage:(long long)arg1 timestamp:(double)arg2;
- (void)imageUpoadDidFinishTos:(id)arg0;
- (id)imageUploadGetMediaDataString:(id)arg0;

@end
