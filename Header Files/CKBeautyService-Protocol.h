//
//     Generated by private class-dump
//

@protocol CKBeautyService <NSObject>

- (BOOL)isUsingBeauty;
- (void)updateBeautyAvailabilities;
- (void)reloadBeautyInCamera;
- (void)removeBeautyFromCamera;
- (BOOL)isBeautyOn;
- (void)turnOnBeauty;
- (void)turnOffBeauty;
- (void)notifySidebarFloatingViewDidAppear;
- (void)notifySidebarFloatingViewDidDisappear;
- (BOOL)isSidebarFloatingViewAppearing;
- (void)notifyBeautyPanelViewDidAppear;
- (void)notifyBeautyPanelViewDidDisappear;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;

@optional

- (void)updateAdjustedValue:(long long)arg0 effectIds:(id)arg1;

@end
