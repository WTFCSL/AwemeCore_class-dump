//
//     Generated by private class-dump
//

@class IESLivePlaybackPictureScaleGuideView, NSString, IESLivePlaybackPictureScaleStore, UIPinchGestureRecognizer, UIPanGestureRecognizer, UIButton;

@interface IESLivePlaybackLandscapePictureScaleFragment : IESLivePlaybackComponent <UIGestureRecognizerDelegate, IESLivePlaybackOrientationActions, IESLivePlaybackCustomAutoHideAnimService, IESLivePlaybackLandscapePictureScaleRouter, IESLivePlaybackLandscapeLockAction, IESLivePlaybackScalePanelAction> {
    BOOL _isComponentsHide;
    BOOL _allowGesture;
    BOOL _isShowingGuide;
    BOOL _hasEnlarge;
    float _enlargeRatio;
    float _previousEnlargeRatio;
    float _movex;
    float _movey;
    IESLivePlaybackPictureScaleStore *_store;
    UIPinchGestureRecognizer *_pinchGesture;
    UIPanGestureRecognizer *_panGesture;
    UIButton *_resetButton;
    IESLivePlaybackPictureScaleGuideView *_pictureScaleGuideView;
    double _resetScale;
    double _enlargeStart;
}

@property (retain, nonatomic) IESLivePlaybackPictureScaleStore *store;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIButton *resetButton;
@property (nonatomic) BOOL isComponentsHide;
@property (nonatomic) BOOL allowGesture;
@property (retain, nonatomic) IESLivePlaybackPictureScaleGuideView *pictureScaleGuideView;
@property (nonatomic) double resetScale;
@property (nonatomic) BOOL isShowingGuide;
@property (nonatomic) double enlargeStart;
@property (nonatomic) float enlargeRatio;
@property (nonatomic) float previousEnlargeRatio;
@property (nonatomic) float movex;
@property (nonatomic) float movey;
@property (nonatomic) BOOL hasEnlarge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onOrientationTransitionBegin:(long long)arg0;
- (void)onPan:(id)arg0;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)setIsShowingGuide:(BOOL)arg0;
- (BOOL)isShowingGuide;
- (void)componentBindService;
- (void)componentCreate;
- (double)resetScale;
- (void)landscapeViewsTransformToHidden:(BOOL)arg0;
- (BOOL)isComponentsHide;
- (void)setIsComponentsHide:(BOOL)arg0;
- (void)resetRecordedIfNeed:(BOOL)arg0;
- (double)currentPictureScale;
- (void)updatePictureScale:(double)arg0;
- (void)bindStore;
- (void)setPreviousEnlargeRatio:(float)arg0;
- (id)previousEnlargeRatioNum;
- (id)moveXDistance;
- (id)moveYDistance;
- (void)vsTrackEvent:(id)arg0 extraParams:(id)arg1;
- (void)scaleStatusChange;
- (void)setHasEnlarge:(BOOL)arg0;
- (BOOL)shouldShowResetButton;
- (void)showScaleGesGuide;
- (BOOL)hasEnlarge;
- (void)setEnlargeRatio:(float)arg0;
- (id)curEnlargeRatioNum;
- (void)setEnlargeStart:(double)arg0;
- (void)setMovex:(float)arg0;
- (void)setMovey:(float)arg0;
- (float)movex;
- (float)movey;
- (BOOL)shouldActivatePinchGesture;
- (BOOL)shouldActivatePanGesture;
- (void)resetButtonClick:(id)arg0;
- (double)enlargeStart;
- (float)enlargeRatio;
- (float)previousEnlargeRatio;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)scaleInAction:(BOOL)arg0;
- (void)lockStatusChange:(BOOL)arg0;
- (BOOL)isScaleGuideHidden;
- (BOOL)allowShowScale;
- (void)setAllowGesture:(BOOL)arg0;
- (id)pictureScaleGuideView;
- (BOOL)allowGesture;
- (void)setResetScale:(double)arg0;
- (void)setPictureScaleGuideView:(id)arg0;
- (void).cxx_destruct;
- (id)pinchGesture;
- (id)store;
- (void)setStore:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setPinchGesture:(id)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setupUI;
- (id)resetButton;
- (void)setResetButton:(id)arg0;
- (void)setupGestures;
- (void)onPinch:(id)arg0;

@end