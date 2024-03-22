//
//     Generated by private class-dump
//

@class UIImageView, NSString, UIView;
@protocol RTVUserProfileManagerInterface, RTVXRCaptureController, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector, RTVVoipResourceFetcherInterface;

@interface RTVInteractionLandscapeMicButton : UIControl <RTVXRControllerInterface, RTVXRCaptureControllerObserver, RTVInteractionLandscapeMicButton> {
    BOOL _isVolumeIndicatorAnimating;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVXRRoomSessionControllerInterface> _roomController;
    id<RTVVoipResourceFetcherInterface> _resourceFetcher;
    id<RTVXRCaptureController> _captureController;
    id<RTVUserProfileManagerInterface> _profileManager;
    UIView *_backgroundView;
    UIImageView *_iconImageView;
    UIView *_volumeIndicatorCoverView;
    UIView *_volumeIndicatorView;
    UIView *_volumeIndicatorMaskView;
    double _volumeAnimationTimestamp;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UIView *volumeIndicatorCoverView;
@property (readonly, nonatomic) UIView *volumeIndicatorView;
@property (readonly, nonatomic) UIView *volumeIndicatorMaskView;
@property (nonatomic) BOOL isVolumeIndicatorAnimating;
@property (nonatomic) double volumeAnimationTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)resourceFetcher;
- (void)__createComponents;
- (id)controllerInjector;
- (void)renderBusinessHandler:(id)arg0 context:(id)arg1;
- (id)roomController;
- (BOOL)microphoneIsMuted;
- (void)hideBackground:(BOOL)arg0;
- (void)enableSelfResponseToClick;
- (void)xrCaptureController:(id)arg0 didChangeToMicrophoneMuted:(BOOL)arg1;
- (void)xrCaptureController:(id)arg0 didReceiveSpeakerAudioVolumUpdates:(id)arg1 totalVolume:(unsigned long long)arg2;
- (void)__handleMuteMicrophone;
- (id)volumeIndicatorView;
- (id)volumeIndicatorMaskView;
- (id)volumeIndicatorCoverView;
- (void)__updateVolumeIndicatorProgressViewProgress:(double)arg0;
- (BOOL)isVolumeIndicatorAnimating;
- (void)setVolumeAnimationTimestamp:(double)arg0;
- (void)setIsVolumeIndicatorAnimating:(BOOL)arg0;
- (double)volumeAnimationTimestamp;
- (void)__refreshMicUIState;
- (void)__updateVolumeProgressTo:(double)arg0 animated:(BOOL)arg1;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)injector;
- (id)captureController;
- (void)layoutSubviews;
- (id)iconImageView;
- (id)profileManager;

@end