//
//     Generated by private class-dump
//

@class HTSGLContext, AVAsset, HTSVideoData, AVURLAsset, NSString, NSLock, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface VEReverseUnit : NSObject <IESAssetReverseProtocol, IVEReverseProtocol> {
    BOOL _useNewMudule;
    BOOL _enableMultiTrack;
    BOOL _shouldCancelReverse;
    BOOL _timeMachineReady;
    BOOL _reverseVideoStatus;
    id /* block */ _reverseCompleteBlock;
    NSObject<OS_dispatch_semaphore> *_reverseCompleteSemaphore;
    unsigned long long _reverseProcessStatus;
    HTSVideoData *_videoData;
    AVAsset *_reverseAsset;
    AVAsset *_reverseSrcAsset;
    NSLock *_uniqueLock;
    unsigned long long _multiVideoMergeStatus;
    AVURLAsset *_multiVideoMergeAsset;
    NSString *_reverseVideoDataMD5;
    NSObject<OS_dispatch_queue> *_reverseQueue;
    HTSGLContext *_htsGLContext;
}

@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) AVAsset *reverseAsset;
@property (retain, nonatomic) AVAsset *reverseSrcAsset;
@property (nonatomic) BOOL shouldCancelReverse;
@property (nonatomic) BOOL timeMachineReady;
@property (nonatomic) BOOL reverseVideoStatus;
@property (retain, nonatomic) NSLock *uniqueLock;
@property (nonatomic) unsigned long long multiVideoMergeStatus;
@property (retain, nonatomic) AVURLAsset *multiVideoMergeAsset;
@property (copy, nonatomic) NSString *reverseVideoDataMD5;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reverseQueue;
@property (retain, nonatomic) HTSGLContext *htsGLContext;
@property (nonatomic) unsigned long long reverseProcessStatus;
@property (nonatomic) BOOL useNewMudule;
@property (nonatomic) BOOL enableMultiTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ reverseCompleteBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *reverseCompleteSemaphore;

+ (struct CGSize { double x0; double x1; })p_fitSize:(struct CGSize { double x0; double x1; })arg0 rotation:(unsigned long long)arg1;
+ (struct CGSize { double x0; double x1; })p_adaptiveVideoSize:(id)arg0;
+ (void)applyTimeMachine:(long long)arg0 beginTime:(double)arg1 videoData:(id)arg2;
+ (void)applyTimeMachineWithConfig:(id)arg0 completeBlk:(id /* block */)arg1 videoData:(id)arg2;
+ (void)applyTimeMachine:(long long)arg0 beginTime:(double)arg1 startTime:(double)arg2 completeBlk:(id /* block */)arg3 videoData:(id)arg4;
+ (void)applyTimeMachineWithConfig:(id)arg0 videoData:(id)arg1;

- (id)videoData;
- (void)setVideoData:(id)arg0;
- (BOOL)updateVideoData:(id)arg0;
- (BOOL)enableMultiTrack;
- (void)setEnableMultiTrack:(BOOL)arg0;
- (BOOL)timeMachineReady;
- (void)restartReverseAsset:(id /* block */)arg0;
- (void)clearReverseAsset;
- (id)reverseAsset;
- (void)setReverseAsset:(id)arg0;
- (id)initWithVideoData:(id)arg0;
- (void)setTimeMachineReady:(BOOL)arg0;
- (void)setShouldCancelReverse:(BOOL)arg0;
- (BOOL)shouldCancelReverse;
- (void)setUseNewMudule:(BOOL)arg0;
- (id)reverseSrcAsset;
- (void)setReverseSrcAsset:(id)arg0;
- (BOOL)useNewMudule;
- (void)setHtsGLContext:(id)arg0;
- (id)htsGLContext;
- (id)uniqueLock;
- (id)reverseVideoDataMD5;
- (void)setMultiVideoMergeAsset:(id)arg0;
- (void)setMultiVideoMergeStatus:(unsigned long long)arg0;
- (BOOL)reverseVideoStatus;
- (void)reverseAssetWithComplete:(id /* block */)arg0;
- (void)setReverseVideoDataMD5:(id)arg0;
- (id)multiVideoMergeAsset;
- (void)setReverseProcessStatus:(unsigned long long)arg0;
- (void)setReverseVideoStatus:(BOOL)arg0;
- (void)p_mergeAssetsWithComplete:(id /* block */)arg0;
- (id)p_getCompressionProps:(id)arg0;
- (id)reverseCompleteSemaphore;
- (id /* block */)reverseCompleteBlock;
- (void)p_reverseAsset:(id)arg0 outputURL:(id)arg1 owner:(id)arg2 compressProps:(id)arg3 videoComposition:(id)arg4 progressBlock:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)cancelReverseAsset;
- (void)restoreReverseIfNeeded:(id /* block */)arg0;
- (void)setReverseCompleteBlock:(id /* block */)arg0;
- (void)setReverseCompleteSemaphore:(id)arg0;
- (unsigned long long)reverseProcessStatus;
- (void)setUniqueLock:(id)arg0;
- (unsigned long long)multiVideoMergeStatus;
- (id)reverseQueue;
- (void)setReverseQueue:(id)arg0;
- (void).cxx_destruct;

@end
