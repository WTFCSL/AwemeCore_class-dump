//
//     Generated by private class-dump
//

@class NSString, AVAssetWriterInput, NSURL, VEAudioEncodeConfig, AVAssetWriter;
@protocol IESGLAudioWriterDelegate;

@interface IESGLAudioWriter : IESMMObject {
    BOOL alreadyFinishedRecording;
    NSURL *audioURL;
    NSString *fileType;
    AVAssetWriter *assetWriter;
    AVAssetWriterInput *assetWriterAudioInput;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } previousAudioTime;
    BOOL audioEncodingIsFinished;
    BOOL videoEncodingIsFinished;
    BOOL isRecording;
    BOOL allowWriteAudio;
    BOOL _shouldInvalidateAudioSampleWhenDone;
    BOOL _isAudioReady;
    id /* block */ failureBlock;
    id<IESGLAudioWriterDelegate> _delegate;
    double _progressStartTime;
    double _progressTotalTime;
    double _progressCurrentTime;
    VEAudioEncodeConfig *_audioSettings;
}

@property (retain, nonatomic) VEAudioEncodeConfig *audioSettings;
@property (nonatomic) double progressStartTime;
@property (nonatomic) double progressTotalTime;
@property (nonatomic) double progressCurrentTime;
@property (nonatomic) BOOL isAudioReady;
@property (nonatomic) BOOL shouldInvalidateAudioSampleWhenDone;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (weak, nonatomic) id<IESGLAudioWriterDelegate> delegate;

- (void)processAudioBuffer:(struct opaqueCMSampleBuffer { } *)arg0;
- (void)initializeAudioWithOutputSettings;
- (void)finishRecordingWithCompletionHandler:(id /* block */)arg0;
- (double)progressTotalTime;
- (double)progressCurrentTime;
- (double)progressStartTime;
- (void)setAllowWriteAudio:(BOOL)arg0;
- (id)initWithAudioURL:(id)arg0 fileType:(id)arg1 audioSettings:(id)arg2;
- (BOOL)shouldInvalidateAudioSampleWhenDone;
- (void)setShouldInvalidateAudioSampleWhenDone:(BOOL)arg0;
- (void)setProgressStartTime:(double)arg0;
- (void)setProgressTotalTime:(double)arg0;
- (void)setProgressCurrentTime:(double)arg0;
- (BOOL)isAudioReady;
- (void)setIsAudioReady:(BOOL)arg0;
- (double)getProgress;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)startRecording;
- (id)audioSettings;
- (id)delegate;
- (void)setAudioSettings:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)cancelRecording;
- (void)finishRecording;

@end
