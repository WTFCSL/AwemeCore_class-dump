//
//     Generated by private class-dump
//

@protocol IESLiveLinkmicStreamLayoutProvider <NSObject>

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListFrame;
- (id)streamLayoutFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamHostLayout;
- (struct CGSize { double x0; double x1; })sessionViewSize;
- (double)sessionsSpacing;
- (BOOL)isAnchor;

@optional

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (struct CGSize { double x0; double x1; })placeholderSize;

@end
