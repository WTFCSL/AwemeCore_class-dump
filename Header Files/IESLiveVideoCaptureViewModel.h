//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol IESLiveVideoEffectProcessing, IESLiveMonitor;

@interface IESLiveVideoCaptureViewModel : NSObject <IESLiveAnchorRoomStatusChangeEvents> {
    id<IESLiveVideoEffectProcessing> _videoEffectProcesser;
    id<IESLiveMonitor> _monitor;
    long long _uploadSuccessCount;
    NSMutableArray *_uploadTasks;
}

@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcesser;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) long long uploadSuccessCount;
@property (retain, nonatomic) NSMutableArray *uploadTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)uploadTasks;
- (double)getFileSize:(id)arg0;
- (void)setUploadTasks:(id)arg0;
- (void)startLive;
- (void)startAnchorLiveWithRoom:(id)arg0;
- (void)stopVideoUploadIfNeeded;
- (void)checkCaptureVideoIfNeeded;
- (id)videoEffectProcesser;
- (void)uploadVideoWithFileURL:(id)arg0 videoType:(unsigned long long)arg1;
- (long long)uploadSuccessCount;
- (void)setUploadSuccessCount:(long long)arg0;
- (void)setVideoEffectProcesser:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)monitor;
- (void)startVideoRecording;
- (void)setMonitor:(id)arg0;
- (void)setup;

@end