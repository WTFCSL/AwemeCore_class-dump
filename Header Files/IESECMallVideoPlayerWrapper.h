//
//     Generated by private class-dump
//

@class NSString, IESECVideoPlayerController, UIView;
@protocol IESECMallVideoProtocol, IESECMallVideoPlayerWrapperDelegate;

@interface IESECMallVideoPlayerWrapper : NSObject <IESECVideoPlayerControllerDelegate, IESECMallVideoDelegate> {
    BOOL _needAddCustomTimer;
    id /* block */ _updateTimeBlock;
    UIView *_view;
    double _currentPlaybackTime;
    id<IESECMallVideoPlayerWrapperDelegate> _delegate;
    UIView<IESECMallVideoProtocol> *_videoPlayer;
    IESECVideoPlayerController *_videoPlayerController;
}

@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL needAddCustomTimer;
@property (nonatomic) double currentPlaybackTime;
@property (retain, nonatomic) UIView<IESECMallVideoProtocol> *videoPlayer;
@property (retain, nonatomic) IESECVideoPlayerController *videoPlayerController;
@property (copy, nonatomic) id /* block */ updateTimeBlock;
@property (weak, nonatomic) id<IESECMallVideoPlayerWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)setCurrentPlaybackTime:(double)arg0 complete:(id /* block */)arg1;
- (void)didError:(id)arg0;
- (void)backFromDetailDidCompletedIsSameVideo:(BOOL)arg0;
- (void)updateWithVideoData:(id)arg0;
- (void)enterDetailWithPlayer:(id)arg0 trackParams:(id)arg1;
- (void)playerController:(id)arg0 updateCurrent:(double)arg1 duration:(double)arg2;
- (void)playerController:(id)arg0 playerDidFinishError:(id)arg1;
- (void)reloadVideoID:(id)arg0 playURLs:(id)arg1;
- (void)updateVideoWithVideoData:(id)arg0 trackParams:(id)arg1 nickname:(id)arg2;
- (void)enterDetailWithTrackParams:(id)arg0;
- (BOOL)needAddCustomTimer;
- (void)setUpdateTimeBlock:(id /* block */)arg0;
- (void)setNeedAddCustomTimer:(BOOL)arg0;
- (void)setVideoPlayerController:(id)arg0;
- (void)reloadLocalURL:(id)arg0;
- (id /* block */)updateTimeBlock;
- (void)videoReadyToDisplayOfPlayerController:(id)arg0;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (void)setModel:(id)arg0;
- (double)currentPlaybackTime;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)stop;
- (void)setView:(id)arg0;
- (id)delegate;
- (void)setCurrentPlaybackTime:(double)arg0;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (id)view;
- (void)setMute:(BOOL)arg0;
- (void)prepareToPlay;
- (BOOL)inTransition;
- (void)didStart;
- (id)videoPlayerController;
- (void)setRepeat:(BOOL)arg0;

@end
