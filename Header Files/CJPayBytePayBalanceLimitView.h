//
//     Generated by private class-dump
//

@class UILabel, CJPayButton, CJPayStyleButton;

@interface CJPayBytePayBalanceLimitView : UIView {
    id /* block */ _closeClickBlock;
    id /* block */ _confirmPayBlock;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    CJPayStyleButton *_confirmButton;
    CJPayButton *_closeButton;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayButton *closeButton;
@property (copy, nonatomic) id /* block */ closeClickBlock;
@property (copy, nonatomic) id /* block */ confirmPayBlock;

- (void)p_setupUI;
- (void)setCloseClickBlock:(id /* block */)arg0;
- (id /* block */)closeClickBlock;
- (void)p_buttonClick;
- (id /* block */)confirmPayBlock;
- (void)setConfirmPayBlock:(id /* block */)arg0;
- (id)p_getAttributeStringWithModel:(id)arg0;
- (void)p_closeClick;
- (void)updateWithButtonModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)detailLabel;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setDetailLabel:(id)arg0;

@end
