//
//     Generated by private class-dump
//

@interface AWEBDImageView : BDImageView {
    BOOL _enableLeftHandOptimize;
    id /* block */ _pointInsideBlock;
}

@property (nonatomic) BOOL enableLeftHandOptimize;
@property (copy, nonatomic) id /* block */ pointInsideBlock;

- (BOOL)enableLeftHandOptimize;
- (void)setEnableLeftHandOptimize:(BOOL)arg0;
- (id /* block */)pointInsideBlock;
- (void)setPointInsideBlock:(id /* block */)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;

@end
