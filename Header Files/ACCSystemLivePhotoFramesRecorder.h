//
//     Generated by private class-dump
//

@class NSTimer;
@protocol VERecorderPublicProtocol;

@interface ACCSystemLivePhotoFramesRecorder : NSObject {
    BOOL _running;
    NSTimer *_recordFramesTimer;
    id<VERecorderPublicProtocol> _camera;
    double _startTime;
    id /* block */ _completion;
}

@property (retain, nonatomic) NSTimer *recordFramesTimer;
@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ completion;

- (void)sampleFrame;
- (void)stopFrames;
- (void)startFramesWithCamera:(id)arg0 completion:(id /* block */)arg1;
- (void)setRecordFramesTimer:(id)arg0;
- (id)recordFramesTimer;
- (void)prepareToSampleFrame;
- (void)firstSampling;
- (void)timedSampling;
- (void)setRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (id)camera;
- (void)setStartTime:(double)arg0;
- (void)setCamera:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)stopTimer;
- (double)startTime;

@end