//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, HTSLiveInteractiveAPIV2, IESLiveScreencastLinkerSearchPanel, UILabel, NSMutableArray, UITableView;
@protocol IESLiveScrollRefreshService;

@interface IESLiveScreencastLinkAnchorRootPanel : IESLiveGameInteractPopupViewController <UITableViewDataSource, UITableViewDelegate, IESLiveScreencastLinkAnchorParticipationInfo> {
    HTSLiveInteractiveAPIV2 *_api;
    NSMutableArray *_sectionList;
    NSMutableDictionary *_rivalExtraInfoMap;
    NSMutableDictionary *_participationItemMap;
    UITableView *_tableView;
    UILabel *_emptyLabel;
    id<IESLiveScrollRefreshService> _scrollRefreshService;
    IESLiveScreencastLinkerSearchPanel *_searchPanel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
}

@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *api;
@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) NSMutableDictionary *rivalExtraInfoMap;
@property (retain, nonatomic) NSMutableDictionary *participationItemMap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) id<IESLiveScrollRefreshService> scrollRefreshService;
@property (weak, nonatomic) IESLiveScreencastLinkerSearchPanel *searchPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)searchPanel;
- (void)setSearchPanel:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (void)p_emptyAuxiliaryData;
- (void)p_resolveRivalExtraInfo:(id)arg0;
- (id)rivalExtraInfoMap;
- (id)p_buildList:(id)arg0 requestID:(id)arg1 listType:(unsigned long long)arg2;
- (id)p_buildFollowListWithValidRooms:(id)arg0 invalidRooms:(id)arg1 requestID:(id)arg2;
- (void)p_setupItem:(id)arg0 forAnchorID:(id)arg1 inContainer:(id)arg2;
- (id)participationItemMap;
- (void)p_setupItemState:(long long)arg0 forAnchorID:(id)arg1 inContainer:(id)arg2;
- (id)p_makeNormalCellItemWithRoomModel:(id)arg0 listType:(unsigned long long)arg1 requestID:(id)arg2;
- (void)cancelInviteUser:(id)arg0;
- (void)setRivalExtraInfoMap:(id)arg0;
- (void)setParticipationItemMap:(id)arg0;
- (id)scrollRefreshService;
- (id)p_makeSectionHeaderViewWithTitle:(id)arg0;
- (void)setScrollRefreshService:(id)arg0;
- (void)showSettingPanelView;
- (void)showSearchPanelView;
- (void)screencastLinkExpandNavBar:(id)arg0;
- (void)fetchParticipationList;
- (id)listUserWithItem:(id)arg0;
- (void)reportInviteConnectionTrakerWithItem:(id)arg0;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)setupViews;
- (id)api;
- (void)clean;
- (void)setApi:(id)arg0;
- (id)sectionList;
- (void)setSectionList:(id)arg0;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end
