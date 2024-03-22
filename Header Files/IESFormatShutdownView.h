//
//     Generated by private class-dump
//

@class UIButton, IESLiveImageView;

@interface IESFormatShutdownView : UIView {
    IESLiveImageView *_shutdownImageView;
    UIButton *_retryButton;
    id /* block */ _retryBlock;
}

@property (retain, nonatomic) IESLiveImageView *shutdownImageView;
@property (retain, nonatomic) UIButton *retryButton;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void)configUI;
- (id)initWithRetryBlock:(id /* block */)arg0;
- (void)changeTipsState:(BOOL)arg0;
- (id)shutdownImageView;
- (void)setShutdownImageView:(id)arg0;
- (void).cxx_destruct;
- (void)retryAction;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;
- (id /* block */)retryBlock;
- (void)setRetryBlock:(id /* block */)arg0;
- (void)updateUI:(id)arg0;

@end