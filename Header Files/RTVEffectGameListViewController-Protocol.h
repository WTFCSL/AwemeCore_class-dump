//
//     Generated by private class-dump
//

@protocol RTVEffectGameListViewControllerDelegate;

@protocol RTVEffectGameListViewController <RTVInteractionControllerObserver>

@property (weak, nonatomic) id<RTVEffectGameListViewControllerDelegate> delegate;
@property (nonatomic) long long style;

- (void)showEmptyView:(BOOL)arg0;
- (void)showRetryView:(BOOL)arg0;
- (long long)style;
- (id)dismiss;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setStyle:(long long)arg0;
- (id)showOnViewController:(id)arg0;

@end