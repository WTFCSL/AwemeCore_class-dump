//
//     Generated by private class-dump
//

@protocol AWEShareListPanelProtocol <NSObject>

@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ dismissPassiveHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;

- (id /* block */)dismissPassiveHandler;
- (void)setDismissPassiveHandler:(id /* block */)arg0;
- (void)setDismissHandler:(id /* block */)arg0;
- (id /* block */)dismissHandler;
- (id /* block */)willDismissHandler;
- (void)setWillDismissHandler:(id /* block */)arg0;

@end