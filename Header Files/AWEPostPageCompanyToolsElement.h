//
//     Generated by private class-dump
//

@class NSString, UITableViewCell, NSDictionary, AWENewPublishCompanyToolsTableViewCell;
@protocol AWEPostPageStarAtlasService, AWEPostPageLocalLifeMatchMissionService, AWEPostPageCompanyToolsService, AWEPostPagePOIService, AWEPostPageNavigationBarService, AWEEnterpriseCompanyToolBubbleCellProtocol;

@interface AWEPostPageCompanyToolsElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol, AWECompanyToolBubbleCellDelegate> {
    BOOL _companyToolsTracked;
    BOOL _companyToolsBubbleTracked;
    NSDictionary *_extras;
    AWENewPublishCompanyToolsTableViewCell *_companyToolsTableViewCell;
    UITableViewCell<AWEEnterpriseCompanyToolBubbleCellProtocol> *_companyToolsBubbleContainerCell;
    id<AWEPostPageCompanyToolsService> _companyTools;
    id<AWEPostPagePOIService> _poi;
    id<AWEPostPageStarAtlasService> _starAtlas;
    id<AWEPostPageNavigationBarService> _navBarService;
    id<AWEPostPageLocalLifeMatchMissionService> _localLife;
}

@property (retain, nonatomic) AWENewPublishCompanyToolsTableViewCell *companyToolsTableViewCell;
@property (retain, nonatomic) UITableViewCell<AWEEnterpriseCompanyToolBubbleCellProtocol> *companyToolsBubbleContainerCell;
@property (weak, nonatomic) id<AWEPostPageCompanyToolsService> companyTools;
@property (weak, nonatomic) id<AWEPostPagePOIService> poi;
@property (weak, nonatomic) id<AWEPostPageStarAtlasService> starAtlas;
@property (weak, nonatomic) id<AWEPostPageNavigationBarService> navBarService;
@property (weak, nonatomic) id<AWEPostPageLocalLifeMatchMissionService> localLife;
@property (nonatomic) BOOL companyToolsTracked;
@property (nonatomic) BOOL companyToolsBubbleTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;

- (id)poi;
- (void)setPoi:(id)arg0;
- (void)addAIAnchorWithType:(long long)arg0 anchorDismissBlock:(id /* block */)arg1;
- (id)companyToolsBubbleContainerCell;
- (void)bubbleGotExposedTrack:(id)arg0;
- (void)didClickShowMoreToolsBubble;
- (void)didClickNotShowMoreToolsBubble:(id)arg0;
- (id)starAtlas;
- (void)setupCell:(id)arg0;
- (id)localLife;
- (void)refreshWithAnchorVM:(id)arg0;
- (BOOL)forceReceiveEvents;
- (id)companyTools;
- (BOOL)showStarAlas;
- (void)cleanAllCompanyToolsData;
- (id)companyToolsTableViewCell;
- (void)insertBubbleCellIfNeeded;
- (void)removeBubbleCell;
- (void)addCompanyToolsObserver;
- (void)setupUIForCompanyTools;
- (void)updateCompanyToolsSubviewsForSuccess;
- (void)updateCompanyToolsSubviewsForDefault;
- (void)companyToolsShowTrack;
- (void)defaultSelectBubbleIfNeeded;
- (void)bubblePublishTrack;
- (void)saveCompanyToolInfo;
- (void)switchBubbleTimesTrack;
- (id)navBarService;
- (void)p_companyToolsJSBResultNotification:(id)arg0;
- (void)p_didLoadBubbleDataFromServer;
- (id)p_bubbleCell;
- (void)updateCompanyToolsCellHeightWith:(BOOL)arg0;
- (void)p_setupCompanyToolsText;
- (void)p_resetBubbleContainerDataAndUI;
- (void)p_cleanCompanyToolsData;
- (void)p_cleanCompanyToolsViewModelBubbleData;
- (id)p_getBubbleArrayFromDisk;
- (void)insertBubbleCell;
- (void)companyToolsBubbleShowTrack;
- (void)p_defaultSelectFirstBubble;
- (void)p_jumpToFESelectCompanyToolsWithEntrance:(id)arg0;
- (id)p_companyToolsActionParams;
- (BOOL)companyToolsTracked;
- (void)setCompanyToolsTracked:(BOOL)arg0;
- (BOOL)companyToolsBubbleTracked;
- (void)setCompanyToolsBubbleTracked:(BOOL)arg0;
- (void)p_matchingBubbleContainerCellToViewModel;
- (void)p_handleFENotificationWithJsonString:(id)arg0;
- (void)didClearPOI;
- (void)p_didViewModelDeselectBubble:(id)arg0;
- (void)p_handleCompanyToolsRequestPostData;
- (void)p_refreshCompanyToolsText;
- (void)p_addBubbleToViewModel:(id)arg0;
- (void)p_didViewModelSelectBubble:(id)arg0;
- (void)p_removeBubbleToViewModel:(id)arg0;
- (void)p_cancleSelectedCompanyTools:(id)arg0;
- (void)setCompanyToolsTableViewCell:(id)arg0;
- (void)setCompanyToolsBubbleContainerCell:(id)arg0;
- (void)setCompanyTools:(id)arg0;
- (void)setStarAtlas:(id)arg0;
- (void)setNavBarService:(id)arg0;
- (void)setLocalLife:(id)arg0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)type;
- (id)extras;
- (BOOL)isEnabled;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (void)_setup;
- (id)cell;
- (void)didSelect;

@end
