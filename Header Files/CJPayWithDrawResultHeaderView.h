//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSString;

@interface CJPayWithDrawResultHeaderView : UIView {
    id /* block */ _didTapReasonBlock;
    unsigned long long _style;
    UIImageView *_stateImageView;
    UILabel *_stateLabel;
    UILabel *_amountValueLabel;
    UILabel *_amountTitleLabel;
    UILabel *_reasonLabel;
    UILabel *_defaultReasonLabel;
    UIImageView *_disclosureIcon;
    NSString *_errorMsg;
}

@property (retain, nonatomic) UIImageView *stateImageView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *amountValueLabel;
@property (retain, nonatomic) UILabel *amountTitleLabel;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UILabel *defaultReasonLabel;
@property (retain, nonatomic) UIImageView *disclosureIcon;
@property (retain, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) id /* block */ didTapReasonBlock;
@property (nonatomic) unsigned long long style;

- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (void)p_setupUI;
- (id)stateImageView;
- (void)setStateImageView:(id)arg0;
- (id)amountTitleLabel;
- (void)setAmountTitleLabel:(id)arg0;
- (void)p_adapterTheme;
- (id)amountValueLabel;
- (id)defaultReasonLabel;
- (id)disclosureIcon;
- (void)addDisclosureEventToView:(id)arg0;
- (void)disclosureReasonEvent:(id)arg0;
- (id /* block */)didTapReasonBlock;
- (void)updateWithAmountText:(id)arg0;
- (void)updateWithErrorMsg:(id)arg0;
- (void)setDidTapReasonBlock:(id /* block */)arg0;
- (void)setAmountValueLabel:(id)arg0;
- (void)setDefaultReasonLabel:(id)arg0;
- (void)setDisclosureIcon:(id)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)didMoveToWindow;
- (void)setStyle:(unsigned long long)arg0;
- (id)reasonLabel;
- (void)setReasonLabel:(id)arg0;
- (id)stateLabel;
- (void)setStateLabel:(id)arg0;

@end