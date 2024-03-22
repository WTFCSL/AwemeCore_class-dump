//
//     Generated by private class-dump
//

@class UIImageView, UIStackView, UIView;

@interface AWEPublishSuccessViewModern : UIView {
    id /* block */ _bindAction;
    UIView *_containerView;
    UIImageView *_coverImageView;
    UIStackView *_textContainerView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIStackView *textContainerView;
@property (copy, nonatomic) id /* block */ bindAction;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setupContainerView;
- (id /* block */)bindAction;
- (id)initWithAweme:(id)arg0 type:(unsigned long long)arg1 title:(id)arg2;
- (void)setBindAction:(id /* block */)arg0;
- (void)setupCoverWithModel:(id)arg0;
- (void)setupTextWithModel:(id)arg0 type:(unsigned long long)arg1 title:(id)arg2;
- (void)setupButtonsWithType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)actionButtonTapped;
- (id)textContainerView;
- (void)setTextContainerView:(id)arg0;

@end