//
//     Generated by private class-dump
//

@class UIFont, NSMutableArray, UIView;

@interface AWEIMUserActionSheetView : UIView {
    BOOL _supportDynamicTheme;
    NSMutableArray *_actions;
    id /* block */ _cancelHandler;
    UIFont *_defaultTitleFont;
    unsigned long long _viewStyle;
    unsigned long long _animationStyle;
    UIView *_containerView;
    UIView *_backgroundView;
}

@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (retain, nonatomic) UIFont *defaultTitleFont;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) unsigned long long animationStyle;
@property (nonatomic) BOOL supportDynamicTheme;

+ (id)instanceWithActions:(id)arg0 cancelHandler:(id /* block */)arg1;
+ (BOOL)isSomeActionSheetShowing;
+ (Class)aAWEPadBizUIAdapterClass;

- (void)showOnView:(id)arg0;
- (void)reloadUI;
- (id)generateLineView;
- (void)fadeOutAnimation:(id /* block */)arg0;
- (void)clickAction:(id)arg0;
- (id)aAWEPadBizUIAdapter;
- (void)doShowAnimation:(id /* block */)arg0;
- (void)doHideAnimation:(id /* block */)arg0;
- (void)setupPanelSubviews:(id)arg0;
- (void)fadeInAnimation:(id /* block */)arg0;
- (void)defaultShowAnimation:(id /* block */)arg0;
- (void)defaultHideAnimation:(id /* block */)arg0;
- (BOOL)supportDynamicTheme;
- (void)setSupportDynamicTheme:(BOOL)arg0;
- (id)init;
- (void)setCancelHandler:(id /* block */)arg0;
- (void)dismiss;
- (void)addAction:(id)arg0;
- (void)setAnimationStyle:(unsigned long long)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)actions;
- (void)show;
- (unsigned long long)viewStyle;
- (void)setContainerView:(id)arg0;
- (void)setActions:(id)arg0;
- (id)defaultTitleFont;
- (id)containerView;
- (void)cancelAction;
- (void)setViewStyle:(unsigned long long)arg0;
- (void)setBackgroundView:(id)arg0;
- (unsigned long long)animationStyle;
- (void)dismiss:(id /* block */)arg0;
- (void)setDefaultTitleFont:(id)arg0;
- (id /* block */)cancelHandler;

@end
