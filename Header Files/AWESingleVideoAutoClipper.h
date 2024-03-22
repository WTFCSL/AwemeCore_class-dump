//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel, NSString, NSNumber, AVAssetExportSession, AWEAVMutableCompositionBuilder, AWEAssetModel;
@protocol AWEStudioMusicModelProtocol;

@interface AWESingleVideoAutoClipper : NSObject {
    AWEAssetModel *_assetModel;
    id<AWEStudioMusicModelProtocol> _music;
    AWEAVMutableCompositionBuilder *_compositionBuilder;
    AVAssetExportSession *_exportSession;
    NSString *_tmpVideoPath;
    AWEVideoPublishViewModel *_publishModel;
    NSNumber *_customerClipDuration;
    id /* block */ _clipCompletion;
}

@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> music;
@property (retain, nonatomic) AWEAVMutableCompositionBuilder *compositionBuilder;
@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (retain, nonatomic) NSString *tmpVideoPath;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSNumber *customerClipDuration;
@property (copy, nonatomic) id /* block */ clipCompletion;

+ (double)videoMinSeconds;
+ (double)videoMaxSeconds;
+ (id)clip:(id)arg0 isStoryMode:(BOOL)arg1;
+ (void)getMusicFromOriginAsset:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)optimizeSingleVideoImportForAsset:(id)arg0 error:(id *)arg1;
+ (BOOL)canClipWithoutTrimingScreenWithAssetModel:(id)arg0 storyMode:(BOOL)arg1;
+ (id)generatePublishModel;
+ (BOOL)shouldShowTipsForAutoClip;
+ (double)autoClipSeconds;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)assetModel;
- (void)setAssetModel:(id)arg0;
- (void)exportOnCompletion:(id /* block */)arg0;
- (id)compositionBuilder;
- (void)setCompositionBuilder:(id)arg0;
- (void)setTmpVideoPath:(id)arg0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotateTransform:(float *)arg0;
- (id)p_outputURLWithFileRemove;
- (void)setupExportSessionWithPassthrough:(BOOL)arg0;
- (void)AIRecommendMusicAppendFramesWithClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void)releaseExportSession;
- (void)ttmonitorClipTimeTooShort:(long long)arg0 clipTime:(double)arg1 videoTime:(double)arg2;
- (id)tmpVideoPath;
- (void)setupExportSessionRemoveTotalSpeedForHighFrameRate;
- (void)trackClipSuccessRate;
- (void)p_exportWithSuccess:(id /* block */)arg0 failure:(id /* block */)arg1 successOrFailure:(id /* block */)arg2;
- (void)setupExportSession;
- (id)initWithAssetModel:(id)arg0 customerClipDuration:(id)arg1;
- (void)setClipCompletion:(id /* block */)arg0;
- (void)setupVideoSavePath;
- (void)handleExport;
- (void)_handleExport;
- (BOOL)_handleFastImportIfAvaiable;
- (void)handleHighFrameRate;
- (void)normalExport;
- (void)trackSingleFastImport:(BOOL)arg0;
- (id /* block */)clipCompletion;
- (void)AIRecommendMusicAppendFramesWithSuccess:(BOOL)arg0;
- (id)coverImageWithAsset:(id)arg0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 radians:(double)arg2;
- (void)handleCompletionWithAsset:(id)arg0 importTransform:(id)arg1 coverImage:(id)arg2;
- (BOOL)isCustomerClipMode;
- (void)handleCompletion:(id)arg0 importTransform:(id)arg1 coverImage:(id)arg2;
- (void)handleExportErrorWithLoadingView:(id)arg0;
- (void)checkVideoWithURL:(id)arg0 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 loadingView:(id)arg2;
- (double)getRealMaxClipSeconds;
- (void)ttmonitorPerformance:(id)arg0;
- (id)coverImageWithAsset:(id)arg0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)reExportWithURL:(id)arg0 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 loadingView:(id)arg2;
- (id)customerClipDuration;
- (void)setCustomerClipDuration:(id)arg0;
- (id)music;
- (void).cxx_destruct;
- (void)setMusic:(id)arg0;
- (void)dealloc;
- (id)exportSession;
- (void)setExportSession:(id)arg0;

@end