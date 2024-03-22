//
//     Generated by private class-dump
//

@interface AWEProgressHotZoneConfig : NSObject {
    BOOL _shouldEnlargeHotZone;
    unsigned long long _maskWindowGestureType;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _hotEdgeInsetForPanGesture;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _hotEdgeInsetForLongPress;
}

@property (nonatomic) BOOL shouldEnlargeHotZone;
@property (nonatomic) unsigned long long maskWindowGestureType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hotEdgeInsetForPanGesture;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hotEdgeInsetForLongPress;

- (BOOL)shouldEnlargeHotZone;
- (void)setShouldEnlargeHotZone:(BOOL)arg0;
- (unsigned long long)maskWindowGestureType;
- (void)setMaskWindowGestureType:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hotEdgeInsetForPanGesture;
- (void)setHotEdgeInsetForPanGesture:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hotEdgeInsetForLongPress;
- (void)setHotEdgeInsetForLongPress:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;

@end