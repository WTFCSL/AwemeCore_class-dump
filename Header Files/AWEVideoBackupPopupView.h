//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, AWEAnimatedButton;

@interface AWEVideoBackupPopupView : UIView {
    id /* block */ _confirmAction;
    id /* block */ _cancelAction;
    UIView *_maskView;
    UIView *_containerView;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    AWEAnimatedButton *_confirmButton;
    AWEAnimatedButton *_cancelButton;
    UIView *_horizontalLine;
    UIView *_verticalLine;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWEAnimatedButton *confirmButton;
@property (retain, nonatomic) AWEAnimatedButton *cancelButton;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;

- (void)didClickConfirmButton:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)verticalLine;
- (void)setHorizontalLine:(id)arg0;
- (void)setVerticalLine:(id)arg0;
- (void)didClickCancelButton:(id)arg0;
- (void)setupCover:(id)arg0;
- (BOOL)isStyleOne;
- (void)setCancelButton:(id)arg0;
- (void)setCancelAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)titleLabel;
- (id)maskView;
- (void)setContainerView:(id)arg0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (id /* block */)cancelAction;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)horizontalLine;

@end
