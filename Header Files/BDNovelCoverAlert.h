//
//     Generated by private class-dump
//

@class UIButton, UILabel, UIScrollView, UIView;

@interface BDNovelCoverAlert : UIView {
    UIView *_containerView;
    UIView *_backgroundView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIScrollView *_scrollView;
    UILabel *_msgLabel;
    UIButton *_cancelBtn;
    id /* block */ _cancelBlock;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *msgLabel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (copy, nonatomic) id /* block */ cancelBlock;

+ (void)showWithText:(id)arg0 title:(id)arg1;

- (id)cancelBtn;
- (void)setCancelBtn:(id)arg0;
- (void)setMsgLabel:(id)arg0;
- (id)msgLabel;
- (void)onCloseAction:(id)arg0;
- (void)innerCloseWithCompletion:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 title:(id)arg1 content:(id)arg2;
- (void)innerShow;
- (void)setScrollView:(id)arg0;
- (id)backgroundView;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)contentView;
- (id)containerView;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (id)scrollView;
- (void)setBackgroundView:(id)arg0;
- (void)setContentView:(id)arg0;

@end
