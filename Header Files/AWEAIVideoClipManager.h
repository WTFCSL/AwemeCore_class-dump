//
//     Generated by private class-dump
//

@class NSObject, NSString, NSMutableDictionary, AWEVideoPublishViewModel, AWEStudioClipOutputData, ACCEditBingoManager;
@protocol ACCFileUploadServiceProtocol, AWEStudioMusicModelProtocol, ACCEditVideoDataProtocol, OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWEAIVideoClipManager : NSObject <AWEAIVideoClipManager> {
    BOOL _didSetupMusic;
    BOOL _hasGeneratedAIVideoClipSuccessfully;
    BOOL _hasGeneratedPreciseAIVideoClipSuccessfully;
    id /* block */ _musicFallBackBlock;
    AWEVideoPublishViewModel *_publishViewModel;
    AWEStudioClipOutputData *_clipOutputData;
    ACCEditBingoManager *_bingoManager;
    NSObject<ACCEditVideoDataProtocol> *_currentVideoData;
    id<AWEStudioMusicModelProtocol> _previousMusicModel;
    id<AWEStudioMusicModelProtocol> _currentMusicModel;
    NSMutableDictionary *_frameGenerationRecord;
    double _startLocation;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    double _maxVideoDuration;
    long long _lastVideoResolveType;
    id<ACCFileUploadServiceProtocol> _uploadService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEStudioClipOutputData *clipOutputData;
@property (retain, nonatomic) ACCEditBingoManager *bingoManager;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *currentVideoData;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> previousMusicModel;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> currentMusicModel;
@property (retain, nonatomic) NSMutableDictionary *frameGenerationRecord;
@property (nonatomic) BOOL didSetupMusic;
@property (nonatomic) BOOL hasGeneratedAIVideoClipSuccessfully;
@property (nonatomic) BOOL hasGeneratedPreciseAIVideoClipSuccessfully;
@property (nonatomic) double startLocation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) double maxVideoDuration;
@property (nonatomic) long long lastVideoResolveType;
@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (copy, nonatomic) id /* block */ musicFallBackBlock;

+ (void)convertAssetModelsAVAssetToAVURLAssets:(id)arg0 taskID:(id)arg1 completion:(id /* block */)arg2;
+ (long long)maxVideoCount;
+ (void)prepareAIVideoClipPrerequisiteWithSourceAssetModels:(id)arg0 music:(id)arg1 prerequisiteType:(long long)arg2 taskID:(id)arg3 createID:(id)arg4 extraInfo:(id)arg5 isCommercialScene:(BOOL)arg6 completion:(id /* block */)arg7;
+ (double)maxVideoTotalDurationInSeconds;
+ (double)maxVideoTotalDurationInHours;
+ (void)requestAIAlgorithmModelWithCompletion:(id /* block */)arg0;
+ (BOOL)isError:(id)arg0 equalTo:(long long)arg1;
+ (id)toastDescriptionForError:(id)arg0;
+ (BOOL)shouldUseAIVideoClipMode:(BOOL)arg0;
+ (void)prepareAIVideoClipPrerequisiteWithPublishModel:(id)arg0 musicModel:(id)arg1 prerequisiteType:(long long)arg2 completion:(id /* block */)arg3;
+ (double)maxAIVideoClipDurationInSeconds;
+ (id)p_outputURLForAVAsset:(id)arg0;
+ (void)p_exportSessionWithAVAsset:(id)arg0 completion:(id /* block */)arg1;

