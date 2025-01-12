//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEVideoPublishViewModel, NSMutableArray, AWEResourceUploadParametersResponseModel;
@protocol ACCFileUploadServiceProtocol;

@interface AWEFramesUploader : NSObject {
    BOOL _isZiping;
    NSString *_awemeId;
    NSArray *_videoIds;
    NSString *_taskId;
    NSString *_videoId;
    NSString *_draftFolder;
    AWEVideoPublishViewModel *_publishModel;
    NSArray *_publishModels;
    NSMutableArray *_materialIdArr;
    NSArray *_bgStickerVideoAssests;
    NSMutableArray *_bgStickerVideoAssetsClipDuration;
    AWEResourceUploadParametersResponseModel *_uploadParameters;
    id<ACCFileUploadServiceProtocol> _uploadService;
    NSMutableArray *_imagePathArray;
    id /* block */ _completion;
    unsigned long long _stage;
}

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSArray *videoIds;
@property (retain, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSArray *publishModels;
@property (retain, nonatomic) NSMutableArray *materialIdArr;
@property (retain, nonatomic) NSArray *bgStickerVideoAssests;
@property (retain, nonatomic) NSMutableArray *bgStickerVideoAssetsClipDuration;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (retain, nonatomic) NSMutableArray *imagePathArray;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isZiping;
@property (nonatomic) unsigned long long stage;
@property (readonly, nonatomic) NSArray *materialIds;

- (void)setAwemeId:(id)arg0;
- (id)awemeId;
- (id)imagePathArray;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)draftFolder;
- (void)setDraftFolder:(id)arg0;
- (id)materialIds;
- (void)setImagePathArray:(id)arg0;
- (id)initVideoIds:(id)arg0 awemeId:(id)arg1 publishModels:(id)arg2 uploadParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)setPublishModels:(id)arg0;
- (void)setVideoIds:(id)arg0;
- (void)setUploadParameters:(id)arg0;
- (void)setIsZiping:(BOOL)arg0;
- (void)setMaterialIdArr:(id)arg0;
- (id)commontParams;
- (void)startWithIndex:(long long)arg0;
- (id)videoIds;
- (id)publishModels;
- (id)materialIdArr;
- (void)uploadImageZipWithUrl:(id)arg0 completion:(id /* block */)arg1;
- (void)zipFrames:(id)arg0 completion:(id /* block */)arg1;
- (void)exportFramesForPublishModel:(id)arg0 awemeId:(id)arg1 index:(long long)arg2 completion:(id /* block */)arg3;
- (id)absolutePathsWithFrames:(id)arg0;
- (BOOL)isZiping;
- (id)trackFramePathValid:(id)arg0;
- (void)monitorZipUploadWithSuccess:(BOOL)arg0 error:(id)arg1 extraParams:(id)arg2;
- (void)trackZipUploadWithSuccess:(BOOL)arg0 error:(id)arg1 extraParams:(id)arg2;
- (id)uploadParameters;
- (id)bgStickerVideoAssetsClipDuration;
- (id)initVideoId:(id)arg0 awemeId:(id)arg1 publishModel:(id)arg2 uploadParameters:(id)arg3 completion:(id /* block */)arg4;
- (id)bgStickerVideoAssests;
- (void)setBgStickerVideoAssests:(id)arg0;
- (void)setBgStickerVideoAssetsClipDuration:(id)arg0;
- (void)setVideoId:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (unsigned long long)stage;
- (id)videoId;
- (void)start;
- (void)setStage:(unsigned long long)arg0;
- (id)taskId;
- (void)setTaskId:(id)arg0;
- (id)uploadService;
- (void)setUploadService:(id)arg0;
- (void)uploadFinished;
- (BOOL)shouldStart;

@end
