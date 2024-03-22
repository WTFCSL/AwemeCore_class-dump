//
//     Generated by private class-dump
//

@class BDVideoUploadInfo, NSString, AWEIMRedPacketUploadConfig, NSError, BDVideoUploaderClient;

@interface AWEIMRedPacketUploadVideoClient : NSObject <BDVideoUploadClientDelegate, AWEIMRedPacketUploadManagerProtocol> {
    AWEIMRedPacketUploadConfig *_config;
    BDVideoUploaderClient *_client;
    BDVideoUploadInfo *_imageInfo;
    NSString *_filePath;
    NSError *_error;
    id /* block */ _completionBlock;
    id /* block */ _progressBlock;
    long long _uploadProgress;
    NSString *_uploadId;
}

@property (retain, nonatomic) AWEIMRedPacketUploadConfig *config;
@property (retain, nonatomic) BDVideoUploaderClient *client;
@property (retain, nonatomic) BDVideoUploadInfo *imageInfo;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) long long uploadProgress;
@property (copy, nonatomic) NSString *uploadId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoUpload:(id)arg0 didFinish:(id)arg1 error:(id)arg2;
- (void)videoUpload:(id)arg0 progressDidUpdate:(long long)arg1;
- (long long)videoUploadGetNetState:(id)arg0;
- (void)videoUpload:(id)arg0 onLogInfo:(id)arg1;
- (id)boeHandledHostName:(id)arg0;
- (id)p_uploadCustomParameterString;
- (void)uploadWithContex:(id)arg0 completion:(id /* block */)arg1;
- (id)createVideoUploadClient;
- (void)setConfig:(id)arg0;
- (id)filePath;
- (void).cxx_destruct;
- (void)setClient:(id)arg0;
- (id /* block */)completionBlock;
- (void)setFilePath:(id)arg0;
- (id)config;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)client;
- (void)setProgressBlock:(id /* block */)arg0;
- (id)initWithConfig:(id)arg0;
- (void)setError:(id)arg0;
- (id /* block */)progressBlock;
- (id)error;
- (id)imageInfo;
- (void)setImageInfo:(id)arg0;
- (long long)uploadProgress;
- (void)setUploadProgress:(long long)arg0;
- (id)uploadId;
- (void)setUploadId:(id)arg0;

@end
