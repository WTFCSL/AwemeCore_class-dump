//
//     Generated by private class-dump
//

@protocol AWELeftSideBarStencilViewProtocol <NSObject>

- (void)leftSideBarThemeDidChange:(long long)arg0;
- (BOOL)leftSideBarRedDotIsShow;
- (BOOL)leftSideBarSubTitleIsShow;
- (double)leftSideBarStencilViewHeight;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (void)updateLeftSideBarSubTitle:(id)arg0;

@optional

- (void)updateListCellContext:(id)arg0 cellDataModel:(id)arg1;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)arg0 withMaxCount:(unsigned long long)arg1;
- (long long)leftSideBarRedDotStyle;
- (void)reloadStencilViewUI;
- (void)updateLeftSideBarUnreadCount:(unsigned long long)arg0;
- (double)leftSideBarStencilViewWidth;

@end