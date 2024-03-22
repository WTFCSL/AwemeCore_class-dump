//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveRoomPopupService : IESLiveGeneralBaseService <IESLivePopupService, IESLiveAutoRotateAction, IESLiveSplitScreenAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)arg0;
+ (id)serviceActionsWithParam:(id)arg0;

- (void)serviceUninstall;
- (id)itemWithType:(long long)arg0;
- (void)hideWithType:(long long)arg0;
- (void)hideAllPopupItemImmediately;
- (void)showSimpleDynamicPortraitView:(id)arg0 itemType:(long long)arg1 backgroundContainer:(id)arg2 cornerRadii:(double)arg3;
- (void)removeWithItem:(id)arg0;
- (void)hideImmediatelyWithType:(long long)arg0;
- (void)hideImmediately:(id)arg0;
- (BOOL)isItemShowing:(long long)arg0;
- (void)removeWithType:(long long)arg0;
- (void)removeAllWithType:(long long)arg0;
- (id)getLastPopupItem;
- (void)showSimpleDynamicPortraitView:(id)arg0 itemType:(long long)arg1 backgroundContainer:(id)arg2 animType:(long long)arg3;
- (void)splitScreenBreakPointUpdate;
- (void)animationForAutoRotateToOrientation:(long long)arg0 duration:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (BOOL)verifyItem:(id)arg0;
- (void)hide:(id)arg0;
- (void)dealloc;
- (void)show:(id)arg0;

@end