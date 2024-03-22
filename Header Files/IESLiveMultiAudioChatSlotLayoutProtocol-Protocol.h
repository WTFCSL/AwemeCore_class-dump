//
//     Generated by private class-dump
//

@class NSArray;

@protocol IESLiveMultiAudioChatSlotLayoutProtocol <NSObject>

@property (readonly, nonatomic) int uilayout;
@property (retain, nonatomic) NSArray *slots;

- (int)uilayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (BOOL)isSquareLayout;
- (struct CGSize { double x0; double x1; })anchorAvatarSize;
- (struct CGSize { double x0; double x1; })audienceAvatarSize;
- (void)makeAnchorSlotConstraint;
- (void)makeAudienceSlotsConstraint;
- (void)updateSlotViewsWithKeyboardShowing:(BOOL)arg0;
- (id)audienceSlotViewForUser:(id)arg0 inUserList:(id)arg1;
- (id)anchorSlot;
- (BOOL)needShowGuideAnimationInAnchorSeatView;
- (BOOL)canChangePosition;
- (double)fanBGViewAlpha;
- (id)slots;
- (void)setSlots:(id)arg0;

@optional

- (void)updateAnchorPosition:(id)arg0 guestList:(id)arg1;
- (void)makeConstraintForTeamFight:(BOOL)arg0 flexible:(BOOL)arg1;

@end