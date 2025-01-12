//
//     Generated by private class-dump
//

@class UIView;

@protocol IESECShopTransitionManager <NSObject>

@property (weak, nonatomic) UIView *rootView;
@property (copy, nonatomic) id /* block */ frameUpdater;
@property (copy, nonatomic) id /* block */ fromAlphaUpdater;

- (void)setFrameUpdater:(id /* block */)arg0;
- (void)setFromAlphaUpdater:(id /* block */)arg0;
- (void)notifyFromViewProvider:(id)arg0;
- (void)notifyToViewProvider:(id)arg0;
- (id /* block */)frameUpdater;
- (id /* block */)fromAlphaUpdater;
- (void)updateTransition:(double)arg0;
- (void)startTransition;
- (void)finishTransition;
- (id)rootView;
- (void)setRootView:(id)arg0;

@end
