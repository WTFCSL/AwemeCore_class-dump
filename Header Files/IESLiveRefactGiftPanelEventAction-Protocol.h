//
//     Generated by private class-dump
//

@protocol IESLiveRefactGiftPanelEventAction <NSObject>

@optional

- (void)gpe_dataSharing_currentPageIndexWillChangeFromIndex:(unsigned long long)arg0 toIndex:(unsigned long long)arg1;
- (void)gpe_dataSharing_currentPageIndexChangedFromIndex:(unsigned long long)arg0 toIndex:(unsigned long long)arg1;
- (void)gpe_dataSharing_currentPageTypeChangedFromType:(long long)arg0 toType:(long long)arg1;
- (void)gpe_dataSharing_currentSelectedGiftItemChangedFromItem:(id)arg0 toItem:(id)arg1;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (void)gpe_didGiftPanelShow;
- (void)gpe_didGiftExtraInfoUpdate:(id)arg0;
- (void)gpe_sendCurrentSelectedItem;
- (void)gpe_changeTabWithIndex:(unsigned long long)arg0 active:(BOOL)arg1;
- (void)gpe_initTabWithIndex:(unsigned long long)arg0;
- (void)gpe_changeTabBackgroundImageUrlList:(id)arg0;
- (void)gpe_didChangeToGiftList:(id)arg0 index:(unsigned long long)arg1 active:(BOOL)arg2;
- (void)gpe_updateFirstChargeBanner;
- (void)gpe_onSelectedWithItem:(id)arg0 changed:(BOOL)arg1;
- (void)gpe_giftListScrollViewWillBeginDragging:(id)arg0 tabIndex:(long long)arg1 layoutDirection:(long long)arg2;
- (void)gpe_giftListScrollViewDidEndDecelerating:(id)arg0 tabIndex:(long long)arg1 layoutDirection:(long long)arg2;
- (void)gpe_giftListScrollViewDidScroll:(id)arg0 tabIndex:(long long)arg1 layoutDirection:(long long)arg2;
- (void)gpe_giftListScrollViewDidBeginPresetScrollWithAnimated:(BOOL)arg0 isBegin:(BOOL)arg1;
- (void)gpe_giftPageScrollViewDidScroll:(id)arg0;
- (void)gpe_giftListSortTypeDidChange:(long long)arg0;
- (void)gpe_showBigGiftCountDownView:(long long)arg0 item:(id)arg1 transaction:(id)arg2 dynamicParams:(id)arg3;

@end