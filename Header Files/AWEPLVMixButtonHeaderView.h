//
//     Generated by private class-dump
//

@class UIImageView, NSMutableSet, UILabel, UIView, NSMutableArray;

@interface AWEPLVMixButtonHeaderView : UICollectionReusableView {
    UIView *_containerView;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    NSMutableSet *_hiddenButtonSet;
    NSMutableArray *_displayingButtonList;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) NSMutableSet *hiddenButtonSet;
@property (retain, nonatomic) NSMutableArray *displayingButtonList;

+ (double)heightWithBreakPoint:(struct { long long x0; long long x1; })arg0;

- (void)updateTitleIcon:(id)arg0;
- (void)updateViewForBreakPoint;
- (void)updateContainerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)insertButtonWithImage:(id)arg0 title:(id)arg1 action:(id /* block */)arg2;
- (void)setHiddenButtonSet:(id)arg0;
- (void)setDisplayingButtonList:(id)arg0;
- (id)displayingButtonList;
- (id)hiddenButtonSet;
- (void)insertButtonWithImage:(id)arg0 action:(id /* block */)arg1;
- (void)insertButtonWithTitle:(id)arg0 action:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (void)setupView;
- (void)setTitleFontSize:(long long)arg0;
- (void)updateTitle:(id)arg0;

@end