//
//     Generated by private class-dump
//

@class UIImageView, UIButton, UIView;

@interface AWENearbyWidgetView : UIView {
    id /* block */ _tapHandler;
    id /* block */ _dismissHandler;
    unsigned long long _state;
    UIView *_contentView;
    UIImageView *_expandedImageView;
    UIImageView *_foldedImageView;
    UIButton *_dismissButton;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *expandedImageView;
@property (retain, nonatomic) UIImageView *foldedImageView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) unsigned long long state;

- (void)contentTapped;
- (void)dismissButtonTapped;
- (void)performUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)expandedImageView;
- (void)setExpandedImageView:(id)arg0;
- (id)foldedImageView;
- (void)performHiddenAnimation;
- (void)performFoldedAnimation;
- (void)__configFoldedState;
- (void)performExpandedAnimation;
- (void)__configExpandedState;
- (void)updateWidgetWithExpandedImageURLList:(id)arg0 foldedImageURLList:(id)arg1 completion:(id /* block */)arg2;
- (void)setFoldedImageView:(id)arg0;
- (void)setState:(unsigned long long)arg0 animated:(BOOL)arg1;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (void)setDismissHandler:(id /* block */)arg0;
- (id)initWithType:(unsigned long long)arg0;
- (id)contentView;
- (id /* block */)dismissHandler;
- (void)setContentView:(id)arg0;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (void)setupUI;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg0;

@end
