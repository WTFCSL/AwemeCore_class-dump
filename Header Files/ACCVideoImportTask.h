//
//     Generated by private class-dump
//

@class ACCVideoImportOutputInfo, NSString, ACCVideoImportConfig, AVAsset, AVAssetExportSession, ACCEditCompileSession, AWEAssetModel;

@interface ACCVideoImportTask : ACCImportBaseTask {
    BOOL _isCoverImageNecessary;
    int _requestID;
    int _imageCoverRequestID;
    ACCVideoImportConfig *_inputConfig;
    AVAsset *_resultAsset;
    id /* block */ _completionHandler;
    NSString *_coverImageFilePath;
    NSString *_taskID;
    AWEAssetModel *_assetModel;
    AVAssetExportSession *_exportSession;
    ACCEditCompileSession *_compileSession;
}

@property (retain, nonatomic) ACCVideoImportConfig *inputConfig;
@property (nonatomic) BOOL isCoverImageNecessary;
@property (retain, nonatomic) NSString *coverImageFilePath;
@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) int requestID;
@property (nonatomic) int imageCoverRequestID;
@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (retain, nonatomic) AVAsset *resultAsset;
@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (retain, nonatomic) ACCEditCompileSession *compileSession;
@property (readonly, nonatomic) ACCVideoImportOutputInfo *outputInfo;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (void)updateAssetOriginalResolutionWithAssetModel:(id)arg0;
+ (int)requestCoverImageWithAsset:(id)arg0 completion:(id /* block */)arg1;
+ (id)optimizedAsset:(id)arg0;
+ (id)outputURLForAVAsset:(id)arg0 taskID:(id)arg1;
+ (BOOL)optimzeAsset:(id)arg0 error:(id *)arg1;

- (void)setCompileSession:(id)arg0;
- (id)compileSession;
- (id)assetModel;
- (void)setAssetModel:(id)arg0;
- (id)inputConfig;
- (struct CGSize { double x0; double x1; })targetSizeForAVAsset:(id)arg0;
- (struct CGSize { double x0; double x1; })suggestedSizeWithVEError:(id)arg0;
- (struct CGSize { double x0; double x1; })targetSizeForAVAsset:(id)arg0 suggestedSize:(struct CGSize { double x0; double x1; })arg1;
- (long long)audioRateWithVEError:(id)arg0;
- (struct CGSize { double x0; double x1; })validTargetSize:(struct CGSize { double x0; double x1; })arg0 suggestedSize:(struct CGSize { double x0; double x1; })arg1;
- (struct CGSize { double x0; double x1; })videoSizeForAVAsset:(id)arg0;
- (struct CGSize { double x0; double x1; })validTargetSize:(struct CGSize { double x0; double x1; })arg0;
- (id)outputInfo;
- (id)coverImageFilePath;
- (void)convertAssetModelsToValidAssetModel:(id)arg0 taskID:(id)arg1 completion:(id /* block */)arg2;
- (void)requestCoverImageWithCompletion:(id /* block */)arg0;
- (id)initWithTaskID:(id)arg0 assetModel:(id)arg1;
- (BOOL)enableCallbackResultImmediately;
- (id)resultAsset;
- (long long)debugIndex;
- (id)debugFormat;
- (void)setInputConfig:(id)arg0;
- (void)setCoverImageFilePath:(id)arg0;
- (id)p_resultInfo;
- (void)localResourceMain;
- (void)albumResourceMain;
- (void)setResultAsset:(id)arg0;
- (void)requestAVAssetWithCompletion:(id /* block */)arg0;
- (BOOL)isCoverImageNecessary;
- (void)asynFetchCoverImageIfNeedWithCompletion:(id /* block */)arg0;
- (void)convertAssetModelsToValidAssetModelsByVe:(id)arg0 taskID:(id)arg1 suggestedSize:(struct CGSize { double x0; double x1; })arg2 suggestedAudioRate:(long long)arg3 completion:(id /* block */)arg4;
- (void)convertAssetModelToValidAssetModel:(id)arg0 taskID:(id)arg1 suggestedSize:(struct CGSize { double x0; double x1; })arg2 suggestedAudioRate:(long long)arg3 completion:(id /* block */)arg4;
- (id)exportSessionWithAVAsset:(id)arg0 suggestedSize:(struct CGSize { double x0; double x1; })arg1;
- (id)makeCompileSessionWithAsset:(id)arg0 toAddTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 suggestedSize:(struct CGSize { double x0; double x1; })arg2 suggestedAudioRate:(long long)arg3;
- (void)setImageCoverRequestID:(int)arg0;
- (int)imageCoverRequestID;
- (id)exportVECompileSessionWithAVAsset:(id)arg0 suggestedSize:(struct CGSize { double x0; double x1; })arg1 suggestedAudioRate:(long long)arg2 completion:(id /* block */)arg3;
- (void)setIsCoverImageNecessary:(BOOL)arg0;
- (void)setRequestID:(int)arg0;
- (int)requestID;
- (void)main;
- (void).cxx_destruct;
- (void)finish;
- (void)setCompletionHandler:(id /* block */)arg0;
- (void)callback;
- (id)initWithConfig:(id)arg0;
- (id)taskID;
- (void)setTaskID:(id)arg0;
- (id /* block */)completionHandler;
- (void)cancelTask;
- (id)exportSession;
- (void)setExportSession:(id)arg0;

@end
