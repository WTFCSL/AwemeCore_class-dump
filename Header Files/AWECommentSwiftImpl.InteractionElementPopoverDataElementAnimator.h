//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.InteractionElementPopoverDataElementAnimator : NSObject <AWEInteractionElementPopoverDataElementAnimatorProtocol> {
    void /* unknown type, empty encoding */ currentView;
    void /* unknown type, empty encoding */ currentCustomView;
    void /* unknown type, empty encoding */ currentFocusIndex;
    void /* unknown type, empty encoding */ originWidth;
    void /* unknown type, empty encoding */ originX;
    void /* unknown type, empty encoding */ originAnchor;
    void /* unknown type, empty encoding */ initialIndex;
    void /* unknown type, empty encoding */ magnifyOffsize;
    void /* unknown type, empty encoding */ itemSize;
    void /* unknown type, empty encoding */ targetNeighborAnchorX;
    void /* unknown type, empty encoding */ targetMagnifyAnchorY;
    void /* unknown type, empty encoding */ targetRecoverAnchorX;
    void /* unknown type, empty encoding */ normalItemRecover;
    void /* unknown type, empty encoding */ magnifyScale;
    void /* unknown type, empty encoding */ customViewSize;
    void /* unknown type, empty encoding */ customViewTargetRecoverAnchorX;
}

@property (nonatomic) void /* unknown type, empty encoding */ magnifyOffsize;

- (struct CGSize { double x0; double x1; })magnifyOffsize;
- (void)setMagnifyOffsize:(struct CGSize { double x0; double x1; })arg0;
- (void)getFocusAt:(id)arg0 contentCustom:(id)arg1 container:(id)arg2 index:(long long)arg3 completion:(id /* block */)arg4;
- (void)loseFocusFor:(id)arg0 contentCustom:(id)arg1 container:(id)arg2 index:(long long)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void).cxx_destruct;

@end
