//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, TTKNaviRenderView;
@protocol TTKNaviRenderMessageDelegate, VERecorderPublicProtocol;

@interface TTKNaviRenderManager : NSObject {
    id /* block */ _captureImageCompletion;
    double _scale;
    id<VERecorderPublicProtocol> _recorder;
    long long _frameCount;
    BOOL _isRecording;
    BOOL _isFixedSize;
    struct __CVBuffer { } *_pixelBuffer;
    id<TTKNaviRenderMessageDelegate> _delegate;
    TTKNaviRenderView *_renderView;
    NSString *_activeEffect;
    long long _recordState;
    NSMutableDictionary *_captureImageTasks;
    struct CGSize { double width; double height; } _recordingSize;
}

@property long long recordState;
@property (retain, nonatomic) NSMutableDictionary *captureImageTasks;
@property (weak, nonatomic) id<TTKNaviRenderMessageDelegate> delegate;
@property (weak, nonatomic) TTKNaviRenderView *renderView;
@property (copy, nonatomic) NSString *activeEffect;
@property (nonatomic) struct CGSize { double width; double height; } recordingSize;

- (void)cancelRecord;
- (void)didStartRecording;
- (void)setRecordState:(long long)arg0;
- (void)sendPackedMessage;
- (void)captureImage:(unsigned long long)arg0 params:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)captureAvatarWithCompletion:(id /* block */)arg0;
- (void)captureSharingWithCompletion:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })recordingSize;
- (BOOL)recordVideo;
- (void)p_initDataWithScale:(double)arg0;
- (void)setCaptureImageTasks:(id)arg0;
- (void)sendMessageType:(unsigned int)arg0 arg1:(long long)arg1 arg2:(long long)arg2 arg3:(id)arg3;
- (struct opaqueCMSampleBuffer { } *)getSampleBuffer:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)cameraConfigWithInputData;
- (BOOL)receiveMessage:(unsigned int)arg0 arg1:(int)arg1 arg2:(int)arg2 arg3:(id)arg3;
- (void)recordTimeoutCheck;
- (id)captureImageTasks;
- (void)didFinishCaptureImageWithKey:(id)arg0;
- (void)preventTaskANR:(id)arg0 timeout:(double)arg1;
- (id)initWithFixSize:(struct CGSize { double x0; double x1; })arg0;
- (void)showRenderView;
- (void)updateRecorderBackgroundColor:(id)arg0;
- (void)setAvatarPluginWithModel:(id)arg0 lod:(long long)arg1 scene:(unsigned long long)arg2;
- (id)VERecorder;
- (void)setRecordingSize:(struct CGSize { double x0; double x1; })arg0;
- (void)applicationWillResignActive:(id)arg0;
- (id)initWithScale:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)recorder;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)activeEffect;
- (void)setActiveEffect:(id)arg0;
- (void)setupData;
- (id)renderView;
- (void)setRenderView:(id)arg0;
- (void)onUpdate;
- (void)snapshotWithCompletion:(id /* block */)arg0;
- (long long)recordState;
- (void)didStopRecording;

@end
