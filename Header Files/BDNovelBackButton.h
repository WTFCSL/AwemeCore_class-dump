//
//     Generated by private class-dump
//

@class UIButton;

@interface BDNovelBackButton : UIView {
    id /* block */ _backBtnClickBlock;
    UIButton *_backBtn;
}

@property (copy, nonatomic) id /* block */ backBtnClickBlock;
@property (retain, nonatomic) UIButton *backBtn;

- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (id /* block */)backBtnClickBlock;
- (void)onBackBtnClick;
- (void)setBackBtnClickBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;

@end
