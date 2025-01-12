//
//     Generated by private class-dump
//

@class UIButton, NSArray, UIView;

@interface AWEPendantView : UIView {
    unsigned long long _state;
    BOOL _shouldShowCloseButtonInFoldedPendant;
    BOOL _shouldHideCloseButtonInExpandedPendant;
    UIView *_contentView;
    UIButton *_dismissButton;
    id /* block */ _tapHandler;
    id /* block */ _dismissHandler;
    id /* block */ _stateChangeHandler;
    NSArray *_expandedFrameList;
    NSArray *_foldedFrameList;
    unsigned long long _resourceType;
    double _rightOffsetX;
    double _topOffsetY;
}

@property (nonatomic) double rightOffsetX;
@property (nonatomic) double topOffsetY;
@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isDismissed) BOOL dismissed;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isFolded) BOOL folded;
@property (nonatomic) BOOL shouldShowCloseButtonInFoldedPendant;
@property (nonatomic) BOOL shouldHideCloseButtonInExpandedPendant;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ stateChangeHandler;
@property (retain, nonatomic) NSArray *expandedFrameList;
@property (retain, nonatomic) NSArray *foldedFrameList;
@property (nonatomic) unsigned long long resourceType;

- (void)contentTapped;
- (void)setFolded:(BOOL)arg0;
- (void)dismissButtonTapped;
- (void)performUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setShouldShowCloseButtonInFoldedPendant:(BOOL)arg0;
- (void)setShouldHideCloseButtonInExpandedPendant:(BOOL)arg0;
- (void)setExpandedFrameList:(id)arg0;
- (void)setFoldedFrameList:(id)arg0;
- (void)playAnimationWithType:(unsigned long long)arg0;
- (void)setStateChangeHandler:(id /* block */)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dismissButtonWithAwe_width:(double)arg0;
- (BOOL)shouldShowCloseButtonInFoldedPendant;
- (id /* block */)stateChangeHandler;
- (BOOL)shouldHideCloseButtonInExpandedPendant;
- (id)foldedFrameList;
- (id)expandedFrameList;
- (void)setupPadUI;
- (void)setRightOffsetX:(double)arg0;
- (void)setTopOffsetY:(double)arg0;
- (double)rightOffsetX;
- (double)topOffsetY;
- (void)setState:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)willEnterForeground;
- (void)setDismissed:(BOOL)arg0;
- (void)didEnterBackground;
- (unsigned long long)resourceType;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setResourceType:(unsigned long long)arg0;
- (void)setState:(unsigned long long)arg0;
- (void)setDismissHandler:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isExpanded;
- (id)contentView;
- (void)setExpanded:(BOOL)arg0;
- (void)dealloc;
- (id /* block */)dismissHandler;
- (void)setContentView:(id)arg0;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (void)setupUI;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg0;
- (BOOL)isDismissed;
- (void)setupNotifications;
- (BOOL)isFolded;

@end
