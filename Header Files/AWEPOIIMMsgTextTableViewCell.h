//
//     Generated by private class-dump
//

@interface AWEPOIIMMsgTextTableViewCell : AWEPOIIMBaseMessageTableViewCellV2

- (void)configWithViewModel:(id)arg0;
- (void)setupContainerView;
- (void)handleContainerLongPressGesture:(id)arg0;
- (id)makeMessageAttributedString;
- (void)handleLongGestureAtLocation:(struct CGPoint { double x0; double x1; })arg0 locationInView:(id)arg1;
- (BOOL)menuViewRectContainsPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)p_showMenuAtLocation:(struct CGPoint { double x0; double x1; })arg0 locationInView:(id)arg1 moreEmoticon:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__getIMCustomMenuViewCellBubbleFrameInScreen;
- (struct CGPoint { double x0; double x1; })__getIMCustomMenuViewTapLocationInScreenAtLocation:(struct CGPoint { double x0; double x1; })arg0 locationInView:(id)arg1;
- (id)__getIMCustomMenuViewMenuItems;
- (id)menuTargetView;
- (void)copyCellText:(id)arg0;

@end
