//
//     Generated by private class-dump
//

@class UIImageView, NSString;

@interface AWEHGBannerRevisitView : UIView {
    BOOL _hasJumpButton;
    id /* block */ _closeAction;
    id /* block */ _jumpAction;
    UIImageView *_background;
    NSString *_backgroundUrl;
}

@property (nonatomic) BOOL hasJumpButton;
@property (retain, nonatomic) UIImageView *background;
@property (retain, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ jumpAction;

- (id /* block */)jumpAction;
- (id)backgroundUrl;
- (void)setBackgroundUrl:(id)arg0;
- (void)showOn:(id)arg0;
- (void)setJumpAction:(id /* block */)arg0;
- (void)setupCloseButton;
- (void)setHasJumpButton:(BOOL)arg0;
- (void)setupBackground;
- (void)setupJumpButton;
- (void)onClickCloseButton:(id)arg0;
- (BOOL)hasJumpButton;
- (void)onClickJumpButton:(id)arg0;
- (id)background;
- (void).cxx_destruct;
- (void)setBackground:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg0;
- (void)setupUI;

@end