//
//     Generated by private class-dump
//

@class MASConstraint, CJPayStyleButton, CJPayButton, UILabel, CJPayPayAgainNewCardCommonView, CJPayPayAgainOldCardCommonView;

@interface CJPayPayAgainPopUpView : UIView {
    CJPayButton *_closeBtn;
    CJPayStyleButton *_confirmPayBtn;
    CJPayButton *_otherPayMethodButton;
    UILabel *_titleLabel;
    CJPayPayAgainNewCardCommonView *_newCardContentView;
    CJPayPayAgainOldCardCommonView *_oldCardContentView;
    UILabel *_oldCardDiscountLabel;
    MASConstraint *_confirmButtonTopBaseOldCardBottomConstraint;
    MASConstraint *_confirmButtonTopBaseNewCardBottomConstraint;
}

@property (retain, nonatomic) CJPayButton *closeBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayPayAgainNewCardCommonView *newCardContentView;
@property (retain, nonatomic) CJPayPayAgainOldCardCommonView *oldCardContentView;
@property (retain, nonatomic) UILabel *oldCardDiscountLabel;
@property (retain, nonatomic) CJPayStyleButton *confirmPayBtn;
@property (retain, nonatomic) CJPayButton *otherPayMethodButton;
@property (retain, nonatomic) MASConstraint *confirmButtonTopBaseOldCardBottomConstraint;
@property (retain, nonatomic) MASConstraint *confirmButtonTopBaseNewCardBottomConstraint;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)p_setupUI;
- (id)confirmPayBtn;
- (void)setConfirmPayBtn:(id)arg0;
- (void)refreshWithHintInfo:(id)arg0;
- (id)p_getTitleText:(id)arg0;
- (id)otherPayMethodButton;
- (id)oldCardContentView;
- (id)newCardContentView;
- (void)setOtherPayMethodButton:(id)arg0;
- (void)setOldCardContentView:(id)arg0;
- (void)setNewCardContentView:(id)arg0;
- (id)oldCardDiscountLabel;
- (id)confirmButtonTopBaseOldCardBottomConstraint;
- (id)confirmButtonTopBaseNewCardBottomConstraint;
- (id)p_getAttributeStringWithHintInfo:(id)arg0;
- (void)setConfirmButtonTopBaseNewCardBottomConstraint:(id)arg0;
- (void)setConfirmButtonTopBaseOldCardBottomConstraint:(id)arg0;
- (void)setOldCardDiscountLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;

@end