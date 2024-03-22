//
//     Generated by private class-dump
//

@class UILabel, UIButton;
@protocol RTVEffectGameListHintViewDelegate, RxInjector;

@interface RTVEffectGameListHintView : UIView {
    id<RTVEffectGameListHintViewDelegate> _delegate;
    id<RxInjector> _injector;
    UILabel *_noGameLabel;
    UILabel *_loadFailedLabel;
    UIButton *_retryButton;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UILabel *noGameLabel;
@property (readonly, nonatomic) UILabel *loadFailedLabel;
@property (readonly, nonatomic) UIButton *retryButton;
@property (weak, nonatomic) id<RTVEffectGameListHintViewDelegate> delegate;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)showEmptyView:(BOOL)arg0;
- (void)__buttonTouchUpInside:(id)arg0;
- (void)showRetryView:(BOOL)arg0;
- (id)noGameLabel;
- (id)loadFailedLabel;
- (void).cxx_destruct;
- (id)injector;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)retryButton;

@end
