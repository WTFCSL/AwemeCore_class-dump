//
//     Generated by private class-dump
//

@class UILabel, UIView, BU_MMMaterialDesignSpinner, NSString, UIImageView, UIButton, NSDictionary, NSBundle, NSLayoutConstraint, UIProgressView, BU_ASValueTrackingSlider;

@interface BU_ZFPlayerControlView : UIView <UIGestureRecognizerDelegate, BUPlayerControlViewProtocol> {
    BOOL _showing;
    BOOL _shrink;
    BOOL _cellVideo;
    BOOL _dragged;
    BOOL _playeEnd;
    BOOL _fullScreen;
    BOOL _shouldAutoRotate;
    BOOL _showPlayeBtn;
    BOOL _showTopImageView;
    BOOL _showBottomImageView;
    BOOL _showBottomProgressView;
    BOOL _showActivity;
    BOOL _showRepeatBtn;
    UIView *_maskView;
    UILabel *_titleLabel;
    UIButton *_startBtn;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    UIProgressView *_progressView;
    BU_ASValueTrackingSlider *_videoSlider;
    UIButton *_fullScreenBtn;
    UIButton *_lockBtn;
    BU_MMMaterialDesignSpinner *_activity;
    UIButton *_backBtn;
    UIButton *_closeBtn;
    UIButton *_repeatBtn;
    UIView *_finishView;
    UIImageView *_bottomImageView;
    UIImageView *_topImageView;
    UIButton *_playeBtn;
    UIButton *_failBtn;
    UIView *_fastView;
    UIProgressView *_fastProgressView;
    UILabel *_fastTimeLabel;
    UIImageView *_fastImageView;
    UIImageView *_placeholderImageView;
    UIProgressView *_bottomProgressView;
    long long _elementCombination;
    NSLayoutConstraint *_bottomContraint;
    NSLayoutConstraint *_leadingContraint;
    NSLayoutConstraint *_trailingContraint;
    double _playerAnimationTimeInterval;
    NSBundle *_resourceBundle;
    NSDictionary *_contentViewImages;
    NSDictionary *_contentLocalizedStrings;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *startBtn;
@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) BU_ASValueTrackingSlider *videoSlider;
@property (retain, nonatomic) UIButton *fullScreenBtn;
@property (retain, nonatomic) UIButton *lockBtn;
@property (retain, nonatomic) BU_MMMaterialDesignSpinner *activity;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *repeatBtn;
@property (retain, nonatomic) UIView *finishView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIButton *playeBtn;
@property (retain, nonatomic) UIButton *failBtn;
@property (retain, nonatomic) UIView *fastView;
@property (retain, nonatomic) UIProgressView *fastProgressView;
@property (retain, nonatomic) UILabel *fastTimeLabel;
@property (retain, nonatomic) UIImageView *fastImageView;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIProgressView *bottomProgressView;
@property (nonatomic, getter=isShowing) BOOL showing;
@property (nonatomic, getter=isShrink) BOOL shrink;
@property (nonatomic, getter=isCellVideo) BOOL cellVideo;
@property (nonatomic, getter=isDragged) BOOL dragged;
@property (nonatomic, getter=isPlayEnd) BOOL playeEnd;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) BOOL shouldAutoRotate;
@property (nonatomic) long long elementCombination;
@property (retain, nonatomic) NSLayoutConstraint *bottomContraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingContraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingContraint;
@property (nonatomic) double playerAnimationTimeInterval;
@property (retain, nonatomic) NSBundle *resourceBundle;
@property (retain, nonatomic) NSDictionary *contentViewImages;
@property (retain, nonatomic) NSDictionary *contentLocalizedStrings;
@property (nonatomic) BOOL showPlayeBtn;
@property (nonatomic) BOOL showTopImageView;
@property (nonatomic) BOOL showBottomImageView;
@property (nonatomic) BOOL showBottomProgressView;
@property (nonatomic) BOOL showActivity;
@property (nonatomic) BOOL showRepeatBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buzf_playerCancelAutoFadeOutControlView;
- (void)buzf_playerResetControlView;
- (void)buzf_playerPlayBtnState:(BOOL)arg0;
- (void)buzf_playerHideControlView;
- (void)buzf_playerPlayEnd;
- (void)buzf_setShouldAutoRotate:(BOOL)arg0;
- (void)buzf_playerCellPlay;
- (void)buzf_playerCurrentTime:(long long)arg0 totalTime:(long long)arg1 sliderValue:(double)arg2;
- (void)buzf_playerSetProgress:(double)arg0;
- (void)buzf_playerBottomShrinkPlay;
- (void)buzf_playerLockBtnState:(BOOL)arg0;
- (void)buzf_playerShowOrHideControlView;
- (BOOL)buzf_showSlideProgress;
- (void)buzf_playerShowControlView;
- (void)buzf_playerActivity:(BOOL)arg0;
- (void)buzf_playerDraggedEnd;
- (void)buzf_playerDraggedTime:(long long)arg0 totalTime:(long long)arg1 isForward:(BOOL)arg2 hasPreview:(BOOL)arg3;
- (void)buzf_playerItemPlaying;
- (void)buzf_playerItemStatusFailed:(id)arg0;
- (void)buzf_playerModel:(id)arg0;
- (void)buzf_playerDraggedTime:(long long)arg0 sliderImage:(id)arg1;
- (void)setResourceBundle:(id)arg0;
- (void)setContentViewImages:(id)arg0;
- (void)setContentLocalizedStrings:(id)arg0;
- (void)setPlayerAnimationTimeInterval:(double)arg0;
- (id)finishView;
- (id)topImageView;
- (id)failBtn;
- (id)fastView;
- (id)closeBtn;
- (id)bottomProgressView;
- (id)playeBtn;
- (id)startBtn;
- (id)videoSlider;
- (id)fullScreenBtn;
- (id)totalTimeLabel;
- (id)backBtn;
- (id)repeatBtn;
- (id)fastImageView;
- (id)fastTimeLabel;
- (id)fastProgressView;
- (void)makeSubViewsConstraints;
- (void)setElementCombination:(long long)arg0;
- (void)listeningRotating;
- (void)setBottomContraint:(id)arg0;
- (void)setLeadingContraint:(id)arg0;
- (void)setTrailingContraint:(id)arg0;
- (id)bottomContraint;
- (id)leadingContraint;
- (id)trailingContraint;
- (void)setOrientationLandscapeConstraint;
- (BOOL)isShrink;
- (BOOL)isPlayEnd;
- (long long)elementCombination;
- (id)lockBtn;
- (void)setShrink:(BOOL)arg0;
- (id)contentViewImages;
- (BOOL)showBottomProgressView;
- (BOOL)showTopImageView;
- (BOOL)showBottomImageView;
- (BOOL)showPlayeBtn;
- (double)playerAnimationTimeInterval;
- (void)setShowTopImageView:(BOOL)arg0;
- (void)setShowPlayeBtn:(BOOL)arg0;
- (void)setShowBottomImageView:(BOOL)arg0;
- (void)setShowBottomProgressView:(BOOL)arg0;
- (void)setShowRepeatBtn:(BOOL)arg0;
- (BOOL)showRepeatBtn;
- (void)backBtnClick:(id)arg0;
- (void)lockScrrenBtnClick:(id)arg0;
- (void)playBtnClick:(id)arg0;
- (void)closeBtnClick:(id)arg0;
- (void)progressSliderTouchBegan:(id)arg0;
- (void)progressSliderValueChanged:(id)arg0;
- (void)progressSliderTouchEnded:(id)arg0;
- (void)tapSliderAction:(id)arg0;
- (void)panRecognizer:(id)arg0;
- (void)fullScreenBtnClick:(id)arg0;
- (void)repeatBtnClick:(id)arg0;
- (id)contentLocalizedStrings;
- (void)failBtnClick:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRect;
- (void)setPlayeEnd:(BOOL)arg0;
- (void)showControlView;
- (void)autoFadeOutControlView;
- (void)setCellVideo:(BOOL)arg0;
- (void)centerPlayBtnClick:(id)arg0;
- (void)buzf_playerResetControlViewForResolution;
- (void)setStartBtn:(id)arg0;
- (void)setTotalTimeLabel:(id)arg0;
- (void)setVideoSlider:(id)arg0;
- (void)setFullScreenBtn:(id)arg0;
- (void)setLockBtn:(id)arg0;
- (void)setBackBtn:(id)arg0;
- (void)setCloseBtn:(id)arg0;
- (void)setRepeatBtn:(id)arg0;
- (void)setFinishView:(id)arg0;
- (void)setTopImageView:(id)arg0;
- (void)setPlayeBtn:(id)arg0;
- (void)setFailBtn:(id)arg0;
- (void)setFastView:(id)arg0;
- (void)setFastProgressView:(id)arg0;
- (void)setFastTimeLabel:(id)arg0;
- (void)setFastImageView:(id)arg0;
- (void)setBottomProgressView:(id)arg0;
- (void)appDidEnterPlayground;
- (void)onDeviceOrientationChange;
- (id)initWithContrlResourceBundle:(id)arg0 images:(id)arg1 localizedStrings:(id)arg2;
- (BOOL)isCellVideo;
- (void)setOrientationPortraitConstraint;
- (void)setPlayerDefaultControlElement:(long long)arg0;
- (void)showCoverImage:(BOOL)arg0;
- (id)finishedContainer;
- (void)hideControlView;
- (BOOL)shouldAutoRotate;
- (void)setShouldAutoRotate:(BOOL)arg0;
- (void)setFullScreen:(BOOL)arg0;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (id)activity;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (id)titleLabel;
- (id)placeholderImageView;
- (id)maskView;
- (BOOL)isShowing;
- (id)currentTimeLabel;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)setCurrentTimeLabel:(id)arg0;
- (void)setPlaceholderImageView:(id)arg0;
- (void)setActivity:(id)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setDragged:(BOOL)arg0;
- (void)setShowing:(BOOL)arg0;
- (void)setShowActivity:(BOOL)arg0;
- (BOOL)showActivity;
- (void)appDidEnterBackground;
- (BOOL)isDragged;
- (id)bottomImageView;
- (void)setBottomImageView:(id)arg0;
- (id)resourceBundle;

@end
