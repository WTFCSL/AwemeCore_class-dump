//
//     Generated by private class-dump
//

@protocol BDLynxLiveLightContainerDelegate;

@interface BDLynxLiveLightContainer : UIView {
    id<BDLynxLiveLightContainerDelegate> _uiDelegate;
}

@property (weak, nonatomic) id<BDLynxLiveLightContainerDelegate> uiDelegate;

- (void)checkPlayer;
- (void).cxx_destruct;
- (void)setUiDelegate:(id)arg0;
- (id)uiDelegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
