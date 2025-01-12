//
//     Generated by private class-dump
//

@class UIView;

@interface ACCLoadingAndVolumeView : UIView {
    BOOL _isLoading;
    BOOL _showProgress;
    BOOL _showVolume;
    float _progress;
    long long _status;
    double _lastVolume;
    UIView *_bottomView;
    UIView *_animationView;
    UIView *_volumeView;
    UIView *_progressView;
}

@property (nonatomic) BOOL showVolume;
@property (nonatomic) long long status;
@property (nonatomic) double lastVolume;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIView *volumeView;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) float progress;
@property (nonatomic) BOOL showProgress;

- (void)setVolumeView:(id)arg0;
- (BOOL)showVolume;
- (void)hideAndEndAnimation;
- (void)beginCenterToSideAnimation;
- (void)setShowVolume:(BOOL)arg0;
- (BOOL)isLoading;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStatus:(long long)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)_dismiss;
- (float)progress;
- (void)setVolume:(double)arg0;
- (void)updateStatus;
- (void)setIsLoading:(BOOL)arg0;
- (void)setProgress:(float)arg0;
- (id)bottomView;
- (void)setBottomView:(id)arg0;
- (id)volumeView;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (BOOL)showProgress;
- (void)setShowProgress:(BOOL)arg0;
- (double)lastVolume;
- (void)setLastVolume:(double)arg0;

@end
