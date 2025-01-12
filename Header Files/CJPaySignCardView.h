//
//     Generated by private class-dump
//

@class UILabel, CJPayButton, CJPayStyleButton;

@interface CJPaySignCardView : UIView {
    CJPayStyleButton *_confirmButton;
    CJPayButton *_closeButton;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;

- (void)p_setupUI;
- (void)updateWithSignCardInfo:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
