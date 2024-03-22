//
//     Generated by private class-dump
//

@class UIImageView;

@interface BDPVideoLoadingView : UIView {
    id /* block */ _dimissBlock;
    UIImageView *_loadingView;
}

@property (retain, nonatomic) UIImageView *loadingView;
@property (copy, nonatomic) id /* block */ dimissBlock;
@property (readonly, nonatomic) BOOL needDisplay;

- (void)dismissLoadingView;
- (void)setDimissBlock:(id /* block */)arg0;
- (BOOL)needDisplay;
- (void)endLoadingAnimation;
- (id /* block */)dimissBlock;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)showLoadingView;
- (void)startLoadingAnimation;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
