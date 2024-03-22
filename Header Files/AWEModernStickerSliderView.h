//
//     Generated by private class-dump
//

@class UIView, NSString, AWEModernStickerSlider, AWEModernStickerSliderInnerModel, ACCGradientView, UIVisualEffectView, UIButton;
@protocol AWEModernStickerSliderViewDelegate;

@interface AWEModernStickerSliderView : UIView <AWESliderDelegate> {
    BOOL _isWhiteDotEnabled;
    BOOL _isBlackBackGroundEnabled;
    BOOL _shouldHideGradientView;
    AWEModernStickerSlider *_slider;
    id<AWEModernStickerSliderViewDelegate> _sliderDelegate;
    long long _mode;
    AWEModernStickerSliderInnerModel *_beautyModel;
    AWEModernStickerSliderInnerModel *_filterModel;
    ACCGradientView *_gradientView;
    UIVisualEffectView *_blurEffectView;
    UIButton *_beautyButton;
    UIButton *_filterButton;
    UIView *_splitView;
    UIView *_dotView;
}

@property (nonatomic) long long mode;
@property (retain, nonatomic) AWEModernStickerSliderInnerModel *beautyModel;
@property (retain, nonatomic) AWEModernStickerSliderInnerModel *filterModel;
@property (retain, nonatomic) AWEModernStickerSlider *slider;
@property (retain, nonatomic) ACCGradientView *gradientView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIButton *beautyButton;
@property (retain, nonatomic) UIButton *filterButton;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) UIView *dotView;
@property (nonatomic) BOOL isWhiteDotEnabled;
@property (nonatomic) BOOL isBlackBackGroundEnabled;
@property (nonatomic) BOOL shouldHideGradientView;
@property (weak, nonatomic) id<AWEModernStickerSliderViewDelegate> sliderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGesture;
- (void)slider:(id)arg0 valueDidChanged:(float)arg1;
- (id)createDotView;
- (void)setFilterModel:(id)arg0;
- (id)filterModel;
- (id)splitView;
- (void)setSplitView:(id)arg0;
- (id)beautyButton;
- (void)showGradientBackground;
- (void)hideGradientBackground;
- (id)sliderDelegate;
- (void)setSliderDelegate:(id)arg0;
- (void)setBeautyButton:(id)arg0;
- (BOOL)shouldHideGradientView;
- (void)setShouldHideGradientView:(BOOL)arg0;
- (void)setupDefaultUIState;
- (void)switchToBeautySlider;
- (void)clickBeautyButton;
- (void)clickFilterButton;
- (id)beautyModel;
- (void)configSliderWithInnerModel:(id)arg0;
- (void)switchDotToBeauty;
- (void)switchDotToFilter;
- (void)setWhiteDotEnabled:(BOOL)arg0;
- (void)updateLayoutForBlackStyle;
- (void)setBlackBackGroundEnabled:(BOOL)arg0;
- (void)updateLayoutForWhiteStyle;
- (void)setIsWhiteDotEnabled:(BOOL)arg0;
- (void)setIsBlackBackGroundEnabled:(BOOL)arg0;
- (void)switchToFilterSlider;
- (void)slider:(id)arg0 didFinishSlidingWithValue:(float)arg1;
- (void)switchUIStyleBlur;
- (void)switchUIStyleBlack;
- (void)switchUIStyleWhite;
- (void)clearConfigOfBeautyAndFilter;
- (void)configBeautySliderWithValue:(id)arg0 defaultValue:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
- (void)configFilterSliderWithValue:(id)arg0 defaultValue:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3;
- (id)currentFilterValue;
- (id)currentBeautyValue;
- (void)setBeautyModel:(id)arg0;
- (BOOL)isWhiteDotEnabled;
- (BOOL)isBlackBackGroundEnabled;
- (long long)currentMode;
- (id)init;
- (void).cxx_destruct;
- (id)slider;
- (long long)mode;
- (void)setGradientView:(id)arg0;
- (void)setMode:(long long)arg0;
- (void)setSlider:(id)arg0;
- (void)setFilterButton:(id)arg0;
- (id)filterButton;
- (id)gradientView;
- (id)dotView;
- (void)setDotView:(id)arg0;
- (void)setupUI;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg0;

@end
