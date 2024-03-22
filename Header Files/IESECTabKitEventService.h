//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface IESECTabKitEventService : IESECTabKitService <IESECTabKitEventService, IESECTabKitEventSubscriber> {
    NSHashTable *_subscribers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEventSubscriber:(id)arg0;
- (void)iesectabkit_willMoveToTabItem:(id)arg0;
- (void)iesectabkit_didMoveToTabItem:(id)arg0 moveType:(unsigned long long)arg1;
- (void)iesectabkit_cancelMoveToTabItem:(id)arg0;
- (void)iesectabkit_willDisplayTopTabItem:(id)arg0;
- (void)iesectabkit_didTapAtTopTabItem:(id)arg0;
- (void)iesectabkit_didSelectTopTabItem:(id)arg0;
- (void)iesectabkit_willDisplayTabItem:(id)arg0;
- (void)iesectabkit_willDisplayBottomTabItem:(id)arg0;
- (void)iesectabkit_didTapAtBottomTabItem:(id)arg0;
- (void)iesectabkit_didSelectBottomTabItem:(id)arg0;
- (void)iesectabkit_willUpdateScreenState:(unsigned long long)arg0;
- (void)iesectabkit_didUpdateScreenState:(unsigned long long)arg0;
- (void)iesectabkit_needsUpdateStatusBarStyle;
- (void)iesectabkit_didInterceptCloseAction:(unsigned long long)arg0 tabItem:(id)arg1;
- (void)iesectabkit_didDisplayNavItem:(id)arg0;
- (void)iesectabkit_didSelectNavItem:(id)arg0;
- (void)iesectabkit_tabItem:(id)arg0 visibilityDidChange:(BOOL)arg1;
- (void)iesectabkit_tabItem:(id)arg0 hybridViewDidFinishLoadWithURL:(id)arg1 error:(id)arg2;
- (void)iesectabkit_tabItem:(id)arg0 hybridViewDidScroll:(id)arg1;
- (void)iesectabkit_splitSlideContainerDidScroll:(id)arg0;
- (void)iesectabkit_firstScreenLoaded:(id)arg0;
- (void)iesectabkit_willDisplayPopup:(id)arg0;
- (void)iesectabkit_didDismissPopup:(id)arg0;
- (id)subscriberArrayBySelector:(SEL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;

@end