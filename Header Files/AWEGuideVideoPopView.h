//
//     Generated by private class-dump
//

@class UIStackView, UIView, NSString, AWEGuideVideoPopViewThemeModel, CALayer, UIImageView, DUXLoadingCircleView, UIButton, DUXCheckBox, CAShapeLayer, AWERelatedVideoJumpConfirmParamModel, UILabel;
@protocol AWEGuideVideoPopViewTrackHandlerProtocol;

@interface AWEGuideVideoPopView : UIView <AWEGuideVideoPopViewProtocol> {
    BOOL _boxSelected;
    id /* block */ _popViewDidCloseBlock;
    id /* block */ _selectChangedBlock;
    id /* block */ _clickConfirmBlock;
    id /* block */ _clickCancelBlock;
    id /* block */ _clickStayBlock;
    id<AWEGuideVideoPopViewTrackHandlerProtocol> _trackHandler;
    AWEGuideVideoPopViewThemeModel *_themeModel;
    UIImageView *_bgImageView;
    UIImageView *_foreImageView;
    UIView *_foreImageShadowView;
    DUXLoadingCircleView *_loadingView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    UIStackView *_btnStackView;
    UIView *_radioView;
    DUXCheckBox *_checkBox;
    UILabel *_radioboxLabel;
    UIView *_maskView;
    UIView *_contentView;
    CAShapeLayer *_shapeLayer;
    CALayer *_shadowLayer;
    UIButton *_closeBtn;
    AWERelatedVideoJumpConfirmParamModel *_paraModel;
    NSString *_referString;
    NSString *_fromModuleName;
}

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *foreImageView;
@property (retain, nonatomic) UIView *foreImageShadowView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UIStackView *btnStackView;
@property (retain, nonatomic) UIView *radioView;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *radioboxLabel;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) CALayer *shadowLayer;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) AWERelatedVideoJumpConfirmParamModel *paraModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *fromModuleName;
@property (retain, nonatomic) AWEGuideVideoPopViewThemeModel *themeModel;
@property (copy, nonatomic) id /* block */ popViewDidCloseBlock;
@property (copy, nonatomic) id /* block */ selectChangedBlock;
@property (nonatomic) BOOL boxSelected;
@property (copy, nonatomic) id /* block */ clickConfirmBlock;
@property (copy, nonatomic) id /* block */ clickCancelBlock;
@property (copy, nonatomic) id /* block */ clickStayBlock;
@property (weak, nonatomic) id<AWEGuideVideoPopViewTrackHandlerProtocol> trackHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadWithJumpConfirmParamModel:(id)arg0;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)removeLoadingView;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (id)trackHandler;
- (void)setTrackHandler:(id)arg0;
- (id)leftBtn;
- (id)rightBtn;
- (void)setLeftBtn:(id)arg0;
- (void)setRightBtn:(id)arg0;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (void)setSelectDescription:(id)arg0;
- (id)themeModel;
- (void)maskViewTapAction:(id)arg0;
- (void)contentViewPanAction:(id)arg0;
- (void)setPopViewDidCloseBlock:(id /* block */)arg0;
- (void)showWithJumpConfirmParamModel:(id)arg0 themeModel:(id)arg1 isLongVideo:(BOOL)arg2;
- (void)setClickStayBlock:(id /* block */)arg0;
- (void)setClickConfirmBlock:(id /* block */)arg0;
- (id)foreImageView;
- (id)btnStackView;
- (id)radioView;
- (double)resizeScreenWidthScale:(double)arg0;
- (id)radioboxLabel;
- (void)setThemeModel:(id)arg0;
- (void)setParaModel:(id)arg0;
- (void)updateUIWithThemeModel:(id)arg0;
- (void)setMainBtnTitle:(id)arg0;
- (void)setSecondBtnTitle:(id)arg0;
- (void)downloadImageForLVideo:(id)arg0;
- (void)downloadImageForMVideo:(id)arg0;
- (void)showInView:(id)arg0 duration:(double)arg1;
- (void)trackForShowWindow;
- (void)resizeForAdjustFont;
- (double)getActualFontSizeForLabel:(id)arg0;
- (void)addForeImageViewShadow;
- (id)p_lightColorNamed:(id)arg0;
- (id)foreImageShadowView;
- (id /* block */)popViewDidCloseBlock;
- (id /* block */)selectChangedBlock;
- (void)hideWithDuration:(double)arg0 closeType:(long long)arg1;
- (void)trackForCancelClick;
- (id /* block */)clickStayBlock;
- (void)trackForOpenClick;
- (id /* block */)clickConfirmBlock;
- (void)trackForCloseWindowWithType:(long long)arg0;
- (id /* block */)clickCancelBlock;
- (void)p_setUIShowingState;
- (double)fontSizeForLargeModel:(double)arg0;
- (void)respondsToCancelButton:(id)arg0;
- (void)respondsToConfirmButton:(id)arg0;
- (void)respondsToCloseButton:(id)arg0;
- (void)respondsToRadioboxViewClicked:(id)arg0;
- (void)respondsToRadioboxClicked:(id)arg0;
- (void)showWithPopViewStyle:(long long)arg0 jumpConfirmParamModel:(id)arg1 themeModel:(id)arg2;
- (BOOL)boxSelected;
- (void)setSelectChangedBlock:(id /* block */)arg0;
- (void)setBoxSelected:(BOOL)arg0;
- (void)setClickCancelBlock:(id /* block */)arg0;
- (void)setForeImageView:(id)arg0;
- (void)setForeImageShadowView:(id)arg0;
- (void)setBtnStackView:(id)arg0;
- (void)setRadioView:(id)arg0;
- (void)setRadioboxLabel:(id)arg0;
- (id)paraModel;
- (id)fromModuleName;
- (void)setFromModuleName:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)shapeLayer;
- (id)maskView;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setSubTitle:(id)arg0;
- (void)setShapeLayer:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)shadowLayer;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)setShadowLayer:(id)arg0;
- (void)addLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end