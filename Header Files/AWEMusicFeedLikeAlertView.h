//
//     Generated by private class-dump
//

@class NSString, UIImageView, CAShapeLayer, UILabel, UIView, UIButton;

@interface AWEMusicFeedLikeAlertView : UIView {
    NSString *_title;
    NSString *_desc;
    NSString *_confirm;
    NSString *_cancel;
    id /* block */ _onCloseBlock;
    id /* block */ _onConfirmBlock;
    id /* block */ _onCancelBlock;
    UIView *_maskView;
    UIView *_contentView;
    UIImageView *_coverImage;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_closeBtn;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    CAShapeLayer *_shapeLayer;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *coverImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *confirm;
@property (copy, nonatomic) NSString *cancel;
@property (copy, nonatomic) id /* block */ onCloseBlock;
@property (copy, nonatomic) id /* block */ onConfirmBlock;
@property (copy, nonatomic) id /* block */ onCancelBlock;

- (void)setCoverImage:(id)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (id)confirmBtn;
- (id)cancelBtn;
- (void)setConfirmBtn:(id)arg0;
- (void)setCancelBtn:(id)arg0;
- (void)setOnCloseBlock:(id /* block */)arg0;
- (id /* block */)onCloseBlock;
- (void)maskViewTapAction:(id)arg0;
- (void)contentViewPanAction:(id)arg0;
- (void)p_showWithDuration:(double)arg0;
- (void)showInView:(id)arg0 duration:(double)arg1;
- (void)p_setBasePopupViewUI;
- (void)p_hideWithdMethod:(id /* block */)arg0;
- (id /* block */)onConfirmBlock;
- (id /* block */)onCancelBlock;
- (void)hideWithDuration:(double)arg0 completion:(id /* block */)arg1;
- (void)closeBtnHandler;
- (void)confirmBtnHandler;
- (void)cancelBtnHandler;
- (void)setOnConfirmBlock:(id /* block */)arg0;
- (void)setOnCancelBlock:(id /* block */)arg0;
- (id)desc;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)shapeLayer;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)title;
- (void)setCancel:(id)arg0;
- (id)cancel;
- (void)setShapeLayer:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setDesc:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)showInView:(id)arg0;
- (id)confirm;
- (void)setConfirm:(id)arg0;
- (id)coverImage;

@end
