//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBaseElementView : UIView {
    BOOL _subviewHitTestBeyondEdgeEnable;
    NSString *_elementClassName;
}

@property (copy, nonatomic) NSString *elementClassName;
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;

- (void)setSubviewHitTestBeyondEdgeEnable:(BOOL)arg0;
- (BOOL)subviewHitTestBeyondEdgeEnable;
- (void)setElementClassName:(id)arg0;
- (BOOL)isActiveOfView:(id)arg0;
- (id)elementClassName;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end