//
//     Generated by private class-dump
//

@interface IESECRelationTransparentView : UIView {
    BOOL _hitTestResponds;
    id /* block */ _layoutSubviewsProxy;
}

@property (copy, nonatomic) id /* block */ layoutSubviewsProxy;
@property (nonatomic, getter=isHitTestResponds) BOOL hitTestResponds;

+ (id)view;

- (void)setLayoutSubviewsProxy:(id /* block */)arg0;
- (id /* block */)layoutSubviewsProxy;
- (BOOL)isHitTestResponds;
- (void)setHitTestResponds:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end