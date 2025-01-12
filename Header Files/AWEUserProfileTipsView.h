//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface AWEUserProfileTipsView : UIView {
    UIImageView *_iconImageView;
    UILabel *_tipContentLabel;
    UIButton *_closeButton;
    id /* block */ _completBlock;
}

@property (copy, nonatomic) id /* block */ completBlock;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipContentLabel;
@property (retain, nonatomic) UIButton *closeButton;

- (id)tipContentLabel;
- (void)setTipContentLabel:(id)arg0;
- (void)p_closeButtonTapped;
- (void)setupSubviewWith:(id)arg0;
- (void)setCompletBlock:(id /* block */)arg0;
- (id /* block */)completBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 tips:(id)arg1 closeCompletBlock:(id /* block */)arg2;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
