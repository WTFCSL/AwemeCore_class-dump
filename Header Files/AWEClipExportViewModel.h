//
//     Generated by private class-dump
//

@class AWEThumbnailCache, AWEClipAIViewModel, AWEVideoSegmentedClipAdapter, AWEAVMixedMutableCompositionBuilder, NSObject, ACCEditCompileSession, AWEStudioClipModel, AWEAIVideoClipManager, AWEClipSliderViewModel, NSString, AWEStudioClipOutputData, AWEClipPlayerViewModel, UIImage;
@protocol ACCEditVideoDataProtocol, AWEStudioVideoMattingProtocol;

@interface AWEClipExportViewModel : NSObject {
    BOOL _exporting;
    BOOL _isMatting;
    NSObject<ACCEditVideoDataProtocol> *_videoData;
    NSString *_draftFolder;
    AWEStudioClipOutputData *_outputData;
    AWEStudioClipModel *_clipModel;
    AWEVideoSegmentedClipAdapter *_clipAdapter;
    AWEClipPlayerViewModel *_playerViewModel;
    AWEClipSliderViewModel *_sliderViewModel;
    AWEAIVideoClipManager *_clipManager;
    AWEAVMixedMutableCompositionBuilder *_compositionBuilder;
    NSString *_tmpVideoPath;
    NSString *_tmpTotalVideoPath;
    AWEThumbnailCache *_thumbnailCache;
    UIImage *_coverImage;
    ACCEditCompileSession *_transcoder;
    AWEClipAIViewModel *_clipAIViewModel;
    id<AWEStudioVideoMattingProtocol> _mattingService;
}

@property (copy, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) AWEStudioClipOutputData *outputData;
@property (retain, nonatomic) AWEStudioClipModel *clipModel;
@property (retain, nonatomic) AWEVideoSegmentedClipAdapter *clipAdapter;
@property (retain, nonatomic) AWEClipPlayerViewModel *playerViewModel;
@property (retain, nonatomic) AWEClipSliderViewModel *sliderViewModel;
@property (retain, nonatomic) AWEAIVideoClipManager *clipManager;
@property (retain, nonatomic) AWEAVMixedMutableCompositionBuilder *compositionBuilder;
@property (retain, nonatomic) NSString *tmpVideoPath;
@property (retain, nonatomic) NSString *tmpTotalVideoPath;
@property (retain, nonatomic) AWEThumbnailCache *thumbnailCache;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL exporting;
@property (nonatomic) BOOL isMatting;
@property (retain, nonatomic) ACCEditCompileSession *transcoder;
@property (retain, nonatomic) AWEClipAIViewModel *clipAIViewModel;
@property (retain, nonatomic) id<AWEStudioVideoMattingProtocol> mattingService;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;

+ (id)degreeOfRotateType:(unsigned long long)arg0;

