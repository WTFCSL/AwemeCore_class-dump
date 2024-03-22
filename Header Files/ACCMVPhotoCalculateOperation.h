//
//     Generated by private class-dump
//

@class NSError, NSString, NSRecursiveLock, ACCMomentMediaAsset, VEAIMomentBIMResult, VEVideoFramesGenerator, NSDictionary, VEAIMomentAlgorithm, NSObject, VEAIMomentBIMConfig;
@protocol OS_dispatch_queue, ACCMVPhotoCalculateOperationDelegate;

@interface ACCMVPhotoCalculateOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
    BOOL _videoFrameExtractionOptimizeEnabled;
    BOOL _modelOptimizeEnabled;
    int _requestId;
    unsigned long long _algorithmType;
    VEAIMomentAlgorithm *_aiAlgorithm;
    ACCMomentMediaAsset *_asset;
    id /* block */ _bimCompletion;
    NSObject<OS_dispatch_queue> *_calculateQueue;
    long long _calculateIndex;
    id<ACCMVPhotoCalculateOperationDelegate> _opDelegate;
    NSRecursiveLock *_stateLock;
    VEVideoFramesGenerator *_frameGenerator;
    NSDictionary *_imageExif;
    NSString *_videoModelString;
    NSString *_videoCreateDateString;
    VEAIMomentBIMResult *_bimResult;
    NSError *_bimError;
    unsigned long long _orientation;
    double _startTime;
    VEAIMomentBIMConfig *_imageBIMConfig;
    VEAIMomentBIMConfig *_videoNormalBIMConfig;
    VEAIMomentBIMConfig *_videoKeyBIMConfig;
}

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSRecursiveLock *stateLock;
@property (nonatomic) int requestId;
@property (retain, nonatomic) VEVideoFramesGenerator *frameGenerator;
@property (retain, nonatomic) NSDictionary *imageExif;
@property (copy, nonatomic) NSString *videoModelString;
@property (copy, nonatomic) NSString *videoCreateDateString;
@property (retain, nonatomic) VEAIMomentBIMResult *bimResult;
@property (retain, nonatomic) NSError *bimError;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) double startTime;
@property (retain, nonatomic) VEAIMomentBIMConfig *imageBIMConfig;
@property (retain, nonatomic) VEAIMomentBIMConfig *videoNormalBIMConfig;
@property (retain, nonatomic) VEAIMomentBIMConfig *videoKeyBIMConfig;
@property (nonatomic) unsigned long long algorithmType;
@property (weak, nonatomic) VEAIMomentAlgorithm *aiAlgorithm;
@property (retain, nonatomic) ACCMomentMediaAsset *asset;
@property (copy, nonatomic) id /* block */ bimCompletion;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *calculateQueue;
@property (nonatomic) long long calculateIndex;
@property (weak, nonatomic) id<ACCMVPhotoCalculateOperationDelegate> opDelegate;
@property (nonatomic) BOOL videoFrameExtractionOptimizeEnabled;
@property (nonatomic) BOOL modelOptimizeEnabled;

+ (id)bimCallbackQueue;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg0;

- (void)setVideoModelString:(id)arg0;
- (id)bimResult;
- (void)setBimResult:(id)arg0;
- (id)imageExif;
- (id)videoModelString;
- (id)videoCreateDateString;
- (void)setImageExif:(id)arg0;
- (void)setVideoCreateDateString:(id)arg0;
- (id)imageBIMConfig;
- (id)videoNormalBIMConfig;
- (id)videoKeyBIMConfig;
- (void)checkComplete;
- (void)setOpDelegate:(id)arg0;
- (void)setAiAlgorithm:(id)arg0;
- (BOOL)videoFrameExtractionOptimizeEnabled;
- (void)setVideoFrameExtractionOptimizeEnabled:(BOOL)arg0;
- (BOOL)modelOptimizeEnabled;
- (void)setModelOptimizeEnabled:(BOOL)arg0;
- (void)setCalculateQueue:(id)arg0;
- (void)setCalculateIndex:(long long)arg0;
- (id)calculateQueue;
- (long long)calculateIndex;
- (void)setBimCompletion:(id /* block */)arg0;
- (id)aiAlgorithm;
- (id /* block */)bimCompletion;
- (void)setBimError:(id)arg0;
- (id)frameGenerator;
- (id)bimError;
- (void)setFrameGenerator:(id)arg0;
- (void)processImageAsset:(id)arg0;
- (void)processVideoAsset:(id)arg0;
- (void)processInvalidAsset;
- (void)handleError;
- (BOOL)isBIMReady;
- (double)generatorFPSWithVideoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)calculatePhotoWithImage:(id)arg0;
- (void)calculateVideoWithAsset:(id)arg0;
- (id)opDelegate;
- (void)setImageBIMConfig:(id)arg0;
- (void)setVideoNormalBIMConfig:(id)arg0;
- (void)setVideoKeyBIMConfig:(id)arg0;
- (void)setFinished:(BOOL)arg0;
- (id)stateLock;
- (BOOL)isFinished;
- (void)setCancelled:(BOOL)arg0;
- (void)setStateLock:(id)arg0;
- (BOOL)isAsynchronous;
- (id)init;
- (BOOL)isConcurrent;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (unsigned long long)orientation;
- (double)startTime;
- (void)setOrientation:(unsigned long long)arg0;
- (void)cancel;
- (id)asset;
- (void)start;
- (void)setAsset:(id)arg0;
- (BOOL)isCancelled;
- (int)requestId;
- (void)setExecuting:(BOOL)arg0;
- (void)setRequestId:(int)arg0;
- (unsigned long long)algorithmType;
- (void)setAlgorithmType:(unsigned long long)arg0;

@end
