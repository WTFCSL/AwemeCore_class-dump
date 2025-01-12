//
//     Generated by private class-dump
//

@class AWENearbyPageContext, NSString, AWENearbyTabForwardContext, UIViewController;
@protocol AWENearbyTabForwardAblityProtocol, AWENearbyContainerChildProtocol;

@interface AWENearbyForwardAtomicCenterPage : NSObject <AWENearbyForwardAtomicProtocol> {
    AWENearbyPageContext *pageContext;
    id /* block */ _tabForwardBlock;
    UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;
    id<AWENearbyTabForwardAblityProtocol> _tabForwardImp;
    AWENearbyTabForwardContext *_context;
}

@property (retain, nonatomic) id<AWENearbyTabForwardAblityProtocol> tabForwardImp;
@property (retain, nonatomic) AWENearbyTabForwardContext *context;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;
@property (copy, nonatomic) id /* block */ tabForwardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)tabForwardBlock;
- (id)tabForwardImp;
- (void)tryToShowForwardTabViewWith:(id)arg0 complete:(id /* block */)arg1;
- (void)preCheckoutWithBlk:(id /* block */)arg0;
- (id)c2ViewController;
- (void)setC2ViewController:(id)arg0;
- (void)setTabForwardBlock:(id /* block */)arg0;
- (void)setTabForwardImp:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
