//
//     Generated by private class-dump
//

@class ACCSlidingViewController;

@protocol ACCSlidingTabbarProtocol <NSObject>

@property (weak, nonatomic) ACCSlidingViewController *slidingViewController;
@property (nonatomic) long long selectedIndex;

- (id)slidingViewController;
- (void)setSlidingViewController:(id)arg0;
- (void)slidingControllerDidScroll:(id)arg0;
- (void)setSelectedIndex:(long long)arg0;
- (long long)selectedIndex;

@optional

- (void)updateSelectedLineFrame;
- (void)setSelectedIndex:(long long)arg0 animated:(BOOL)arg1 tapped:(BOOL)arg2;

@end
