//
//     Generated by private class-dump
//

@class MASConstraint, NSArray, IESLiveSeekProgressIndicatorForMatch, UIView, NSMutableArray, NSNumber;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveSeekProgressBarForMatch : UIView {
    BOOL _isPaning;
    BOOL _enableReCalculate;
    id /* block */ _seekAction;
    double _progress;
    UIView *_matchWatchDurationLabel;
    id<IESLiveRoomServiceAdapter> _mixedRoom;
    id /* block */ _panGestureAnimationStart;
    id /* block */ _panGestureAnimationStop;
    MASConstraint *_leadingConstraint;
    MASConstraint *_trailingConstraint;
    IESLiveSeekProgressIndicatorForMatch *_progressIndicator;
    double _progressWidth;
    double _tmpProgress;
    double _touchBeginProgress;
    NSArray *_signModels;
    NSMutableArray *_signViews;
    long long _lastCount;
    NSNumber *_lastRemakeOrientation;
    MASConstraint *_panGestureLeadingConstraint;
    MASConstraint *_panGestureTrailingConstraint;
    UIView *_toolbarContainer;
    UIView *_profileContainer;
    UIView *_entranceContainer;
    UIView *_activityContainer;
    UIView *_publicScreenContainer;
    double _fixProgressWidth;
}

@property (nonatomic) double progressWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isPaning;
@property (nonatomic) double tmpProgress;
@property (nonatomic) double touchBeginProgress;
@property (retain, nonatomic) NSArray *signModels;
@property (retain, nonatomic) NSMutableArray *signViews;
@property (readonly, nonatomic) double seekPointHeight;
@property (nonatomic) long long lastCount;
@property (retain, nonatomic) NSNumber *lastRemakeOrientation;
@property (weak, nonatomic) MASConstraint *panGestureLeadingConstraint;
@property (weak, nonatomic) MASConstraint *panGestureTrailingConstraint;
@property (weak, nonatomic) UIView *toolbarContainer;
@property (weak, nonatomic) UIView *profileContainer;
@property (weak, nonatomic) UIView *entranceContainer;
@property (weak, nonatomic) UIView *activityContainer;
@property (weak, nonatomic) UIView *publicScreenContainer;
@property (nonatomic) BOOL enableReCalculate;
@property (nonatomic) double fixProgressWidth;
@property (copy, nonatomic) id /* block */ seekAction;
@property (weak, nonatomic) UIView *matchWatchDurationLabel;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> mixedRoom;
@property (copy, nonatomic) id /* block */ panGestureAnimationStart;
@property (copy, nonatomic) id /* block */ panGestureAnimationStop;
@property (retain, nonatomic) MASConstraint *leadingConstraint;
@property (retain, nonatomic) MASConstraint *trailingConstraint;
@property (retain, nonatomic) IESLiveSeekProgressIndicatorForMatch *progressIndicator;

- (void)loadSubviews;
- (id)activityContainer;
- (void)setActivityContainer:(id)arg0;
- (long long)lastCount;
- (void)setLastCount:(long long)arg0;
- (id)toolbarContainer;
- (void)setToolbarContainer:(id)arg0;
- (id)mixedRoom;
- (void)coloringProgressWithModels:(id)arg0;
- (id)signModels;
- (void)setMixedRoom:(id)arg0;
- (id)entranceContainer;
- (void)setEntranceContainer:(id)arg0;
- (id)profileContainer;
- (void)setProfileContainer:(id)arg0;
- (id)publicScreenContainer;
- (void)setPublicScreenContainer:(id)arg0;
- (void)updateWithOrientation:(BOOL)arg0;
- (void)remakeConstraintsWithOrientation:(BOOL)arg0;
- (void)colorWithSingleColor:(id)arg0;
- (void)onSeekBeginAnimation:(BOOL)arg0;
- (void)onSeekEndAnimation:(BOOL)arg0;
- (void)setSeekAction:(id /* block */)arg0;
- (void)setPanGestureAnimationStart:(id /* block */)arg0;
- (void)setPanGestureAnimationStop:(id /* block */)arg0;
- (void)handleIndicatorNodesHidden:(BOOL)arg0;
- (void)updateSignViewWithType:(long long)arg0;
- (void)setSignModels:(id)arg0;
- (id)signViews;
- (void)invokeLandscapeNewStyleSeekStartAnimation;
- (void)invokeLandscapeNewStyleSeekStopAnimation;
- (void)didPanGrogress:(id)arg0;
- (void)setIsPaning:(BOOL)arg0;
- (void)setTouchBeginProgress:(double)arg0;
- (double)touchBeginProgress;
- (void)setTmpProgress:(double)arg0;
- (double)tmpProgress;
- (id /* block */)panGestureAnimationStart;
- (id /* block */)panGestureAnimationStop;
- (void)setPanGestureLeadingConstraint:(id)arg0;
- (void)setPanGestureTrailingConstraint:(id)arg0;
- (id)panGestureLeadingConstraint;
- (id)panGestureTrailingConstraint;
- (id /* block */)seekAction;
- (void)didTapSign:(id)arg0;
- (double)seekPointHeight;
- (void)didTapProgress:(id)arg0;
- (void)dressupWithSkin:(id)arg0;
- (BOOL)isPaning;
- (void)setSignViews:(id)arg0;
- (id)lastRemakeOrientation;
- (void)setLastRemakeOrientation:(id)arg0;
- (void)setMatchWatchDurationLabel:(id)arg0;
- (void)didPanGrogress:(id)arg0 holderView:(id)arg1;
- (void)bindAttachingDIContext;
- (void)execSeekAction:(double)arg0 source:(unsigned long long)arg1 needSeek:(BOOL)arg2;
- (void)setFixProgressWidth:(double)arg0;
- (void)refreshDotUserInterfaceEnable:(BOOL)arg0;
- (void)setEnableReCalculate:(BOOL)arg0;
- (void)invokePortraitSeekStartAnimation;
- (void)invokePortraitSeekStopAnimation;
- (id)matchWatchDurationLabel;
- (void)calculateModelsStart:(id)arg0;
- (double)fixProgressWidth;
- (BOOL)enableReCalculate;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)init;
- (void)setTrailingConstraint:(id)arg0;
- (void).cxx_destruct;
- (id)trailingConstraint;
- (double)progress;
- (id)leadingConstraint;
- (void)setProgress:(double)arg0;
- (void)setLeadingConstraint:(id)arg0;
- (void)updateWithProgress:(double)arg0;
- (id)progressIndicator;
- (void)setProgressIndicator:(id)arg0;
- (double)progressWidth;
- (void)setProgressWidth:(double)arg0;

@end
