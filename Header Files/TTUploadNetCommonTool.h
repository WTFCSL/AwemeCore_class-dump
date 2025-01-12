//
//     Generated by private class-dump
//

@class NetJob;

@interface TTUploadNetCommonTool : NSObject {
    NetJob *_job;
}

@property (retain) NetJob *job;

+ (BOOL)isNetworkUnreachable;
+ (BOOL)isMobileNet;
+ (long long)getCurrentNetType;
+ (id)updateSliceInfo:(id)arg0 sliceInfo:(id)arg1;
+ (void)getUploadInfoFromServer:(id /* block */)arg0 netJob:(id)arg1 param:(id)arg2 sliceInfo:(id)arg3 isCompletedMsg:(BOOL)arg4;
+ (id)getQuerySliceInfo:(id)arg0;
+ (BOOL)updateUserToken:(id)arg0;
+ (void)retryUpload:(id /* block */)arg0 progressBlock:(id /* block */)arg1 queryJob:(id)arg2 realUploadJob:(id)arg3 sliceInfo:(id)arg4;
+ (void)uploadDataWithRetry:(id /* block */)arg0 progressBlock:(id /* block */)arg1 queryJob:(id)arg2 realUploadJob:(id)arg3 sliceInfo:(id)arg4;
+ (BOOL)isWifi;

- (id)job;
- (void).cxx_destruct;
- (void)setJob:(id)arg0;

@end
