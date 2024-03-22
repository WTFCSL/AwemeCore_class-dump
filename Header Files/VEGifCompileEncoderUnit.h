//
//     Generated by private class-dump
//

@class NSString, HTSVideoData, VEImageEncoder, NSError, NSObject, VETransData;
@protocol OS_dispatch_queue, VEProcessSampleDelegate;

@interface VEGifCompileEncoderUnit : VEUnitObject <VEProcessSampleDelegate, IVECompileWriter, VECompileStageProtocol, VECompileEncoderUnitProtocol> {
    BOOL _hasDecreseFrameTimeStamp;
    BOOL _isVideoWriterFinish;
    BOOL _isAudioWriterFinish;
    int _gifFPS;
    NSString *_route;
    long long _curVideoStage;
    long long _curAudioStage;
    id<VEProcessSampleDelegate> _downstream;
    id<VEProcessSampleDelegate> _audioDataProvider;
    id<VEProcessSampleDelegate> _videoDataProvider;
    id /* block */ _completeBlock;
    id /* block */ progressBlock;
    id /* block */ _customAudioProcessBlock;
    id /* block */ _encodeDataCB;
    NSError *_encoderError;
    unsigned long long _transStatus;
    NSObject<OS_dispatch_queue> *_videoQueue;
    VETransData *_transData;
    HTSVideoData *_videoData;
    VEImageEncoder *_imageEncoder;
    NSString *_outputPath;
    unsigned long long _frames;
}

@property (nonatomic) unsigned long long transStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue;
@property (nonatomic) BOOL isVideoWriterFinish;
@property (nonatomic) BOOL isAudioWriterFinish;
@property (retain, nonatomic) VETransData *transData;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) VEImageEncoder *imageEncoder;
@property (copy, nonatomic) NSString *outputPath;
@property (nonatomic) unsigned long long frames;
@property (nonatomic) int gifFPS;
@property (weak, nonatomic) id<VEProcessSampleDelegate> downstream;
@property (nonatomic) BOOL hasDecreseFrameTimeStamp;
@property (retain, nonatomic) NSError *encoderError;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (weak, nonatomic) id<VEProcessSampleDelegate> audioDataProvider;
@property (weak, nonatomic) id<VEProcessSampleDelegate> videoDataProvider;
@property (copy, nonatomic) id /* block */ customAudioProcessBlock;
@property (copy, nonatomic) id /* block */ encodeDataCB;
@property (nonatomic) long long curVideoStage;
@property (nonatomic) long long curAudioStage;

- (id)videoData;
- (void)setVideoData:(id)arg0;
- (id /* block */)encodeDataCB;
- (void)setEncodeDataCB:(id /* block */)arg0;
- (void)setCompleteBlock:(id /* block */)arg0;
- (id /* block */)completeBlock;
- (void)setCurVideoStage:(long long)arg0;
- (void)setCurAudioStage:(long long)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getWritedDuration;
- (id)audioDataProvider;
- (id)videoDataProvider;
- (BOOL)startLoopWriter;
- (void)setCustomAudioProcessBlock:(id /* block */)arg0;
- (BOOL)getVideoWriterFinish;
- (BOOL)getAudioWriterFinish;
- (long long)curVideoStage;
- (long long)curAudioStage;
- (double)getCompileProgress;
- (BOOL)hasDecreseFrameTimeStamp;
- (BOOL)cancelWriterWithError:(id)arg0;
- (id)transData;
- (void)setTransData:(id)arg0;
- (id /* block */)customAudioProcessBlock;
- (id)encoderError;
- (void)setAudioDataProvider:(id)arg0;
- (void)setVideoDataProvider:(id)arg0;
- (void)setEncoderError:(id)arg0;
- (void)setHasDecreseFrameTimeStamp:(BOOL)arg0;
- (void)returnFramebuffer:(id)arg0;
- (BOOL)encodeSampleData:(id)arg0;
- (void)setTransStatus:(unsigned long long)arg0;
- (void)setIsAudioWriterFinish:(BOOL)arg0;
- (void)setIsVideoWriterFinish:(BOOL)arg0;
- (void)setVideoQueue:(id)arg0;
- (unsigned long long)transStatus;
- (BOOL)isVideoWriterFinish;
- (BOOL)isAudioWriterFinish;
- (id)_buildTranscodeRes:(id)arg0;
- (void)_initEncoder:(id)arg0;
- (void)setImageEncoder:(id)arg0;
- (int)gifFPS;
- (void)setGifFPS:(int)arg0;
- (BOOL)processSampleData:(id)arg0;
- (unsigned long long)frames;
- (void)setDownstream:(id)arg0;
- (id)init;
- (id)downstream;
- (BOOL)setConfig:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (id)route;
- (void)setProgressBlock:(id /* block */)arg0;
- (void)setRoute:(id)arg0;
- (id /* block */)progressBlock;
- (void)closeSession:(BOOL)arg0;
- (void)pause;
- (void)setFrames:(unsigned long long)arg0;
- (id)outputPath;
- (void)setOutputPath:(id)arg0;
- (void)resetSession;
- (id)videoQueue;
- (id)imageEncoder;
- (BOOL)startWriter;

@end
