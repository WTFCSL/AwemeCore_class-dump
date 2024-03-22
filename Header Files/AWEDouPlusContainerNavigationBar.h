//
//     Generated by private class-dump
//

@class UILabel, AWEButton, UIView;

@interface AWEDouPlusContainerNavigationBar : UIView {
    long long _barType;
    long long _backType;
    id /* block */ _leftActionBlock;
    id /* block */ _rightActionBlock;
    UILabel *_titleLabel;
    AWEButton *_leftBtn;
    AWEButton *_rightBtn;
    UIView *_bottomLineView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEButton *leftBtn;
@property (retain, nonatomic) AWEButton *rightBtn;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) long long backType;
@property (nonatomic) long long barType;
@property (copy, nonatomic) id /* block */ leftActionBlock;
@property (copy, nonatomic) id /* block */ rightActionBlock;

+ (id)navigationBarWithType:(long long)arg0;

- (id)leftBtn;
- (id)rightBtn;
- (void)setLeftBtn:(id)arg0;
- (void)setRightBtn:(id)arg0;
- (void)setBarType:(long long)arg0;
- (void)setBackType:(long long)arg0;
- (void)onLeftBtnAction;
- (void)onRightBtnAction;
- (id /* block */)leftActionBlock;
- (id /* block */)rightActionBlock;
- (long long)backType;
- (void)setLeftActionBlock:(id /* block */)arg0;
- (void)setRightActionBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)barType;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg0;

@end