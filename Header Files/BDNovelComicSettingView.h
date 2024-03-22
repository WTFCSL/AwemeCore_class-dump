//
//     Generated by private class-dump
//

@class NSString, UIImageView, BDNovelAudioTextView, BDNovelProgressSlider, BDNovelComicOpenModel;

@interface BDNovelComicSettingView : BDNovelComicBaseView <BDNovelComicPluginStateSync> {
    BDNovelProgressSlider *_slider;
    UIImageView *_lightIconLeft;
    UIImageView *_lightIconRight;
    BDNovelAudioTextView *_upDownView;
    BDNovelAudioTextView *_rightView;
    BDNovelAudioTextView *_normalView;
    double _beginLightValue;
}

@property (retain, nonatomic) BDNovelProgressSlider *slider;
@property (retain, nonatomic) UIImageView *lightIconLeft;
@property (retain, nonatomic) UIImageView *lightIconRight;
@property (retain, nonatomic) BDNovelAudioTextView *upDownView;
@property (retain, nonatomic) BDNovelAudioTextView *rightView;
@property (retain, nonatomic) BDNovelAudioTextView *normalView;
@property (nonatomic) double beginLightValue;
@property (retain, nonatomic) BDNovelComicOpenModel *readerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdcr_readerInsertedViewReaderConfigChange:(id)arg0;
- (void)pluginReaderComicInfoDidLoad:(id)arg0 updateType:(unsigned long long)arg1;
- (void)readerThemeChange:(id)arg0;
- (void)viewWillDidLoad;
- (void)sliderValueChanged:(id)arg0 forEvent:(id)arg1;
- (void)setLightIconLeft:(id)arg0;
- (void)setLightIconRight:(id)arg0;
- (id)upDownView;
- (void)updatePageMode:(unsigned long long)arg0 sender:(id)arg1;
- (void)setUpDownView:(id)arg0;
- (id)normalView;
- (void)setNormalView:(id)arg0;
- (void)updatePageModeButtonStyle:(id)arg0 dark:(BOOL)arg1 disable:(BOOL)arg2 isEnable:(BOOL)arg3;
- (void)updatePageModeStyle:(BOOL)arg0;
- (void)setBeginLightValue:(double)arg0;
- (double)beginLightValue;
- (id)lightIconLeft;
- (id)lightIconRight;
- (void).cxx_destruct;
- (id)slider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSlider:(id)arg0;
- (void)layoutSubviews;
- (id)rightView;
- (void)setRightView:(id)arg0;
- (void)refreshData;

@end