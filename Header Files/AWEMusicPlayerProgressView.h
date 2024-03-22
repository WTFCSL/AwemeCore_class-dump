//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, UITapGestureRecognizer, NSString, UILabel, AWEMusicPlayerProgressSlider, UIView;
@protocol AWEMusicPlayerProgressViewDelegate;

@interface AWEMusicPlayerProgressView : UIView <UIGestureRecognizerDelegate> {
    BOOL _isDragging;
    double _cacheProgress;
    double _playProgress;
    double _duration;
    id<AWEMusicPlayerProgressViewDelegate> _delegate;
    UIView *_backLine;
    UIView *_lineContainer;
    UIView *_cacheLine;
    UIView *_playLine;
    double _startWidth;
    UIView *_startCircle;
    UIView *_endCircle;
    UIView *_loadingView;
    UIView *_loadingBackView;
    UILabel *_playingTimeLabel;
    UILabel *_durationTimeLabel;
    AWEMusicPlayerProgressSlider *_slider;
    UIPanGestureRecognizer *_gesture;
    UITapGestureRecognizer *_tapGesture;
    double _gestureStartPlayLineWidth;
}

@property (retain, nonatomic) UIView *backLine;
@property (retain, nonatomic) UIView *lineContainer;
@property (retain, nonatomic) UIView *cacheLine;
@property (retain, nonatomic) UIView *playLine;
@property (nonatomic) double startWidth;
@property (retain, nonatomic) UIView *startCircle;
@property (retain, nonatomic) UIView *endCircle;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *loadingBackView;
@property (retain, nonatomic) UILabel *playingTimeLabel;
@property (retain, nonatomic) UILabel *durationTimeLabel;
@property (retain, nonatomic) AWEMusicPlayerProgressSlider *slider;
@property (retain, nonatomic) UIPanGestureRecognizer *gesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double gestureStartPlayLineWidth;
@property (nonatomic) double cacheProgress;
@property (nonatomic) double playProgress;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) double duration;
@property (weak, nonatomic) id<AWEMusicPlayerProgressViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cacheLine;
- (double)playProgress;
- (void)setPlayProgress:(double)arg0;
- (void)setCacheProgress:(double)arg0;
- (double)cacheProgress;
- (id)loadingBackView;
- (void)setLoadingBackView:(id)arg0;
- (void)setPlayingTimeLabel:(id)arg0;
- (void)setDurationTimeLabel:(id)arg0;
- (id)playingTimeLabel;
- (id)durationTimeLabel;
- (void)setLineContainer:(id)arg0;
- (id)lineContainer;
- (void)setBackLine:(id)arg0;
- (id)backLine;
- (void)setCacheLine:(id)arg0;
- (void)setStartCircle:(id)arg0;
- (id)startCircle;
- (void)setEndCircle:(id)arg0;
- (id)endCircle;
- (void)setPlayLine:(id)arg0;
- (id)playLine;
- (double)startWidth;
- (id)formatTime:(double)arg0;
- (void)_updatePlayProgress:(double)arg0 animation:(BOOL)arg1;
- (void)setStartWidth:(double)arg0;
- (double)progressOfGesture:(id)arg0;
- (void)gestureDidEndProgress:(double)arg0;
- (void)panGestureBegin:(id)arg0;
- (void)gestureChanged:(id)arg0 isDragging:(BOOL)arg1;
- (void)panGestureDidEnd:(id)arg0;
- (void)setGestureStartPlayLineWidth:(double)arg0;
- (double)gestureStartPlayLineWidth;
- (double)_progressOfGestureBounded:(double)arg0;
- (double)progressOfPanGesture:(id)arg0;
- (void)updateCacheProgressTime:(double)arg0 animation:(BOOL)arg1;
- (void)updatePlayProgressTime:(double)arg0 animation:(BOOL)arg1;
- (void)setupCoverLine:(id)arg0;
- (void)stopLoading;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (void)startLoading;
- (id)slider;
- (BOOL)isDragging;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSlider:(id)arg0;
- (id)tapGesture;
- (double)duration;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)setGesture:(id)arg0;
- (void)setStyle:(id)arg0;
- (id)gesture;
- (void)setDuration:(double)arg0;
- (void)tapGesture:(id)arg0;
- (void)setTapGesture:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setIsDragging:(BOOL)arg0;
- (void)panGesture:(id)arg0;

@end