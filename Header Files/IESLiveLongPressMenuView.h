//
//     Generated by private class-dump
//

@class NSArray, UIView, IESLiveLongPressMenuItem, UIButton;

@interface IESLiveLongPressMenuView : UIControl {
    id /* block */ _dismissBlock;
    long long _dislikeEnterFromType;
    NSArray *_menuItems;
    IESLiveLongPressMenuItem *_maskedMenuItem;
    UIView *_darkView;
    UIView *_menuItemsContainerView;
    UIButton *_backButton;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _markedRect;
}

@property (retain, nonatomic) NSArray *menuItems;
@property (retain, nonatomic) IESLiveLongPressMenuItem *maskedMenuItem;
@property (weak, nonatomic) UIView *darkView;
@property (weak, nonatomic) UIView *menuItemsContainerView;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } markedRect;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) long long dislikeEnterFromType;

+ (id)emptyMenuView;

- (void)setDarkView:(id)arg0;
- (id)darkView;
- (long long)dislikeEnterFromType;
- (void)setDislikeEnterFromType:(long long)arg0;
- (void)addDarkMaskItem:(id)arg0 maskedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)showWithContainerView:(id)arg0;
- (id)layoutDarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)menuViewDidClicked:(id)arg0;
- (void)setMaskedMenuItem:(id)arg0;
- (void)layoutDarkmaskedMenuItem;
- (void)layoutVerticalMenus;
- (id)menuItemsContainerView;
- (void)makeVisiableWithAnimation;
- (void)setMenuItemsContainerView:(id)arg0;
- (void)itemViewClicked:(id)arg0;
- (id)maskedMenuItem;
- (void)maskedMenuItemtTapped:(id)arg0;
- (void)addMenuItem:(id)arg0;
- (unsigned long long)menuItemsCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })markedRect;
- (void)setMarkedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)menuItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMenuItems:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end