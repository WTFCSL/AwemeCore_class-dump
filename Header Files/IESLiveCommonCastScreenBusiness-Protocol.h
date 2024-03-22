//
//     Generated by private class-dump
//

@protocol IESLiveCommonCastScreenBusinessDelegate;

@protocol IESLiveCommonCastScreenBusiness <NSObject>

@property (weak, nonatomic) id<IESLiveCommonCastScreenBusinessDelegate> castDelegate;

- (long long)screenCastType;
- (long long)castScreenStrategy;
- (id)castScreenIdentifier;
- (void)setCastDelegate:(id)arg0;
- (void)forceStopCastScreenWithRunnerResponse:(id)arg0 continueBlock:(id /* block */)arg1;
- (id)castDelegate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamVideoInputRatio;
- (BOOL)shouldDisableInteractionItem;
- (id)castScreenComponentView;
- (long long)businessType;

@optional

- (id)castScreenIcon;
- (BOOL)shouldAddCameraPreviewInput;
- (void)setupGuidePanel:(id)arg0;
- (BOOL)setupCloseAlertShouldShow;
- (id)castScreenSuccessToast;
- (void)changeScreenCastUIStatus:(long long)arg0;
- (void)changeScreenCastUIStatusWhenReturnButtonClicked;
- (id)anchorCameraPreviewRatioTuple;
- (id)castBackgroundImage;
- (id)castBackgroundImageURL;
- (id)interactCastInfo;
- (id)interactCameraPreview;
- (id)castScreenMinimizeToast;
- (id)castBusinessIconURL;
- (int)profile;
- (id)appID;
- (struct __CVBuffer { } *)fetchStreamFrameWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end