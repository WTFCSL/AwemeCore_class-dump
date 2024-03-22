//
//     Generated by private class-dump
//

@class ACCImageAlbumExportFramesResult, NSArray, AWEUploadCoverResourceModel, ACCThreadSafeMutableDictionary, AWEResourceUploadParametersResponseModel, NSString, AWECreateAwemeResponse;

@interface AWEPublishFlowRepoTaskModel : MTLModel <MTLJSONSerializing> {
    ACCThreadSafeMutableDictionary *_videoMergeResultDict;
    ACCThreadSafeMutableDictionary *_imageMergeResultDict;
    ACCThreadSafeMutableDictionary *_videoUploadResultDict;
    ACCThreadSafeMutableDictionary *_imageUploadResultDict;
    ACCThreadSafeMutableDictionary *_waterMarkUrlDict;
    AWEResourceUploadParametersResponseModel *_uploadParameters;
    AWEUploadCoverResourceModel *_resourceModel;
    AWECreateAwemeResponse *_createAwemeResponse;
    ACCImageAlbumExportFramesResult *_exportFramesResult;
    NSArray *_uploadImageFrames;
}

@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *videoMergeResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *imageMergeResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *videoUploadResultDict;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *imageUploadResultDict;
@property (retain, nonatomic) AWEUploadCoverResourceModel *resourceModel;
@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse;
@property (readonly, nonatomic) ACCThreadSafeMutableDictionary *waterMarkUrlDict;
@property (retain, nonatomic) ACCImageAlbumExportFramesResult *exportFramesResult;
@property (retain, nonatomic) NSArray *uploadImageFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAwemeResponse;
- (void)setResourceModel:(id)arg0;
- (id)resourceModel;
- (id)videoMergeResultDict;
- (id)imageMergeResultDict;
- (void)setUploadParameters:(id)arg0;
- (id)uploadParameters;
- (void)setCreateAwemeResponse:(id)arg0;
- (id)uploadImageFrames;
- (id)exportFramesResult;
- (void)setExportFramesResult:(id)arg0;
- (id)imageUploadResultDict;
- (void)setUploadImageFrames:(id)arg0;
- (id)imageUploadResultArray;
- (id)videoUploadResultDict;
- (id)waterMarkUrlDict;
- (id)init;
- (void).cxx_destruct;

@end
