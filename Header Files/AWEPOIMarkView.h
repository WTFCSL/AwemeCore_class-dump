//
//     Generated by private class-dump
//

@class UIImageView, AWEPOIMarkViewUIConfigModel, UILabel, UIView;

@interface AWEPOIMarkView : AWEAnimatedButton {
    id /* block */ _onClickedBlock;
    AWEPOIMarkViewUIConfigModel *_uiConfigModel;
    UIImageView *_containerView;
    UIImageView *_markImageView;
    UILabel *_markLabel;
    UIImageView *_arrowImageView;
    UIView *_verticalSeperateLine;
    UILabel *_adTagLabel;
    UIView *_iconBkgView;
}

@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UIImageView *markImageView;
@property (retain, nonatomic) UILabel *markLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *verticalSeperateLine;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) UIView *iconBkgView;
@property (copy, nonatomic) id /* block */ onClickedBlock;
@property (retain, nonatomic) AWEPOIMarkViewUIConfigModel *uiConfigModel;

+ (id)markViewWithDefaultUIConfigModel;

- (id)initWithUIConfigModel:(id)arg0;
- (void)setMarkImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setMarkBackgroundColor:(id)arg0;
- (void)setAdTagTextFont:(id)arg0;
- (void)setAdTagTextColor:(id)arg0;
- (void)setOnClickedBlock:(id /* block */)arg0;
- (void)setMarkImage:(id)arg0;
- (void)setAdTagText:(id)arg0;
- (void)setMarkText:(id)arg0;
- (id)adTagLabel;
- (void)setAdTagLabel:(id)arg0;
- (void)onButtonClicked;
- (void)setMarkBackgroundImage:(id)arg0;
- (void)setNeedIconDarkBkg:(BOOL)arg0;
- (void)setLabelHeightWhenExpanded:(double)arg0;
- (void)setLabelHeightWhenNotExpanded:(double)arg0;
- (id)markImageView;
- (id)markLabel;
- (id)verticalSeperateLine;
- (id)uiConfigModel;
- (id)iconBkgView;
- (BOOL)shouldShowArrow;
- (id /* block */)onClickedBlock;
- (void)setMarkNumberOfLinesZero;
- (void)updateLeftMargin:(double)arg0;
- (void)updateRightMargin:(double)arg0;
- (void)setMarkTextColor:(id)arg0;
- (void)setMarkDisableLocalization:(BOOL)arg0;
- (void)setMarkTextFont:(id)arg0;
- (void)setMarkTextAlpha:(double)arg0;
- (void)setMarkBackgroundImageURLs:(id)arg0;
- (void)setMarkImageURLs:(id)arg0;
- (void)setMarkImageURLs:(id)arg0 placeholder:(id)arg1;
- (void)setUiConfigModel:(id)arg0;
- (void)setMarkImageView:(id)arg0;
- (void)setMarkLabel:(id)arg0;
- (void)setVerticalSeperateLine:(id)arg0;
- (void)setIconBkgView:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
