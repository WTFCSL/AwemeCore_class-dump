//
//     Generated by private class-dump
//

@class AWEXTabBarUIConfig, NSArray, UIView, UIButton, UIScrollView, NSMutableArray, CALayer;

@interface AWEXTabBar : UIView {
    long long _selectedIndex;
    id /* block */ _selectedIndexCallBack;
    UIButton *_selectedButton;
    NSArray *_itemModels;
    UIScrollView *_contentScrollView;
    NSMutableArray *_buttonArray;
    CALayer *_maskView;
    AWEXTabBarUIConfig *_config;
    UIView *_contentView;
}

@property (retain, nonatomic) NSArray *itemModels;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) CALayer *maskView;
@property (retain, nonatomic) AWEXTabBarUIConfig *config;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) id /* block */ selectedIndexCallBack;
@property (retain, nonatomic) UIButton *selectedButton;

- (id)imageWithColor:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)itemModels;
- (void)setItemModels:(id)arg0;
- (void)setButtonArray:(id)arg0;
- (id)buttonArray;
- (id)createButtonWithWidth:(double)arg0 height:(double)arg1 index:(long long)arg2;
- (void)updateMaskFrame;
- (void)setButton:(id)arg0 WithModel:(id)arg1 updateColor:(BOOL)arg2;
- (void)updateButtonState:(id)arg0 isSelected:(BOOL)arg1;
- (id /* block */)selectedIndexCallBack;
- (id)maskLayerWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithArray:(id)arg0 config:(id)arg1;
- (void)updateMask:(BOOL)arg0;
- (void)updateTiTle:(id)arg0 index:(long long)arg1;
- (void)updateTabColor;
- (void)setSelectedIndexCallBack:(id /* block */)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (id)config;
- (id)maskView;
- (id)contentView;
- (void)layout;
- (id)contentScrollView;
- (void)layoutSubviews;
- (void)setMaskView:(id)arg0;
- (long long)selectedIndex;
- (void)setContentView:(id)arg0;
- (id)buttonAtIndex:(long long)arg0;
- (void)setContentScrollView:(id)arg0;
- (void)selectItem:(id)arg0;
- (id)selectedButton;
- (void)setSelectedButton:(id)arg0;
- (void)createUI;

@end
