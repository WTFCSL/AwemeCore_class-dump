//
//     Generated by private class-dump
//

@class AWEMVChannelProgressPreviewView, AWEAwemeModel, UIView, AWEMVChannelPlayerCardContext;
@protocol AWEMVChannelProgressViewDelegate;

@interface AWEMVChannelProgressView : UIView {
    id<AWEMVChannelProgressViewDelegate> _delegate;
    unsigned long long _sliderState;
    AWEAwemeModel *_model;
    AWEMVChannelPlayerCardContext *_context;
    double _playTime;
    double _totalTime;
    double _playTimeBeforeDrag;
    UIView *_playedView;
    UIView *_progressContainer;
    UIView *_touchingPlayedView;
    UIView *_touchingThumbView;
    UIView *_touchingContainer;
    UIView *_touchingEffectView;
    AWEMVChannelProgressPreviewView *_previewContainer;
    double _lastPlayTime;
    double _seekingToTime;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEMVChannelPlayerCardContext *context;
@property (nonatomic) double playTime;
@property (nonatomic) double totalTime;
@property (nonatomic) double playTimeBeforeDrag;
@property (retain, nonatomic) UIView *playedView;
@property (retain, nonatomic) UIView *progressContainer;
@property (retain, nonatomic) UIView *touchingPlayedView;
@property (retain, nonatomic) UIView *touchingThumbView;
@property (retain, nonatomic) UIView *touchingContainer;
@property (retain, nonatomic) UIView *touchingEffectView;
@property (retain, nonatomic) AWEMVChannelProgressPreviewView *previewContainer;
@property (nonatomic) double lastPlayTime;
@property (nonatomic) unsigned long long sliderState;
@property (nonatomic) double seekingToTime;
@property (weak, nonatomic) id<AWEMVChannelProgressViewDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (double)lastPlayTime;
- (void)setLastPlayTime:(double)arg0;
- (void)setPlayTime:(double)arg0;
- (void)setPreviewContainer:(id)arg0;
- (id)playedView;
- (void)setPlayedView:(id)arg0;
- (void)refreshPlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (id)formateCount:(id)arg0;
- (void)handleProgressViewPanBegin:(double)arg0;
- (void)handleProgressViewPanEnd:(double)arg0;
- (void)updateWithModel:(id)arg0 currentPlayTime:(double)arg1 context:(id)arg2;
- (void)updateProgressSliderState:(unsigned long long)arg0;
- (void)updateWithPlayTime:(double)arg0 canPlayTime:(double)arg1 animated:(BOOL)arg2;
- (unsigned long long)sliderState;
- (id)progressContainer;
- (id)touchingEffectView;
- (id)touchingContainer;
- (id)touchingPlayedView;
- (id)touchingThumbView;
- (void)setSliderState:(unsigned long long)arg0;
- (void)setPlayTimeBeforeDrag:(double)arg0;
- (void)showPreview:(BOOL)arg0 targetTime:(double)arg1 scrollChapterAnimated:(BOOL)arg2;
- (double)targetTimeWithOffset:(double)arg0;
- (void)handleProgressViewPanChanging:(double)arg0;
- (double)playTimeBeforeDrag;
- (void)setProgressContainer:(id)arg0;
- (void)setTouchingPlayedView:(id)arg0;
- (void)setTouchingThumbView:(id)arg0;
- (void)setTouchingContainer:(id)arg0;
- (void)setTouchingEffectView:(id)arg0;
- (BOOL)isPointInProgressContainer:(struct CGPoint { double x0; double x1; })arg0;
- (void)trackSlideProgressFromTime:(double)arg0 toTime:(double)arg1;
- (void)updateState:(long long)arg0;
- (void)setModel:(id)arg0;
- (double)totalTime;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (double)playTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)previewContainer;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)setTotalTime:(double)arg0;
- (void)setupUI;
- (void)handlePanGesture:(id)arg0;
- (void)setSeekingToTime:(double)arg0;
- (double)seekingToTime;

@end