//
//     Generated by private class-dump
//

@protocol AWELivePriorityElementProtocol <NSObject>

- (id)slotIdentity;
- (unsigned long long)excludeStatus;
- (BOOL)visible;
- (int)priority;
- (void)setVisible:(BOOL)arg0;

@optional

- (void)restDataIfNeed;
- (void)showLiveElementWithWillAnimations:(id /* block */)arg0 animations:(id /* block */)arg1 completion:(id /* block */)arg2;

@end