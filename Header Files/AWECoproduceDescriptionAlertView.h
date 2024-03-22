//
//     Generated by private class-dump
//

@class NSArray, TTTAttributedLabel, AWEUIButton, UILabel, UIView, NSString;

@interface AWECoproduceDescriptionAlertView : UIView <TTTAttributedLabelDelegate> {
    UIView *_containerView;
    UILabel *_titleLabel;
    TTTAttributedLabel *_descriptionLabel;
    UIView *_bottomLine;
    AWEUIButton *_agreeButton;
    id /* block */ _tapBlock;
    id /* block */ _detailBlock;
    NSArray *_accessElements;
    NSString *_protocolString;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TTTAttributedLabel *descriptionLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) AWEUIButton *agreeButton;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ detailBlock;
@property (copy, nonatomic) NSArray *accessElements;
@property (copy, nonatomic) NSString *protocolString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)arg0 didSelectLinkWithURL:(id)arg1;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)showInView:(id)arg0 animated:(BOOL)arg1;
- (id)agreeButton;
- (void)setAgreeButton:(id)arg0;
- (void)setUI;
- (void)initDescriptionLabelContext;
- (void)agreeButtonDidTap;
- (id /* block */)detailBlock;
- (id)accessElements;
- (id)initWithTapBlock:(id /* block */)arg0 detailBlock:(id /* block */)arg1;
- (void)setDetailBlock:(id /* block */)arg0;
- (void)setAccessElements:(id)arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)descriptionLabel;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg0;
- (long long)indexOfAccessibilityElement:(id)arg0;
- (void)dismiss:(BOOL)arg0;
- (id)protocolString;
- (void)setProtocolString:(id)arg0;
- (id)bottomLine;
- (void)setBottomLine:(id)arg0;

@end
