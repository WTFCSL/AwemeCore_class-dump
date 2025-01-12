//
//     Generated by private class-dump
//

@class NSString, AWEBDUploadClientService, AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel;

@interface AWEPublishScanOriginPhotoStage : AWEPublishBaseStage <BDImageUploadClientDelegate> {
    BOOL _hasError;
    AWEVideoPublishViewModel *_model;
    AWEResourceUploadParametersResponseModel *_uploadParams;
    AWEBDUploadClientService *_BDUploadService;
    NSString *_uploadedImageId;
    NSString *_filePath;
    unsigned long long _begainaddPictureInterval;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *model;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (retain, nonatomic) AWEBDUploadClientService *BDUploadService;
@property (nonatomic) BOOL hasError;
@property (copy, nonatomic) NSString *uploadedImageId;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long begainaddPictureInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageUploadDidFinish:(id)arg0;
- (void)imageUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)imageUpload:(id)arg0 onLogInfo:(id)arg1;
- (void)imageUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (long long)imageUploadGetNetState:(id)arg0;
- (id)uploadParams;
- (void)setUploadParams:(id)arg0;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)updateUploadParams:(id)arg0;
- (void)setBegainaddPictureInterval:(unsigned long long)arg0;
- (void)p_configAndStartBDUploadClient:(id)arg0;
- (id)BDUploadService;
- (void)setBDUploadService:(id)arg0;
- (void)setUploadedImageId:(id)arg0;
- (unsigned long long)begainaddPictureInterval;
- (id)materialIdFromUploadedImageIds;
- (id)uploadedImageId;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)run;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (id)model;
- (void)setHasError:(BOOL)arg0;
- (BOOL)hasError;

@end
