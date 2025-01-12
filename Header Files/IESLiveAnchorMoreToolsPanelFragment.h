//
//     Generated by private class-dump
//

@class HTSLiveExpandToolbarItem, NSMutableArray, NSString;

@interface IESLiveAnchorMoreToolsPanelFragment : IESLiveRoomComponent <IESLiveAnchorMoreToolsPanelInterface, IESLiveToolbarComponentHandler> {
    HTSLiveExpandToolbarItem *_groupItem;
    NSMutableArray *_ignoreInterceptGroupItemIds;
}

@property (retain, nonatomic) HTSLiveExpandToolbarItem *groupItem;
@property (retain, nonatomic) NSMutableArray *ignoreInterceptGroupItemIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)showMorePanelView;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)ignoreInterceptForGroupItemWithItemIdentifier:(id)arg0;
- (void)showGroupItem:(BOOL)arg0;
- (void)showRoomIntroductionView;
- (void)insertMoreToolbarItem;
- (void)setupGroupItem:(id)arg0;
- (BOOL)interceptToolBarItemEventWhenPaused;
- (id)ignoreInterceptGroupItemIds;
- (void)showVRLiveSwitchBubbleView;
- (void)showSubPanelWithItems:(id)arg0;
- (void)trackGuideShowWithContent:(id)arg0;
- (void)setIgnoreInterceptGroupItemIds:(id)arg0;
- (void).cxx_destruct;
- (id)groupItem;
- (void)setGroupItem:(id)arg0;

@end