- (id)clipModel;
- (void)setClipModel:(id)arg0;
- (id)videoData;
- (void)setCoverImage:(id)arg0;
- (void)setVideoData:(id)arg0;
- (id)draftFolder;
- (void)setDraftFolder:(id)arg0;
- (void)setMattingService:(id)arg0;
- (id)mattingService;
- (void)setExporting:(BOOL)arg0;
- (BOOL)exporting;
- (double)videoMinSeconds;
- (double)videoMaxSeconds;
- (id)transcoder;
- (void)setTranscoder:(id)arg0;
- (void)appWillResignActiveNotification;
- (BOOL)allowLongVideo;
- (BOOL)singleVideoMode;
- (BOOL)needReportSourceInfo;
- (id)clipAdapter;
- (void)setClipAdapter:(id)arg0;
- (void)setPlayerViewModel:(id)arg0;
- (void)setSliderViewModel:(id)arg0;
- (id)playerViewModel;
- (id)sliderViewModel;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotateTransformForRotateType:(unsigned long long)arg0;
- (double)radiansForRotateType:(unsigned long long)arg0;
- (void)setClipAIViewModel:(id)arg0;
- (id)clipAIViewModel;
- (id)compositionBuilder;
- (void)setCompositionBuilder:(id)arg0;
- (void)setTmpVideoPath:(id)arg0;
- (void)setTmpTotalVideoPath:(id)arg0;
- (BOOL)isMatting;
- (void)setIsMatting:(BOOL)arg0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })rotateTransform:(float *)arg0;
- (void)muteOrigianlAudioWithVideoData:(id)arg0;
- (void)setupExportSessionForAIMode;
- (void)setupExportSessionForNormalMode;
- (id)p_outputURLWithFileRemove;
- (BOOL)sliderFixedLengthMode;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })clipTimeRangeWithAssetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setupExportSessionWithPassthrough:(BOOL)arg0;
- (BOOL)isTooShort;
- (void)updateAssetOriginalResolution;
- (BOOL)isSpeedChange;
- (void)handleExportForNormalModeAndSingleVideoWithCompletion:(id /* block */)arg0;
- (BOOL)optimizeMultiVideoImport;
- (void)handleMultiFastImport:(id /* block */)arg0;
- (void)setupVECompileSession;
- (void)clipFinishedWithUrl:(id)arg0 speed:(double)arg1 music:(id)arg2 transform:(id)arg3 clipRange:(id)arg4 coverImage:(id)arg5;
- (void)trackClipSuccessRate:(id)arg0;
- (void)handleExportErrorWithCompletion:(id /* block */)arg0;
- (void)getSourceInfo:(id /* block */)arg0;
- (void)p_handleNormalMultiFastImport:(id /* block */)arg0;
- (void)p_handleAIMultiFastImport:(id /* block */)arg0;
- (id)p_AssetsSelectedClipTimeRange;
- (void)AIRecommendMusicAppendFramesWithClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void)configOutputData;
- (void)requestCoverImageWithVideo:(id)arg0 completion:(id /* block */)arg1;
- (unsigned long long)VERotationModeForRotateType:(unsigned long long)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })coveredIndexRange;
- (id)getMd5WithAsset:(id)arg0;
- (BOOL)optimizeSingleVideoImport;
- (void)handleExportForNormalModeAndFastImportVideoWithMusic:(id)arg0 completion:(id /* block */)arg1;
- (void)handleExportForHighFrameRateWithMusic:(id)arg0 completion:(id /* block */)arg1;
- (void)handleExportAfterMattingProcessWithVideoURL:(id)arg0 music:(id)arg1 exportCompletion:(id /* block */)arg2;
- (void)getMusicFromOriginAsset:(id)arg0 completion:(id /* block */)arg1;
- (id)prepareVideoDataWithURL:(id)arg0 speed:(double)arg1 transform:(id)arg2 clipRange:(id)arg3;
- (void)clipFinishedWithOriginVideoData:(id)arg0 mattingVideoData:(id)arg1 music:(id)arg2 coverImage:(id)arg3;
- (void)ttmonitorPerfermance:(id)arg0;
- (void)p_exportSuccessWithPath:(id)arg0 music:(id)arg1 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg2 transform:(id)arg3 completion:(id /* block */)arg4;
- (void)releaseExportSession;
- (void)ttmonitorClipTimeTooShort:(long long)arg0 clipTime:(double)arg1 videoTime:(double)arg2;
- (id)tmpTotalVideoPath;
- (id)tmpVideoPath;
- (void)setupExportSessionRemoveTotalSpeedForHighFrameRate;
- (void)trackClipSuccessRate;
- (void)p_exportWithSuccess:(id /* block */)arg0 failure:(id /* block */)arg1 successOrFailure:(id /* block */)arg2;
- (void)p_exportSuccessWithPath:(id)arg0 music:(id)arg1 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg2 completion:(id /* block */)arg3;
- (BOOL)addSourceInfoForItem:(id)arg0 withKey:(id)arg1;
- (void)clipFinishedWithVideoData:(id)arg0 music:(id)arg1 coverImage:(id)arg2;
- (id)initWithClipModel:(id)arg0 clipManager:(id)arg1 sliderViewModel:(id)arg2 playerViewModel:(id)arg3 draftFolder:(id)arg4;
- (id)initWithClipModel:(id)arg0 aiViewModel:(id)arg1 sliderViewModel:(id)arg2 playerViewModel:(id)arg3 draftFolder:(id)arg4;
- (void)setupExportSession;
- (void)handleExportWithCompletion:(id /* block */)arg0;
- (void)handleExceptionForIPhoneXSWithMusic:(id)arg0 completion:(id /* block */)arg1;
- (id)requestThumbnailForAsset:(id)arg0 rotation:(unsigned long long)arg1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2 completion:(id /* block */)arg3;
- (void)addNotificationObservers;
- (void).cxx_destruct;
- (id)outputData;
- (void)dealloc;
- (id)thumbnailCache;
- (void)setThumbnailCache:(id)arg0;
- (void)setupData;
- (id)clipManager;
- (void)setClipManager:(id)arg0;
- (id)coverImage;
- (void)setOutputData:(id)arg0;

@end
