//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, IESLivePlaybackSeekProgressIndicator, MASConstraint, UIPanGestureRecognizer, NSMutableArray, NSNumber;

@interface IESLivePlaybackSeekProgressBar : UIView <UIGestureRecognizerDelegate> {
    BOOL _trailFinish;
    BOOL _isPaning;
    BOOL _isHideBeforeSeekForPlayerControl;
    id /* block */ _seekAction;
    id /* block */ _accessibilityAction;
    double _progress;
    id /* block */ _enableSeekWhenShow;
    id /* block */ _panGestureAnimationStart;
    id /* block */ _panGestureAnimationStop;
    MASConstraint *_leadingConstraint;
    MASConstraint *_trailingConstraint;
    double _progressWidth;
    double _tmpProgress;
    double _touchBeginProgress;
    NSArray *_signModels;
    IESLivePlaybackSeekProgressIndicator *_progressIndicator;
    NSMutableArray *_signViews;
    long long _lastCount;
    NSNumber *_lastRemakeOrientation;
    MASConstraint *_panGestureLeadingConstraint;
    MASConstraint *_panGestureTrailingConstraint;
    UIView *_toolbarContainer;
    UIView *_profileContainer;
    UIView *_entranceContainer;
    UIPanGestureRecognizer *_panGesture;
}

@property (nonatomic) double progressWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isPaning;
@property (nonatomic) double tmpProgress;
@property (nonatomic) double touchBeginProgress;
@property (retain, nonatomic) NSArray *signModels;
@property (retain, nonatomic) IESLivePlaybackSeekProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSMutableArray *signViews;
@property (readonly, nonatomic) double seekPointHeight;
@property (nonatomic) long long lastCount;
@property (retain, nonatomic) NSNumber *lastRemakeOrientation;
@property (retain, nonatomic) MASConstraint *panGestureLeadingConstraint;
@property (retain, nonatomic) MASConstraint *panGestureTrailingConstraint;
@property (weak, nonatomic) UIView *toolbarContainer;
@property (weak, nonatomic) UIView *profileContainer;
@property (weak, nonatomic) UIView *entranceContainer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isHideBeforeSeekForPlayerControl;
@property (copy, nonatomic) id /* block */ seekAction;
@property (copy, nonatomic) id /* block */ accessibilityAction;
@property (nonatomic) BOOL trailFinish;
@property (copy, nonatomic) id /* block */ enableSeekWhenShow;
@property (copy, nonatomic) id /* block */ panGestureAnimationStart;
@property (copy, nonatomic) id /* block */ panGestureAnimationStop;
@property (retain, nonatomic) MASConstraint *leadingConstraint;
@property (retain, nonatomic) MASConstraint *trailingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadSubviews;
- (void)handleAccessibilityWithIncrease:(BOOL)arg0;
- (long long)lastCount;
- (void)setLastCount:(long long)arg0;
- (id /* block */)accessibilityAction;
- (void)setAccessibilityAction:(id /* block */)arg0;
- (id)toolbarContainer;
- (void)setToolbarContainer:(id)arg0;
- (void)coloringProgressWithModels:(id)arg0;
- (id)signModels;
- (id)entranceContainer;
- (void)setEntranceContainer:(id)arg0;
- (id)profileContainer;
- (void)setProfileContainer:(id)arg0;
- (void)updateWithOrientation:(BOOL)arg0;
- (void)setIsHideBeforeSeekForPlayerControl:(BOOL)arg0;
- (BOOL)isHideBeforeSeekForPlayerControl;
- (void)remakeConstraintsWithOrientation:(BOOL)arg0;
- (void)colorWithSingleColor:(id)arg0;
- (void)onSeekBeginAnimation:(BOOL)arg0;
- (void)onSeekEndAnimation:(BOOL)arg0;
- (void)setEnableSeekWhenShow:(id /* block */)arg0;
- (void)setSeekAction:(id /* block */)arg0;
- (void)setPanGestureAnimationStart:(id /* block */)arg0;
- (void)setPanGestureAnimationStop:(id /* block */)arg0;
- (void)handleIndicatorNodesHidden:(BOOL)arg0;
- (void)updateSignViewWithType:(long long)arg0;
- (void)setSignModels:(id)arg0;
- (id)signViews;
- (void)invokePortraitForFullScreenSeekStartAnimation;
- (void)invokeLandscapeNewStyleSeekStartAnimation;
- (void)invokePortraitNewStyleSeekStartAnimation;
- (void)invokePortraitForFullScreenSeekStopAnimation;
- (void)invokeLandscapeNewStyleSeekStopAnimation;
- (void)invokePortraitNewStyleSeekStopAnimation;
- (void)didPanGrogress:(id)arg0;
- (void)setIsPaning:(BOOL)arg0;
- (void)setTouchBeginProgress:(double)arg0;
- (double)touchBeginProgress;
- (void)setTmpProgress:(double)arg0;
- (void)execSeekAction:(double)arg0 needSeek:(BOOL)arg1;
- (double)tmpProgress;
- (id /* block */)panGestureAnimationStart;
- (id /* block */)panGestureAnimationStop;
- (void)setPanGestureLeadingConstraint:(id)arg0;
- (void)setPanGestureTrailingConstraint:(id)arg0;
- (id)panGestureLeadingConstraint;
- (id)panGestureTrailingConstraint;
- (id /* block */)seekAction;
- (BOOL)trailFinish;
- (void)didTapSign:(id)arg0;
- (double)seekPointHeight;
- (id /* block */)enableSeekWhenShow;
- (void)didTapProgress:(id)arg0;
- (void)dressupWithSkin:(id)arg0;
- (void)setTrailFinish:(BOOL)arg0;
- (BOOL)isPaning;
- (void)setSignViews:(id)arg0;
- (id)lastRemakeOrientation;
- (void)setLastRemakeOrientation:(id)arg0;
- (id)init;
- (void)setTrailingConstraint:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)trailingConstraint;
- (double)progress;
- (id)leadingConstraint;
- (void)accessibilityIncrement;
- (void)setProgress:(double)arg0;
- (BOOL)isAccessibilityElement;
- (void)setLeadingConstraint:(id)arg0;
- (void)updateWithProgress:(double)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (id)progressIndicator;
- (void)setProgressIndicator:(id)arg0;
- (double)progressWidth;
- (void)setProgressWidth:(double)arg0;

@end
