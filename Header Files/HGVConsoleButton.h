//
//     Generated by private class-dump
//

@interface HGVConsoleButton : UIButton {
    BOOL _isMoved;
    BOOL _isTaged;
    struct CGPoint { double x; double y; } _beganPoint;
}

@property (nonatomic) struct CGPoint { double x; double y; } beganPoint;
@property (nonatomic) BOOL isMoved;
@property (nonatomic) BOOL isTaged;

- (BOOL)isMoved;
- (void)setIsMoved:(BOOL)arg0;
- (void)setIsTaged:(BOOL)arg0;
- (BOOL)isTaged;
- (struct CGPoint { double x0; double x1; })beganPoint;
- (void)setBeganPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;

@end
