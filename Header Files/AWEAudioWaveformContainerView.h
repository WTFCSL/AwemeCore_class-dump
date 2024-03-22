//
//     Generated by private class-dump
//

@class AWEAudioWaveformSliderView, AWEDelayRecordCoverView, CAShapeLayer, AVAsset, UILabel, UIView, UIButton;

@interface AWEAudioWaveformContainerView : UIView {
    BOOL _usingBarView;
    BOOL _enableOffscreenOpt;
    id /* block */ _updateMusicBlock;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_titleLabel;
    UIView *_buttonContainerView;
    AWEAudioWaveformSliderView *_waveformSliderView;
    AWEDelayRecordCoverView *_coverView;
    CAShapeLayer *_backgroundLayer;
    AVAsset *_asset;
    double _assetStartLocation;
    double _assetEndLocation;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) AWEAudioWaveformSliderView *waveformSliderView;
@property (retain, nonatomic) AWEDelayRecordCoverView *coverView;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) double assetStartLocation;
@property (nonatomic) double assetEndLocation;
@property (nonatomic) BOOL enableOffscreenOpt;
@property (copy, nonatomic) id /* block */ updateMusicBlock;
@property (nonatomic) BOOL usingBarView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 model:(id)arg1;
- (void)addSubviews;
- (void)setEnableOffscreenOpt:(BOOL)arg0;
- (BOOL)enableOffscreenOpt;
- (void)showNoMusicWaveformView:(BOOL)arg0;
- (void)updatePlayingLocation:(double)arg0;
- (void)setSelectedButtonWithDelayMode:(long long)arg0;
- (void)setDelegateForSliderView:(id)arg0;
- (void)setUsingBarView:(BOOL)arg0;
- (double)waveBarCountForFullWidth;
- (void)updateWaveBarWithVolumes:(id)arg0;
- (void)updateHasRecordedLocation:(double)arg0;
- (void)updateBottomRightLableWithMaxDuration:(double)arg0;
- (void)updateToBePlayedLocation:(double)arg0;
- (void)setUpdateMusicBlock:(id /* block */)arg0;
- (id)waveformSliderView;
- (void)addButtonCornerMaskFor:(id)arg0;
- (BOOL)usingBarView;
- (void)addRoundedCornerWithButtonBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 direction:(long long)arg1 forView:(id)arg2;
- (id /* block */)updateMusicBlock;
- (void)setWaveformSliderView:(id)arg0;
- (double)assetStartLocation;
- (void)setAssetStartLocation:(double)arg0;
- (double)assetEndLocation;
- (void)setAssetEndLocation:(double)arg0;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (id)titleLabel;
- (id)asset;
- (void)layoutSubviews;
- (void)setAsset:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg0;
- (id)buttonContainerView;
- (void)setButtonContainerView:(id)arg0;
- (void)updateButtonLayout;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end