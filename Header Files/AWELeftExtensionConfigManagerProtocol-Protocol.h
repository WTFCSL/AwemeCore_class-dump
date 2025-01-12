//
//     Generated by private class-dump
//

@protocol AWELeftExtensionConfigManagerProtocol <NSObject>

+ (id)sharedInstance;

- (void)dismissLeftExtensionPopoverView;
- (BOOL)enableHomepageLeftExtension;
- (id)getLeftExtensionIcon;
- (void)showLeftExtensionEntranceActionForView:(id)arg0 currentPage:(id)arg1;
- (BOOL)isLeftExtensionPopoverSheetShowing;
- (id)getLeftExtensionsConfigListForPage:(id)arg0;
- (void)recordLeftExtensionPopoverCellYellowDotClickedWithItemType:(id)arg0 pageTab:(id)arg1;
- (unsigned long long)getLeftExtensionIconType;
- (id)getLeftExtensionConfigModelArray;
- (BOOL)isPopoverYellowDotClickedWithItemType:(id)arg0 pageTab:(id)arg1;

@end
