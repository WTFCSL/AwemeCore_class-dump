//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIView, IESLiveVideoPlayer;
@protocol IESLiveOrientationConfig;

@interface AWELiveVideoPlayView : IESECSliceXBaseContentElementView <IESLiveVideoPlayerDelegate> {
    IESLiveVideoPlayer *_videoPlayer;
    id<IESLiveOrientationConfig> _orientationConfig;
    UIView *_videoPlayerContainer;
    UIImageView *_firstFrameImage;
    UIView *_operationContainer;
    UIImageView *_pauseImageView;
}

@property (retain, nonatomic) IESLiveVideoPlayer *videoPlayer;
@property (retain, nonatomic) id<IESLiveOrientationConfig> orientationConfig;
@property (retain, nonatomic) UIView *videoPlayerContainer;
@property (retain, nonatomic) UIImageView *firstFrameImage;
@property (retain, nonatomic) UIView *operationContainer;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoPlayerDidLoadFirstFrame:(id)arg0;
- (void)videoPause;
- (id)pauseImageView;
- (void)setPauseImageView:(id)arg0;
- (void)setFirstFrameImage:(id)arg0;
- (id)firstFrameImage;
- (id)operationContainer;
- (void)setOperationContainer:(id)arg0;
- (id)orientationConfig;
- (void)setOrientationConfig:(id)arg0;
- (void)setupElementView;
- (void)setVideoPlayerContainer:(id)arg0;
- (id)videoPlayerContainer;
- (void)createVideoPlay;
- (void)trackClickWithPosition:(id)arg0;
- (void)forceUpdateToLandscape;
- (void)cleanupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)arg0 width:(double)arg1 widthMode:(unsigned long long)arg2 height:(double)arg3 heightMode:(unsigned long long)arg4;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (void).cxx_destruct;
- (void)fullScreen;

@end
