//
//     Generated by private class-dump
//

@protocol IESLiveInteractiveEntranceRouter <IESLiveInteractionModuleEntranceInterface>

- (void)showEntranceNavigationControllerWith:(id)arg0;
- (void)showEntranceNavigationControllerWith:(id)arg0 completion:(id /* block */)arg1;
- (void)dismissEntranceNavigationController;
- (id)entranceNavigationController;
- (void)updateInteractItemAlpha:(double)arg0;
- (void)releaseInteractCustomItem;
- (void)popEntranceNavigationController;
- (void)showEntranceNavigationControllerWith:(id)arg0 forceAnimated:(BOOL)arg1;
- (void)retainInteractCustomItemWithIneractiveScene:(unsigned long long)arg0;
- (void)releaseInteractCustomItemFromIneractiveScene:(unsigned long long)arg0;
- (void)showInteractItem;
- (void)hideInteractItem;
- (BOOL)enableSwitchToFront;
- (void)updatePlaymodeEntranceItemAlpha:(double)arg0;
- (void)showVideoInteractionSwitchPanel;
- (void)updateItemsForBigParty:(BOOL)arg0;

@end
