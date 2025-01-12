//
//     Generated by private class-dump
//

@class AWEInAppMessageConfig, UILabel, UIView, UIButton;
@protocol AWEInAppMessageViewDelegate;

@interface AWEInAppMessageView : UIView {
    BOOL _dragging;
    id /* block */ _dismissBlock;
    id /* block */ _showBlock;
    id /* block */ _actionBlock;
    id<AWEInAppMessageViewDelegate> _dragDelegate;
    AWEInAppMessageConfig *_config;
    double _oriTransY;
    double _lastChangedY;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_goToButton;
    UIView *_dividingLine;
    UIView *_bottomLine;
    UIView *_imgContainerView;
}

@property (retain, nonatomic) AWEInAppMessageConfig *config;
@property (nonatomic) double oriTransY;
@property (nonatomic) double lastChangedY;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *goToButton;
@property (retain, nonatomic) UIView *dividingLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIView *imgContainerView;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (weak, nonatomic) id<AWEInAppMessageViewDelegate> dragDelegate;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)showOnView:(id)arg0;
- (id /* block */)showBlock;
- (void)setShowBlock:(id /* block */)arg0;
- (void)setOriTransY:(double)arg0;
- (double)oriTransY;
- (void)dismiss:(BOOL)arg0 dragRelease:(BOOL)arg1;
- (id)goToButton;
- (id)dividingLine;
- (id)imgContainerView;
- (void)setLastChangedY:(double)arg0;
- (double)lastChangedY;
- (void)goToButtonClicked:(id)arg0;
- (void)setGoToButton:(id)arg0;
- (void)setDividingLine:(id)arg0;
- (void)setImgContainerView:(id)arg0;
- (id)init;
- (void)setConfig:(id)arg0;
- (void)setDragging:(BOOL)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)dragDelegate;
- (BOOL)isDragging;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithConfig:(id)arg0;
- (void)setDragDelegate:(id)arg0;
- (void)pan:(id)arg0;
- (id /* block */)actionBlock;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)dismiss:(BOOL)arg0;
- (void)setupUI;
- (void)setActionBlock:(id /* block */)arg0;
- (id)bottomLine;
- (void)setBottomLine:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
