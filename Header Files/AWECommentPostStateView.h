//
//     Generated by private class-dump
//

@interface AWECommentPostStateView : UILabel {
    BOOL _isBGColorWhite;
    id /* block */ _retryActionBlock;
}

@property (nonatomic) BOOL isBGColorWhite;
@property (copy, nonatomic) id /* block */ retryActionBlock;

- (void)onUIThemeChange;
- (void)setIsBGColorWhite:(BOOL)arg0;
- (BOOL)isBGColorWhite;
- (void)showRetryingState;
- (void)showFailedState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id /* block */)retryActionBlock;
- (void)setRetryActionBlock:(id /* block */)arg0;
- (void)tapAction:(id)arg0;

@end
