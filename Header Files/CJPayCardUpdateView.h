//
//     Generated by private class-dump
//

@class CJPayBindCardProtocolView, CJPayStyleButton, CJPayCustomTextFieldContainer, UILabel, CJPayBindCardContainerView, MASConstraint;

@interface CJPayCardUpdateView : UIView {
    id /* block */ _confirmBlock;
    CJPayCustomTextFieldContainer *_phoneContainer;
    CJPayBindCardProtocolView *_protocolView;
    CJPayStyleButton *_nextStepButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    CJPayBindCardContainerView *_bankCardView;
    MASConstraint *_nextStepButtonBasePhoneContainerConstraint;
    MASConstraint *_nextStepButtonBaseProtocolViewConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayBindCardContainerView *bankCardView;
@property (retain, nonatomic) CJPayCustomTextFieldContainer *phoneContainer;
@property (retain, nonatomic) CJPayBindCardProtocolView *protocolView;
@property (retain, nonatomic) CJPayStyleButton *nextStepButton;
@property (retain, nonatomic) MASConstraint *nextStepButtonBasePhoneContainerConstraint;
@property (retain, nonatomic) MASConstraint *nextStepButtonBaseProtocolViewConstraint;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (id)protocolView;
- (void)setProtocolView:(id)arg0;
- (void)p_setupUI;
- (void)p_updateUI;
- (void)setNextStepButton:(id)arg0;
- (id)nextStepButton;
- (void)p_nextButtonClick;
- (id)bankCardView;
- (id)phoneContainer;
- (void)updateWithBDPayCardUpdateModel:(id)arg0;
- (void)setPhoneContainer:(id)arg0;
- (void)setBankCardView:(id)arg0;
- (id)nextStepButtonBasePhoneContainerConstraint;
- (void)setNextStepButtonBasePhoneContainerConstraint:(id)arg0;
- (id)nextStepButtonBaseProtocolViewConstraint;
- (void)setNextStepButtonBaseProtocolViewConstraint:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