- (double)maxVideoDuration;
- (id)publishViewModel;
- (id)bingoManager;
- (void)setPublishViewModel:(id)arg0;
- (id)currentMusicModel;
- (void)setMaxVideoDuration:(double)arg0;
- (id)initWithMaxVideoDuration:(double)arg0 publishViewModel:(id)arg1;
- (void)trackSuccessRateOfAlgorithmWithMusic:(id)arg0 error:(id)arg1;
- (void)regenerateRandomAIVideoClipWithMusic:(id)arg0 startLocation:(double)arg1 startTime:(double)arg2 duration:(double)arg3 videoAssets:(id)arg4 completion:(id /* block */)arg5;
- (void)cancelPreciseAIVideoClipGeneration;
- (void)setFrameGenerationRecord:(id)arg0;
- (void)setClipOutputData:(id)arg0;
- (double)validDurationForMusicDuration:(double)arg0;
- (void)fallbackToPreviousMusic;
- (id)p_errorWithCode:(long long)arg0;
- (void)setMusic:(id)arg0 startTime:(double)arg1 duration:(double)arg2 comlpetion:(id /* block */)arg3;
- (void)setPreviousMusicModel:(id)arg0;
- (void)setCurrentMusicModel:(id)arg0;
- (void)setDidSetupMusic:(BOOL)arg0;
- (long long)p_errorCodeWithVEErrorCode:(long long)arg0;
- (void)downloadBeatsWithMusicIfNeeded:(id)arg0 completion:(id /* block */)arg1;
- (id)beatsWithMusic:(id)arg0;
- (void)p_printDebugInfoOfBeats:(id)arg0 music:(id)arg1;
- (void)trackSuccessRateOfAlgorithmWithMusic:(id)arg0 error:(id)arg1 startDate:(id)arg2;
- (long long)sourceAssetsArrayCount;
- (void)setHasGeneratedAIVideoClipSuccessfully:(BOOL)arg0;
- (id)clipOutputData;
- (void)setCurrentVideoData:(id)arg0;
- (void)setHasGeneratedPreciseAIVideoClipSuccessfully:(BOOL)arg0;
- (void)deleteVideoAtIndex:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)insertAssetModel:(id)arg0 index:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)previousMusicModel;
- (id /* block */)musicFallBackBlock;
- (id)currentVideoData;
- (BOOL)p_isAllSourceAssetsFinishedVideoFramesAnalysis;
- (void)getRandomResolve:(id /* block */)arg0;
- (void)generateRandomAIVideoClipWithMusic:(id)arg0 startTime:(double)arg1 duration:(double)arg2 videoAssets:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteAllAssetModels:(id /* block */)arg0;
- (void)generatePreciseAIVideoClipWithMusic:(id)arg0 progress:(id /* block */)arg1 videoAssets:(id)arg2 completion:(id /* block */)arg3;
- (void)getPreciseReslove:(id /* block */)arg0;
- (void)p_getVideoFramesForAnalysisWithProgress:(id /* block */)arg0 videoAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)insertAssetModels:(id)arg0 completion:(id /* block */)arg1;
- (void)setMusic:(id)arg0 comlpetion:(id /* block */)arg1;
- (id)allVideoKeys;
- (id)frameGenerationRecord;
- (double)progressWithInfoDictionary:(id)arg0 totalCount:(long long)arg1 currentVideoKey:(id)arg2 currentProgress:(double)arg3;
- (id)p_reasonForErrorCode:(long long)arg0;
- (id)initWithMaxVideoDuration:(double)arg0 clipOutputData:(id)arg1;
- (void)downloadBeatsWithMusic:(id)arg0;
- (BOOL)isAIVideoClipAnalysisFinished;
- (void)regenerateRandomAIVideoClipWithMusic:(id)arg0 startLocation:(double)arg1 videoAssets:(id)arg2 completion:(id /* block */)arg3;
- (void)generateRandomAIVideoClipWithDeleteVideoAtIndex:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)generateRandomAIVideoClipWithMoveVideoFromIndex:(unsigned long long)arg0 toIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)regeneratePreciseAIVideoClipWithMusic:(id)arg0 progress:(id /* block */)arg1 videoAssets:(id)arg2 completion:(id /* block */)arg3;
- (id)makePlayerItemWithVideoData:(id)arg0 targetVideoSize:(struct CGSize { double x0; double x1; })arg1 clipTimeRangeArray:(id)arg2;
- (id)getExportSessionWithPlayerItem:(id)arg0;
- (void)setMusicFallBackBlock:(id /* block */)arg0;
- (void)setBingoManager:(id)arg0;
- (BOOL)didSetupMusic;
- (BOOL)hasGeneratedAIVideoClipSuccessfully;
- (BOOL)hasGeneratedPreciseAIVideoClipSuccessfully;
- (long long)lastVideoResolveType;
- (void)setLastVideoResolveType:(long long)arg0;
- (void)saveAndUploadScoreFile;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (void)setSemaphore:(id)arg0;
- (double)startLocation;
- (void)setStartLocation:(double)arg0;
- (id)uploadService;
- (void)setUploadService:(id)arg0;

@end
