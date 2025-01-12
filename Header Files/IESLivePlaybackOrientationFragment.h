//
//     Generated by private class-dump
//

@class HTSLiveRoomAuthStatus, NSString, UIView, NSDate, UIButton;

@interface IESLivePlaybackOrientationFragment : IESLivePlaybackComponent <IESVSOrientationRouter, IESVSVideoPlayAction, IESLivePlaybackAutoRotateAction, IESLivePlaybackRoomAction, IESLivePlaybackOrientationInnerService, IESLivePlaybackSeekAction, IESLivePlaybackPaywallFreeTrialAction, IESLivePaidStreamActionAdapter> {
    BOOL _sharePanelShow;
    BOOL _isiPhoneAutoRotate;
    BOOL _isRotateByUserClick;
    BOOL _seriesRotate;
    BOOL _hasTrackLandscapeFullScreen;
    BOOL _hasTrackPortraitFullScreen;
    BOOL _isSameOrientation;
    BOOL _isFirstOrientationEnable;
    BOOL _isFirstFullScreenEnable;
    HTSLiveRoomAuthStatus *_roomAuth;
    long long _orientation;
    UIButton *_fullScreenBtn;
    UIView *_blankPlaceHolderBtn;
    NSDate *_landscapeDuration;
    long long _originOrientation;
    long long _tempCurrentOrientation;
}

@property (retain, nonatomic) HTSLiveRoomAuthStatus *roomAuth;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIButton *fullScreenBtn;
@property (retain, nonatomic) UIView *blankPlaceHolderBtn;
@property (retain, nonatomic) NSDate *landscapeDuration;
@property (nonatomic) BOOL sharePanelShow;
@property (nonatomic) BOOL isiPhoneAutoRotate;
@property (nonatomic) BOOL isRotateByUserClick;
@property (nonatomic) BOOL seriesRotate;
@property (nonatomic) long long originOrientation;
@property (nonatomic) BOOL hasTrackLandscapeFullScreen;
@property (nonatomic) BOOL hasTrackPortraitFullScreen;
@property (nonatomic) long long tempCurrentOrientation;
@property (nonatomic) BOOL isSameOrientation;
@property (nonatomic) BOOL isFirstOrientationEnable;
@property (nonatomic) BOOL isFirstFullScreenEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomAuth;
- (id)fullScreenBtn;
- (void)setFullScreenBtn:(id)arg0;
- (void)setOriginOrientation:(long long)arg0;
- (long long)originOrientation;
- (void)deviceOrientationDidChange;
- (void)componentDidMount;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (void)componentWillUnmount;
- (void)componentBindService;
- (void)forceUpdateToOrientation:(long long)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)paidStreamTrialDidStart:(long long)arg0;
- (void)paidStreamTrialDidFinish:(long long)arg0 reason:(unsigned long long)arg1;
- (void)paidStreamTrialDidPaid:(long long)arg0;
- (void)paidStreamTrialDidPromised:(long long)arg0;
- (void)setRoomAuth:(id)arg0;
- (BOOL)sharePanelShow;
- (void)setSharePanelShow:(BOOL)arg0;
- (void)addDeviceOrientationChangeNoti;
- (void)didAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)screenWillBeginRotation;
- (void)screenDidEndRotation;
- (BOOL)_isAutoOrientationChangeForbidden;
- (id)landscapeDuration;
- (void)setLandscapeDuration:(id)arg0;
- (void)setupFullScreenButton;
- (void)onSeekStart;
- (void)onSeekEnd;
- (void)forceUpdateToOrientation:(long long)arg0 completion:(id /* block */)arg1;
- (void)forceUpdateToOrientation:(long long)arg0 byUserClick:(BOOL)arg1;
- (long long)originOrientationForIpad;
- (void)recordCurrentOrientationIfNecessary;
- (BOOL)isAutoOrientationChangeForbidden;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)streamWillChangeWithEpisode:(id)arg0;
- (void)streamChangedWithEpisode:(id)arg0;
- (BOOL)usePadNewStyle;
- (void)fullScreenBtnDidClick;
- (void)componentWillMount;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)onDeviceAutoRotate;
- (void)freeTrialDidStart;
- (void)freeTrialDidFinish;
- (void)freeTrialDidPaied;
- (void)promiseDidSuccess;
- (void)freeTrialDidLeave;
- (BOOL)p_isVertical;
- (void)setTempCurrentOrientation:(long long)arg0;
- (void)setIsFirstOrientationEnable:(BOOL)arg0;
- (long long)tempCurrentOrientation;
- (void)updateVisible;
- (void)screenWillBeginRotationWithTargetInterfaceOrientation:(long long)arg0;
- (void)safe_makeConstraints:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)p_hideFullBtnInVertical;
- (BOOL)isiPhoneAutoRotate;
- (void)setIsiPhoneAutoRotate:(BOOL)arg0;
- (void)setIsRotateByUserClick:(BOOL)arg0;
- (BOOL)seriesRotate;
- (void)setSeriesRotate:(BOOL)arg0;
- (BOOL)isFirstOrientationEnable;
- (void)setIsSameOrientation:(BOOL)arg0;
- (BOOL)isSameOrientation;
- (BOOL)isFirstFullScreenEnable;
- (void)setIsFirstFullScreenEnable:(BOOL)arg0;
- (id)blankPlaceHolderBtn;
- (void)switchOrientation;
- (void)p_newStylemakeConstraints:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)trackPadNewFullScreenButtonShow;
- (void)trackPadNewFullScreenButtonClick;
- (void)setBlankPlaceHolderBtn:(id)arg0;
- (BOOL)isRotateByUserClick;
- (BOOL)hasTrackLandscapeFullScreen;
- (void)setHasTrackLandscapeFullScreen:(BOOL)arg0;
- (BOOL)hasTrackPortraitFullScreen;
- (void)setHasTrackPortraitFullScreen:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setOrientation:(long long)arg0;

@end
