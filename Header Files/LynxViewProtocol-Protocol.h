//
//     Generated by private class-dump
//

@class LynxView;

@protocol LynxViewProtocol <HybridKitViewProtocol>

@property (readonly, nonatomic) LynxView *lynxView;
@property (nonatomic) BOOL isLynxCreated;

- (id)findViewWithName:(id)arg0;
- (id)lynxView;
- (void)registerModule:(Class)arg0 param:(id)arg1;
- (void)registerHandler:(id /* block */)arg0 forMethod:(id)arg1;
- (void)registerShadowNode:(Class)arg0 withName:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 params:(id)arg1;
- (void)setIsLynxCreated:(BOOL)arg0;
- (BOOL)isLynxCreated;
- (void)registerModule:(Class)arg0;

@end
