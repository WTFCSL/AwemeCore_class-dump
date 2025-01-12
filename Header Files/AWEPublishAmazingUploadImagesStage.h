//
//     Generated by private class-dump
//

@class NSArray, AWEBDUploadClientService, NSString, AWEResourceUploadParametersResponseModel, NSError, AWEPublishFlowModel;

@interface AWEPublishAmazingUploadImagesStage : AWEPublishBaseStage <BDImageUploadClientDelegate> {
    BOOL _isPreupload;
    AWEPublishFlowModel *_flowModel;
    id /* block */ _preuploadFinishedBlock;
    AWEBDUploadClientService *_uploadService;
    AWEResourceUploadParametersResponseModel *_uploadParams;
    NSArray *_uploadImageModels;
    NSArray *_currentUploadImageModels;
    NSError *_firstError;
    long long _blockIndex;
    long long _didPreuploadCount;
    NSString *_trackInfoJsonString;
}

@property (retain, nonatomic) AWEBDUploadClientService *uploadService;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (copy, nonatomic) NSArray *uploadImageModels;
@property (retain) NSArray *currentUploadImageModels;
@property (retain) NSError *firstError;
@property long long blockIndex;
@property (nonatomic) BOOL isPreupload;
@property (nonatomic) long long didPreuploadCount;
@property (copy, nonatomic) NSString *trackInfoJsonString;
@property (copy, nonatomic) id /* block */ preuploadFinishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)allowMergeUpload;
- (void)imageUploadDidFinish:(id)arg0;
- (void)imageUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)imageUpload:(id)arg0 onLogInfo:(id)arg1;
- (void)imageUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (void)imageUpload:(id)arg0 updateStage:(long long)arg1 timestamp:(double)arg2;
- (long long)imageUploadGetNetState:(id)arg0;
- (id)imageUploadGetMediaDataString:(id)arg0;
- (void)setFlowModel:(id)arg0;
- (id)flowModel;
- (id)uploadParams;
- (void)setUploadParams:(id)arg0;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)initWithModels:(id)arg0 uploadParams:(id)arg1 trackInfoJsonString:(id)arg2 isPreupload:(BOOL)arg3;
- (void)setPreuploadFinishedBlock:(id /* block */)arg0;
- (id)initWithModels:(id)arg0 uploadParams:(id)arg1 isPreupload:(BOOL)arg2;
- (void)p_cancelPreupload:(id)arg0;
- (BOOL)isPreupload;
- (id)uploadImageModels;
- (void)p_continueUpload;
- (void)p_singleImageDidFinishWithFileIndex:(long long)arg0 imageId:(id)arg1 errCode:(long long)arg2 error:(id)arg3;
- (void)p_uploadImageProgressDidUpdate:(long long)arg0 fileIndex:(long long)arg1;
- (void)p_uploadImagesDidFinish;
- (int)p_getUploadImageNetworkState;
- (id /* block */)preuploadFinishedBlock;
- (id)trackInfoJsonString;
- (void)setCurrentUploadImageModels:(id)arg0;
- (id)currentUploadImageModels;
- (void)p_configAndStartBDUploadClientWithFilePaths:(id)arg0;
- (void)bdUploadCancel;
- (void)setUploadImageModels:(id)arg0;
- (void)setIsPreupload:(BOOL)arg0;
- (long long)didPreuploadCount;
- (void)setDidPreuploadCount:(long long)arg0;
- (void)setTrackInfoJsonString:(id)arg0;
- (void)run;
- (id)init;
- (void).cxx_destruct;
- (id)firstError;
- (void)setFirstError:(id)arg0;
- (void)dealloc;
- (id)uploadService;
- (void)setUploadService:(id)arg0;
- (void)setBlockIndex:(long long)arg0;
- (long long)blockIndex;

@end
