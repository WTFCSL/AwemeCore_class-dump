//
//     Generated by private class-dump
//

@protocol IESECTabKitInterceptCloseService <NSObject>

@property (copy, nonatomic) id /* block */ willCloseAction;

- (void)close:(id)arg0 animated:(BOOL)arg1;
- (void)close:(id)arg0 action:(unsigned long long)arg1;
- (void)configInterceptClose:(id)arg0;
- (void)ackCloseActionIntercepted;
- (void)setupInterceptClose;
- (void)enableInteractivePopIntercept:(BOOL)arg0;
- (id)currentInterceptCloseConfig;
- (void)close:(id)arg0 action:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id /* block */)willCloseAction;
- (void)setWillCloseAction:(id /* block */)arg0;
- (void)close:(id)arg0;

@end
