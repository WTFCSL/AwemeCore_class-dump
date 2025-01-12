//
//     Generated by private class-dump
//

@protocol BDUGHostNavigationProtocol <BDUGServiceProtocol>

- (id)bdugTopViewController;
- (void)bdugPushViewController:(id)arg0 animated:(BOOL)arg1;
- (void)bdugPresentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)bdugHostOpenUrl:(id)arg0;
- (void)bdugHostOpenUrl:(id)arg0 completion:(id /* block */)arg1;

@optional

- (BOOL)bdugSwitchToActivityTabWithHintSchema:(id)arg0;
- (BOOL)bdugSwitchToActivityTabWithHintSchema:(id)arg0 rawParams:(id)arg1;
- (unsigned long long)bdugIsShowingVC:(id)arg0;

@end
