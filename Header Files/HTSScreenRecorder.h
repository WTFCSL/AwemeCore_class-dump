//
//     Generated by private class-dump
//

@class NSURL, AVCaptureConnection, AVAssetWriterInput, LCScreenRecorder, NSDictionary, NSObject, AVAssetWriter, UIView, AVCaptureDeviceInput, NSString, AVCaptureAudioDataOutput, AVAssetWriterInputPixelBufferAdaptor, AVCaptureSession, CADisplayLink, UIImage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HTSScreenRecorder : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, LCScreenRecorderProtocol> {
    NSObject<OS_dispatch_queue> *_render_queue;
    BOOL _isScreenShot;
    AVCaptureSession *_captureSession;
    AVCaptureConnection *_audioConnection;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    NSObject<OS_dispatch_queue> *_audio_output_queue;
    BOOL _audioInitFailed;
    BOOL _isAnchor;
    float _elapse;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInputPixelBufferAdaptor *_writerInputPixelBufferAdaptor;
    CADisplayLink *_displayLink;
    UIView *_targetView;
    double _firstTimeStamp;
    id /* block */ _completeHandle;
    UIImage *_coverImage;
    NSURL *_outputFileURL;
    NSObject<OS_dispatch_semaphore> *_frameRenderingSemaphore;
    double _scale;
    struct CGColorSpace { } *_rgbColorSpace;
    NSDictionary *_recordConfigs;
    LCScreenRecorder *_screenRecorder;
    NSString *_outputPath;
    struct CGSize { double width; double height; } _viewSize;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSampleTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _drawRect;
}

@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoInput;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *writerInputPixelBufferAdaptor;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) double firstTimeStamp;
@property (copy, nonatomic) id /* block */ completeHandle;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSURL *outputFileURL;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSampleTime;
@property (nonatomic) double scale;
@property (nonatomic) struct CGColorSpace { } *rgbColorSpace;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawRect;
@property (copy, nonatomic) NSDictionary *recordConfigs;
@property (retain, nonatomic) LCScreenRecorder *screenRecorder;
@property (retain, nonatomic) NSString *outputPath;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) float elapse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAnchor:(BOOL)arg0;
- (void)setCoverImage:(id)arg0;
- (double)getFileSize:(id)arg0;
- (id /* block */)completeHandle;
- (void)setCompleteHandle:(id /* block */)arg0;
- (void)setDrawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupAssetWriter;
- (void)destryDisplayLink;
- (void)screenRecorder:(id)arg0 didRecordingFinished:(id)arg1 error:(id)arg2;
- (void)captureFrame:(id)arg0;
- (BOOL)canVideoTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })videoTransformForDeviceOrientation;
- (void)setWriterInputPixelBufferAdaptor:(id)arg0;
- (void)setupVideoInput;
- (id)frameRenderingSemaphore;
- (id)writerInputPixelBufferAdaptor;
- (struct CGColorSpace { } *)rgbColorSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawRect;
- (BOOL)canDrawInBackground;
- (float)elapse;
- (void)setElapse:(float)arg0;
- (void)setFrameRenderingSemaphore:(id)arg0;
- (void)setRgbColorSpace:(struct CGColorSpace { } *)arg0;
- (void)p_startRecording;
- (void)closeCaptureSession;
- (void)stopRecordingWithCompletion:(id /* block */)arg0;
- (void)setupAudioInput:(struct opaqueCMFormatDescription { } *)arg0;
- (id)recordConfigs;
- (void)screenRecorder:(id)arg0 didStatusChanged:(long long)arg1;
- (id)initWithView:(id)arg0 isAnchor:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)startRecordingWithScreenShot:(BOOL)arg0;
- (void)setRecordConfigs:(id)arg0;
- (void)setDisplayLink:(id)arg0;
- (BOOL)isRecording;
- (void)setStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)stopRecording;
- (void).cxx_destruct;
- (id)targetView;
- (BOOL)isAnchor;
- (void)cleanup;
- (double)scale;
- (void)setTargetView:(id)arg0;
- (struct CGSize { double x0; double x1; })viewSize;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTime;
- (id)displayLink;
- (void)setupDisplayLink;
- (void)dealloc;
- (void)setWriter:(id)arg0;
- (void)setScale:(double)arg0;
- (id)writer;
- (void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)arg1 fromConnection:(id)arg2;
- (void)setViewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)outputFileURL;
- (void)setOutputFileURL:(id)arg0;
- (id)audioInput;
- (void)setAudioInput:(id)arg0;
- (void)cancelRecording;
- (id)outputPath;
- (void)setOutputPath:(id)arg0;
- (id)coverImage;
- (id)videoInput;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastSampleTime;
- (void)setLastSampleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)screenRecorder;
- (void)setScreenRecorder:(id)arg0;
- (void)setVideoInput:(id)arg0;
- (double)firstTimeStamp;
- (void)setFirstTimeStamp:(double)arg0;
- (void)setupCaptureSession;

@end
