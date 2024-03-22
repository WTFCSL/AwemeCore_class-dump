//
//     Generated by private class-dump
//

@class BDImageUploaderClient, NSMutableDictionary, NSString;
@protocol ACCVideoConfigProtocol, BDImageUploadClientDelegate;

@interface ACCBDImageUploadService : ACCBDFileUploadService <BDImageUploadClientDelegate> {
    id<ACCVideoConfigProtocol> _videoConfig;
    BDImageUploaderClient *_imageUploadClient;
    id<BDImageUploadClientDelegate> _imageUploadDelegate;
    NSMutableDictionary *_materialIDMap;
}

@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) BDImageUploaderClient *imageUploadClient;
@property (retain, nonatomic) id<BDImageUploadClientDelegate> imageUploadDelegate;
@property (retain, nonatomic) NSMutableDictionary *materialIDMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoConfig;
- (void)setVideoConfig:(id)arg0;
- (void)imageUploadDidFinish:(id)arg0;
- (void)imageUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)imageUpload:(id)arg0 onLogInfo:(id)arg1;
- (void)imageUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (long long)imageUploadGetNetState:(id)arg0;
- (void)setImageUploadClient:(id)arg0;
- (id)imageUploadClient;
- (void)stopUploading;
- (id)p_imageUploadConfigParams;
- (id)p_imageUploadAuthParams;
- (id)materialIDMap;
- (id)frameUploadParameters;
- (void)startUploading;
- (id)imageUploadDelegate;
- (id)p_activityUploadAuthParams;
- (void)setImageUploadDelegate:(id)arg0;
- (void)setMaterialIDMap:(id)arg0;
- (void)configImageUploadDelegateWithDelegate:(id)arg0;
- (void).cxx_destruct;

@end
