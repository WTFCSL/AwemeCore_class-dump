//
//     Generated by private class-dump
//

@protocol BDXTabbarItemProViewDelegate;

@interface BDXTabbarItemProView : UIView {
    id<BDXTabbarItemProViewDelegate> _delegate;
}

@property (weak, nonatomic) id<BDXTabbarItemProViewDelegate> delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDelegate:(id)arg0;

@end
