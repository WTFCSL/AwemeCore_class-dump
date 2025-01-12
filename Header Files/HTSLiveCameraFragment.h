//
//     Generated by private class-dump
//

@class HTSLiveToolbarItem, NSString;
@protocol IESLivePerfSampler, IESLiveRealStreamingProvider;

@interface HTSLiveCameraFragment : IESLiveRoomComponent <IESLiveAnchorCameraRouter, IESLiveVRSwitchRouter> {
    BOOL _enableMirror;
    BOOL _enableTorch;
    BOOL _mirrored;
    BOOL _isLinking;
    BOOL _resumeVRLiveMode;
    id<IESLiveRealStreamingProvider> _streamProvider;
    id<IESLivePerfSampler> _perfSampler;
    long long _cameraPosition;
    HTSLiveToolbarItem *_vrLiveSwitchItem;
}

@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL enableMirror;
@property (nonatomic) BOOL enableTorch;
@property (nonatomic) BOOL mirrored;
@property (nonatomic) BOOL isLinking;
@property (nonatomic) BOOL resumeVRLiveMode;
@property (nonatomic) long long cameraPosition;
@property (retain, nonatomic) HTSLiveToolbarItem *vrLiveSwitchItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (BOOL)isEnableMirror;
- (BOOL)isCameraMirrored;
- (void)toggleCameraMirror;
- (BOOL)resumeVRLiveMode;
- (void)linkForceSwitchVRMode;
- (void)linkResumeVRMode;
- (void)loadToolbarItem;
- (BOOL)enableMirror;
- (void)mirrorButtonClicked;
- (void)toggleReversed;
- (void)setEnableMirror:(BOOL)arg0;
- (void)setEnableTorch:(BOOL)arg0;
- (BOOL)enableTorch;
- (void)loadVRLiveSwitchItem;
- (void)setVrLiveSwitchItem:(id)arg0;
- (id)vrLiveSwitchItem;
- (BOOL)isLinking;
- (void)switchCameraConfigWithVRLiveMode:(unsigned long long)arg0;
- (void)trackVRCameraSwitchItemClickType:(id)arg0;
- (BOOL)toggleMirrored;
- (void)executeAccessibilityPostIfNeeded;
- (void)setIsLinking:(BOOL)arg0;
- (void)setResumeVRLiveMode:(BOOL)arg0;
- (long long)cameraPosition;
- (void)setMirrored:(BOOL)arg0;
- (void)setStreamProvider:(id)arg0;
- (void).cxx_destruct;
- (id)streamProvider;
- (BOOL)mirrored;
- (void)setCameraPosition:(long long)arg0;
- (void)trackEventWithName:(id)arg0;

@end
