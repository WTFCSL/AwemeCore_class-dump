//
//     Generated by private class-dump
//

@class NSDate, NSTimer, UIView, NSString, RTVVoipUserPreviewView, RTVVoipTracker, NSMutableArray, UILabel, RTVVoipSession;
@protocol RTVVoipStorageAreaInterface, RTVVoipConfigureManagerInterface, RTVVoipPerformanceMonitor, RxInjector, RTVXRControllerInjector, RTVXRStateRecorder, RTVVoipContextManagerInterface;

@interface RTVVoipPreviewView : UIView <RTVAnimatorViewPanGestureRecognizerDelegate, RTVVoipSessionDelegate, RTVVoipSessionObserver, RTVXREngineDelegate, RTVXRPreviewInterface> {
    BOOL _isSelfMutedVideo;
    BOOL _isOtherMutedVideo;
    BOOL _shouldAbandonMuteVideoCallback;
    BOOL _active;
    long long _currentPreviewLayout;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVVoipConfigureManagerInterface> _configureManager;
    id<RTVVoipContextManagerInterface> _contextManager;
    id<RTVXRStateRecorder> _xrStateRecorder;
    UIView *_selfPreviewView;
    RTVVoipUserPreviewView *_selfPreviewViewContainerView;
    UIView *_otherPreviewView;
    RTVVoipUserPreviewView *_otherPreviewViewContainerView;
    UIView *_indicatorView;
    UILabel *_dragToChangelayoutTipLabel;
    RTVVoipSession *_voipSession;
    UIView *_otherVideoLastFrameView;
    UIView *_selfPreviewLastFrameView;
    id<RTVVoipStorageAreaInterface> _storageArea;
    long long _previousPreviewLayout;
    id<RTVVoipPerformanceMonitor> _performanceMonitor;
    NSTimer *_dragToChangeLayoutTipTimer;
    long long _track_defaultLayout;
    long long _track_previousLayout;
    NSDate *_track_beginDate;
    RTVVoipTracker *_tracker;
    NSMutableArray *_gestureRecognizerArr;
    long long _previousStatusBarOrientation;
    struct CGSize { double width; double height; } _otherPreviewViewNarrowSize;
    struct CGSize { double width; double height; } _selfPreviewViewNarrowSize;
    struct CGPoint { double x; double y; } _narrowViewOriginBeforeContentNarrow;
    struct CGSize { double width; double height; } _previousSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selfPreviewFrameBeforeRecording;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _otherPreviewFrameBeforeRecording;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (retain, nonatomic) UIView *selfPreviewView;
@property (readonly, nonatomic) RTVVoipUserPreviewView *selfPreviewViewContainerView;
@property (retain, nonatomic) UIView *otherPreviewView;
@property (readonly, nonatomic) RTVVoipUserPreviewView *otherPreviewViewContainerView;
@property (readonly, nonatomic) UIView *indicatorView;
@property (readonly, nonatomic) UILabel *dragToChangelayoutTipLabel;
@property (weak, nonatomic) RTVVoipSession *voipSession;
@property (retain, nonatomic) UIView *otherVideoLastFrameView;
@property (retain, nonatomic) UIView *selfPreviewLastFrameView;
@property (retain, nonatomic) id<RTVVoipStorageAreaInterface> storageArea;
@property (nonatomic) long long currentPreviewLayout;
@property (nonatomic) long long previousPreviewLayout;
@property (readonly, nonatomic) struct CGSize { double width; double height; } otherPreviewViewNarrowSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } selfPreviewViewNarrowSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selfPreviewFrameBeforeRecording;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } otherPreviewFrameBeforeRecording;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } narrowViewOriginBeforeContentNarrow;
@property (readonly, nonatomic) id<RTVVoipPerformanceMonitor> performanceMonitor;
@property (readonly, nonatomic) NSTimer *dragToChangeLayoutTipTimer;
@property (nonatomic) long long track_defaultLayout;
@property (nonatomic) long long track_previousLayout;
@property (retain, nonatomic) NSDate *track_beginDate;
@property (readonly, nonatomic) RTVVoipTracker *tracker;
@property (nonatomic) BOOL isSelfMutedVideo;
@property (nonatomic) BOOL isOtherMutedVideo;
@property (nonatomic) BOOL shouldAbandonMuteVideoCallback;
@property (retain, nonatomic) NSMutableArray *gestureRecognizerArr;
@property (nonatomic) BOOL active;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) long long previousStatusBarOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)__handleTapGesture:(id)arg0;
- (void)__createComponents;
- (void)__addObserver;
- (void)__createIndicatorView;
- (id)controllerInjector;
- (id)storageArea;
- (id)configureManager;
- (id)xrStateRecorder;
- (void)notifyChangeActive:(BOOL)arg0;
- (void)rtvSession:(id)arg0 statusDidChangeTo:(long long)arg1 fromStatus:(long long)arg2;
- (void)voipSessionVoipInfoPrepareReady:(id)arg0;
- (id)voipSession;
- (void)xrEngine:(id)arg0 onUserWillLeave:(id)arg1;
- (void)xrEngine:(id)arg0 didUserOffline:(id)arg1 reason:(unsigned long long)arg2;
- (void)xrEngine:(id)arg0 didRenderFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })arg1;
- (void)xrEngine:(id)arg0 didReceiveFirstRemoteVideoFrameOfUid:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)__configureComponents;
- (id)selfPreviewView;
- (void)setStorageArea:(id)arg0;
- (void)switchLayout:(BOOL)arg0 animator:(id)arg1 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (id)animatorByGestureInvoke:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })gustureVisibleAreaWithGesture:(id)arg0;
- (id)performanceMonitor;
- (void)setVoipSession:(id)arg0;
- (void)__showRemoteVideoLastFrameIfNeeded;
- (id)switchToPreviewLayoutType:(long long)arg0 animated:(BOOL)arg1;
- (long long)currentPreviewLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewViewFrameForParticipator:(id)arg0;
- (id)averageColorRGBForSelf:(BOOL)arg0;
- (void)__createPreviews;
- (void)setPreviousStatusBarOrientation:(long long)arg0;
- (void)__setupComponentLayout;
- (void)__refreshDragToChangeLayoutTipLabelLayout;
- (long long)previousStatusBarOrientation;
- (void)setPreviousPreviewLayout:(long long)arg0;
- (void)__track_updateTrackLayoutInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__defaultNarrowViewFrame;
- (id)otherPreviewView;
- (BOOL)isOtherMutedVideo;
- (void)setShouldAbandonMuteVideoCallback:(BOOL)arg0;
- (void)setIsSelfMutedVideo:(BOOL)arg0;
- (void)setIsOtherMutedVideo:(BOOL)arg0;
- (void)__setupVoipSessionPreview;
- (void)__removeSelfPreviewLastFrameIfNeed;
- (void)__removeRemoteVideoLastFrameViewIfNeeded;
- (void)__didRenderFirstLocalVideoFrameWithDelay:(double)arg0;
- (void)__addObserverForParticipator:(id)arg0;
- (void)__showMuteAlertIfNeeded:(BOOL)arg0 uid:(id)arg1;
- (BOOL)shouldAbandonMuteVideoCallback;
- (void)__track_switchLayout:(long long)arg0;
- (id)selfPreviewViewContainerView;
- (id)otherPreviewViewContainerView;
- (void)setCurrentPreviewLayout:(long long)arg0;
- (id)__switchToPreviewLayoutType:(long long)arg0 animated:(BOOL)arg1;
- (id)__switchToNoneLayoutWithAnimated:(BOOL)arg0;
- (id)__switchToSelfLargeLayoutWithAnimated:(BOOL)arg0;
- (id)__switchToOtherLargeLayoutWithAnimated:(BOOL)arg0;
- (void)__showDragToChangeLayoutTipViewIfNeeded;
- (id)__switchToSelfTopLayoutWithAnimated:(BOOL)arg0;
- (id)__switchToOtherTopLayoutWithAnimated:(BOOL)arg0;
- (void)setTrack_previousLayout:(long long)arg0;
- (void)__showSelfPreviewLastFrameIfNeed;
- (long long)track_defaultLayout;
- (long long)track_previousLayout;
- (id)track_beginDate;
- (void)setTrack_beginDate:(id)arg0;
- (void)setTrack_defaultLayout:(long long)arg0;
- (void)__createTipView;
- (void)__createPreviewGestures;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__defaultOtherPreviewFrame;
- (id)gestureRecognizerArr;
- (void)__track_layoutStayTime;
- (void)__resetContainerView:(id)arg0;
- (void)__refreshSelfPreviewContainerHiddenStatusIfNeeded;
- (void)__renderVoipSessionPreview:(id)arg0;
- (id)__switchToLargeAndSmallWindowWithLargeView:(id)arg0 smallView:(id)arg1 animated:(BOOL)arg2;
- (id)__switchToTopAndBottomWindowWithTopView:(id)arg0 bottomView:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize { double x0; double x1; })selfPreviewViewNarrowSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__fixSmallViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)__updateContainerView:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (id)__animatorForLayoutChange;
- (BOOL)__isTopAndBottomWindowStatus;
- (BOOL)__isLocationInTopAndBottomWindowArea:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)__isTopAndBottomWindowDraggingStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__bottomScreenViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__topScreenViewFrame;
- (BOOL)__isLargeAndSmallWindowDraggingStatus;
- (void)__invalidataDragToChangeLayoutTipTimer;
- (void)__hideDragToChangeLayoutTipView;
- (id)__saveShowDragToChangeLayoutTipTimes:(long long)arg0;
- (id)__shouldShowDragToChangeLayoutTipView;
- (id)dragToChangelayoutTipLabel;
- (void)__fireDragToChangeLayoutTipTimer;
- (id)__saveIncreaseDragToChangeLayoutShowTimes;
- (id)__dragToChangeLayoutTipShowedTimes;
- (id)otherVideoLastFrameView;
- (void)setOtherVideoLastFrameView:(id)arg0;
- (id)selfPreviewLastFrameView;
- (void)setSelfPreviewLastFrameView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__topIndicatorFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__bottomIndicatorFrame;
- (void)__dragChangeLayoutFeedBack;
- (id)__animatorForDraggingSwitchTopAndBottomWindowPostionWithGesture:(id)arg0;
- (BOOL)__canGestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)__gestureAnimatorForChangeToTopAndBottomWindowDraggingFromTopAndBottomWindowStatusWithGesture:(id)arg0;
- (id)__gestureAnimatorForTopAndBottomWindowDraggingWithGesture:(id)arg0;
- (id)__gestureAnimatorForChangeToTopAndBottomWindowDraggingFromLargeAndSmallWindowStatusWithGesture:(id)arg0;
- (id)__gestureAnimatorForChangeToLargeAndSmallWindowDraggingWithGesture:(id)arg0;
- (id)__gestureAnimatorForTopAndBottomWindowEndDraggingWithGesture:(id)arg0;
- (id)__gestureAnimatorForLargeAndSmallWindowEndDraggingWithGesture:(id)arg0;
- (void)__updateCurrentPreviewLayoutStatusWithPanGesture:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__suitableFrameInContainerSize:(struct CGSize { double x0; double x1; })arg0 ratio:(double)arg1;
- (void)__changeBackgroundColorWhenOnTheCall;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })narrowViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentPreviewFrame;
- (BOOL)__isLargeAndSmallWindowStatus;
- (BOOL)__isChangeToSmallPreview:(id)arg0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)__resetSDKPreviewLayout:(id)arg0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 contentMode:(long long)arg2;
- (void)setSelfPreviewView:(id)arg0;
- (void)setOtherPreviewView:(id)arg0;
- (long long)previousPreviewLayout;
- (struct CGSize { double x0; double x1; })otherPreviewViewNarrowSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selfPreviewFrameBeforeRecording;
- (void)setSelfPreviewFrameBeforeRecording:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })otherPreviewFrameBeforeRecording;
- (void)setOtherPreviewFrameBeforeRecording:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGPoint { double x0; double x1; })narrowViewOriginBeforeContentNarrow;
- (id)dragToChangeLayoutTipTimer;
- (BOOL)isSelfMutedVideo;
- (void)setGestureRecognizerArr:(id)arg0;
- (id)tracker;
- (BOOL)active;
- (void).cxx_destruct;
- (void)setPreviousSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)injector;
- (id)indicatorView;
- (struct CGSize { double x0; double x1; })previousSize;
- (void)setActive:(BOOL)arg0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)contextManager;

@end
