//
//     Generated by private class-dump
//

@interface TempoiOS.TempoScrollView : UIScrollView <NSObject, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ animationName;
    void /* unknown type, empty encoding */ animationGroup;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ firstRending;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ enableScrollBar;
    void /* unknown type, empty encoding */ scrollBarOffset;
    void /* unknown type, empty encoding */ scrollBarWidth;
    void /* unknown type, empty encoding */ scrollBarLength;
    void /* unknown type, empty encoding */ scrollBarContentLength;
    void /* unknown type, empty encoding */ scrollBarRadius;
    void /* unknown type, empty encoding */ scrollBarColor;
    void /* unknown type, empty encoding */ scrollBarContentColor;
    void /* unknown type, empty encoding */ initScrollOffset;
    void /* unknown type, empty encoding */ onScroll;
    void /* unknown type, empty encoding */ onScrollEnd;
    void /* unknown type, empty encoding */ onScrollToBounce;
    void /* unknown type, empty encoding */ bounceDirections;
    void /* unknown type, empty encoding */ initOffsetScrollTriggered;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollBar;
}

- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end