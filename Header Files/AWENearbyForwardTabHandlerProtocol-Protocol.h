//
//     Generated by private class-dump
//

@class UIViewController, AWENearbyPageContext;
@protocol AWENearbyContainerChildProtocol;

@protocol AWENearbyForwardTabHandlerProtocol <NSObject>

@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;

- (id)initWithPageContext:(id)arg0 c2ViewController:(id)arg1;
- (void)enterNearbyLifeTab;
- (void)leaveNearbyLifeTab;
- (id)c2ViewController;
- (void)setC2ViewController:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end