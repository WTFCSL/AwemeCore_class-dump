//
//     Generated by private class-dump
//

@protocol AFDMultiTabDelegate;

@protocol AFDMultiTabManagerProtocol <NSObject>

@property (weak, nonatomic) id<AFDMultiTabDelegate> delegate;

- (BOOL)updateCurrentTabsList;
- (void)switchToTab:(id)arg0 withParams:(id)arg1;
- (BOOL)canSwitchToTab:(id)arg0;
- (BOOL)isShowingTab:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
