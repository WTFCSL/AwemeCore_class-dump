//
//     Generated by private class-dump
//

@class UIButton, CAShapeLayer, UIView;

@interface AWEFeedBasePopupView : UIView {
    UIView *_contentView;
    id /* block */ _closeButtonClickAction;
    double _contentViewHeight;
    UIView *_maskView;
    UIButton *_closeBtn;
    CAShapeLayer *_shapeLayer;
}

@property (nonatomic) double contentViewHeight;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (copy, nonatomic) id /* block */ closeButtonClickAction;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)closeButtonAction:(id)arg0;
- (void)hideWithDuration:(double)arg0;
- (void)maskViewTapAction:(id)arg0;
- (void)contentViewPanAction:(id)arg0;
- (void)p_showWithDuration:(double)arg0;
- (id)initWithContentViewHeight:(double)arg0;
- (void)setCloseButtonHide:(BOOL)arg0;
- (void)showInView:(id)arg0 duration:(double)arg1;
- (void)p_setBasePopupViewUI;
- (id /* block */)closeButtonClickAction;
- (void)setCloseButtonClickAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)shapeLayer;
- (id)maskView;
- (id)contentView;
- (void)hide;
- (void)setShapeLayer:(id)arg0;
- (void)layoutSubviews;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)showInView:(id)arg0;
- (void)setContentViewHeight:(double)arg0;
- (double)contentViewHeight;

@end