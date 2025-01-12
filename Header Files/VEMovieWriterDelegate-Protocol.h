//
//     Generated by private class-dump
//

@class HTSGLContext, NSString, NSArray;
@protocol IESGLMovieWriterDelegate;

@protocol VEMovieWriterDelegate <HTSGLInput>

@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) NSString *route;
@property (nonatomic) double progressStartTime;
@property (nonatomic) double progressTotalTime;
@property (nonatomic) double progressCurrentTime;
@property (nonatomic) BOOL needStatisticProgress;
@property (nonatomic) BOOL isFromRecorder;
@property (nonatomic) BOOL isAudioReady;
@property (nonatomic) BOOL isVideoReady;
@property (nonatomic) BOOL hasAudioTrack;
@property (nonatomic) BOOL useAudioEffect;
@property (nonatomic) BOOL shouldPassthroughAudio;
@property (nonatomic) BOOL shouldInvalidateAudioSampleWhenDone;
@property (nonatomic) int controlFrameRate;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ dropframeCallback;
@property (weak, nonatomic) id<IESGLMovieWriterDelegate> delegate;
@property (nonatomic) BOOL encodingLiveVideo;
@property (copy, nonatomic) id /* block */ videoInputReadyCallback;
@property (copy, nonatomic) id /* block */ audioInputReadyCallback;
@property (copy, nonatomic) id /* block */ audioProcessingCallback;
@property (copy, nonatomic) id /* block */ videoProcessingCallback;
@property (nonatomic) BOOL enabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (copy, nonatomic) NSArray *metaData;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) HTSGLContext *movieWriterContext;
@property (nonatomic) double recordRate;
@property (nonatomic) unsigned long long bitrate;
@property (nonatomic) double captureFrameRate;
@property (nonatomic) double effectRecordRate;
@property (nonatomic) BOOL useEffectRecordRate;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxLimitTime;
@property (nonatomic) BOOL disableWriteAuido;
@property (nonatomic) BOOL isBytevc;
@property (copy, nonatomic) id /* block */ getVideoUrl;
@property (nonatomic) unsigned long long inputRotation;
@property (nonatomic) long long rendererType;
@property (nonatomic) double startWritingTime;

- (id /* block */)videoProcessingCallback;
- (void)setVideoProcessingCallback:(id /* block */)arg0;
- (void)setMaxLimitTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setDropFrame:(BOOL)arg0;
- (void)setUseEffectRecordRate:(BOOL)arg0;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)finishRecordingWithCompletionHandler:(id /* block */)arg0;
- (double)progressTotalTime;
- (double)progressCurrentTime;
- (double)progressStartTime;
- (BOOL)shouldInvalidateAudioSampleWhenDone;
- (void)setShouldInvalidateAudioSampleWhenDone:(BOOL)arg0;
- (void)setProgressStartTime:(double)arg0;
- (void)setProgressTotalTime:(double)arg0;
- (void)setProgressCurrentTime:(double)arg0;
- (BOOL)isAudioReady;
- (void)setIsAudioReady:(BOOL)arg0;
- (double)getProgress;
- (BOOL)useAudioEffect;
- (void)setUseAudioEffect:(BOOL)arg0;
- (double)recordRate;
- (void)setRecordRate:(double)arg0;
- (double)effectRecordRate;
- (void)setEffectRecordRate:(double)arg0;
- (id)initWithMovieURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 fileType:(id)arg2 videoSettings:(id)arg3 audioSettings:(id)arg4 encodeFrameAsHlg:(BOOL)arg5 isMultiEncoder:(BOOL)arg6 inputPixelFormat:(unsigned int)arg7 context:(id)arg8;
- (int)controlFrameRate;
- (id /* block */)dropframeCallback;
- (void)processAudioBuffer:(struct opaqueCMSampleBuffer { } *)arg0 successAudioCallback:(id /* block */)arg1;
- (id)initWithMovieURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)initWithMovieURL:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 fileType:(id)arg2 videoSettings:(id)arg3 audioSettings:(id)arg4 encodeFrameAsHlg:(BOOL)arg5;
- (void)releaseWriter;
- (void)startRecordingInOrientation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)processVideoBuffer:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)enableSynchronizationCallbacks;
- (void)setEffectPassThrough:(BOOL)arg0;
- (BOOL)needStatisticProgress;
- (void)setNeedStatisticProgress:(BOOL)arg0;
- (BOOL)isFromRecorder;
- (void)setIsFromRecorder:(BOOL)arg0;
- (BOOL)isVideoReady;
- (void)setIsVideoReady:(BOOL)arg0;
- (BOOL)shouldPassthroughAudio;
- (void)setShouldPassthroughAudio:(BOOL)arg0;
- (void)setControlFrameRate:(int)arg0;
- (void)setDropframeCallback:(id /* block */)arg0;
- (BOOL)encodingLiveVideo;
- (void)setEncodingLiveVideo:(BOOL)arg0;
- (id /* block */)videoInputReadyCallback;
- (void)setVideoInputReadyCallback:(id /* block */)arg0;
- (id /* block */)audioInputReadyCallback;
- (void)setAudioInputReadyCallback:(id /* block */)arg0;
- (id /* block */)audioProcessingCallback;
- (void)setAudioProcessingCallback:(id /* block */)arg0;
- (id)movieWriterContext;
- (void)setMovieWriterContext:(id)arg0;
- (BOOL)useEffectRecordRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxLimitTime;
- (BOOL)disableWriteAuido;
- (void)setDisableWriteAuido:(BOOL)arg0;
- (BOOL)isBytevc;
- (void)setIsBytevc:(BOOL)arg0;
- (id /* block */)getVideoUrl;
- (void)setGetVideoUrl:(id /* block */)arg0;
- (double)startWritingTime;
- (void)setStartWritingTime:(double)arg0;
- (id)metaData;
- (BOOL)paused;
- (id)outputURL;
- (BOOL)hasAudioTrack;
- (BOOL)enabled;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg0;
- (id)route;
- (long long)status;
- (void)startRecording;
- (id /* block */)completionBlock;
- (void)setContext:(id)arg0;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setPaused:(BOOL)arg0;
- (unsigned long long)bitrate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)setRoute:(id)arg0;
- (id)delegate;
- (id)context;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)setEnabled:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)setMetaData:(id)arg0;
- (id)error;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)cancelRecording;
- (unsigned long long)inputRotation;
- (void)setInputRotation:(unsigned long long)arg0;
- (void)setBitrate:(unsigned long long)arg0;
- (void)setHasAudioTrack:(BOOL)arg0;
- (long long)rendererType;
- (void)finishRecording;
- (double)captureFrameRate;
- (void)setCaptureFrameRate:(double)arg0;
- (void)setRendererType:(long long)arg0;

@end
