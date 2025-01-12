//
//     Generated by private class-dump
//

@class AWENaviClassTabModel, UIButton;

@interface AWENaviClassTabView : UIView {
    UIButton *_button;
    AWENaviClassTabModel *_tab;
}

@property (retain, nonatomic) AWENaviClassTabModel *tab;
@property (readonly, nonatomic) UIButton *button;
@property (nonatomic, getter=isSelected) BOOL selected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 classTab:(id)arg1;
- (void)setTab:(id)arg0;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void).cxx_destruct;
- (id)button;
- (void)setSelected:(BOOL)arg0;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (BOOL)isSelected;
- (void)setupViews;
- (id)tab;

@end
