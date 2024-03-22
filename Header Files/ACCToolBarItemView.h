//
//     Generated by private class-dump
//

@class NSString, LOTAnimationView, UIView, UILabel, UIButton;

@interface ACCToolBarItemView : UIView <ACCBarItemCustomView> {
    BOOL needShow;
    BOOL _enabled;
    BOOL _isDivisionItemView;
    BOOL _shownFirstTime;
    BOOL _showLabel;
    BOOL _enableOffscreenOpt;
    NSString *_imageName;
    NSString *_selectedImageName;
    UIButton *barItemButton;
    id /* block */ itemViewDidClicked;
    UIView *_titleView;
    UIButton *_button;
    void *_itemId;
    id /* block */ _lottieCompletionBlock;
    UIView *_guideView;
    unsigned long long _direction;
    LOTAnimationView *_lottieView;
    UIView *_divisionView;
    NSString *_itemLabelText;
    struct CGSize { double width; double height; } _buttonSize;
}

@property (nonatomic) unsigned long long direction;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (nonatomic) BOOL showLabel;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIView *divisionView;
@property (copy, nonatomic) NSString *itemLabelText;
@property (nonatomic) BOOL enableOffscreenOpt;
@property (retain, nonatomic) UIView *titleView;
@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL enable;
@property (nonatomic) void *itemId;
@property (nonatomic) BOOL isDivisionItemView;
@property (nonatomic) BOOL shownFirstTime;
@property (copy, nonatomic) id /* block */ lottieCompletionBlock;
@property (retain, nonatomic) UIView *guideView;
@property (nonatomic) BOOL needShow;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *selectedImageName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double alpha;
@property (weak, nonatomic) UIButton *barItemButton;
@property (copy, nonatomic) id /* block */ itemViewDidClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needShow;
- (id)lottieView;
- (void)setLottieView:(id)arg0;
- (void)onButtonClicked:(id)arg0;
- (id)barItemButton;
- (void)setBarItemButton:(id)arg0;
- (BOOL)showLabel;
- (void)setShowLabel:(BOOL)arg0;
- (void)setNeedShow:(BOOL)arg0;
- (id)selectedImageName;
- (void)setSelectedImageName:(id)arg0;
- (void)setEnableOffscreenOpt:(BOOL)arg0;
- (BOOL)enableOffscreenOpt;
- (void)setItemViewDidClicked:(id /* block */)arg0;
- (id /* block */)itemViewDidClicked;
- (void)showLabelWithDuration:(double)arg0;
- (void)hideLabelWithDuration:(double)arg0;
- (void)setShownFirstTime:(BOOL)arg0;
- (id)p_createBarItemButton:(id)arg0;
- (id)p_createBarItemLabel:(id)arg0;
- (id)p_createBarItemLottieView:(id)arg0;
- (void)p_needDisableNotHideButton:(id)arg0;
- (void)setupDivisionView;
- (id)divisionView;
- (id)itemLabelText;
- (id /* block */)lottieCompletionBlock;
- (void)setItemLabelText:(id)arg0;
- (void)p_hideLabel:(BOOL)arg0;
- (BOOL)buttonShouldReceiveHit;
- (void)configWithItem:(id)arg0 direction:(unsigned long long)arg1 buttonSize:(struct CGSize { double x0; double x1; })arg2;
- (void)configWithDivisionItem:(id)arg0 buttonSize:(struct CGSize { double x0; double x1; })arg1;
- (BOOL)isDivisionItemView;
- (void)setIsDivisionItemView:(BOOL)arg0;
- (BOOL)shownFirstTime;
- (void)setLottieCompletionBlock:(id /* block */)arg0;
- (void)setDivisionView:(id)arg0;
- (BOOL)enable;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (void)setAlpha:(double)arg0;
- (id)button;
- (void)setButton:(id)arg0;
- (unsigned long long)direction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleView:(id)arg0;
- (id)title;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void)setEnabled:(BOOL)arg0;
- (double)alpha;
- (void)setEnable:(BOOL)arg0;
- (id)label;
- (void)setButtonSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setDirection:(unsigned long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)titleView;
- (void)setTitle:(id)arg0;
- (void)setupUI;
- (void *)itemId;
- (void)setItemId:(void *)arg0;
- (void)makeLayout;
- (void)setGuideView:(id)arg0;
- (id)guideView;

@end
