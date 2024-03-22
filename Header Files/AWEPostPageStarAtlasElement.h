//
//     Generated by private class-dump
//

@class NSString, AWENewPublishTableCell, AWEPostPageAnchorViewModel, NSDictionary;

@interface AWEPostPageStarAtlasElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol> {
    BOOL _isMissionEditable;
    BOOL _shouldShowStarAtlas;
    BOOL _isShowTracked;
    NSDictionary *_extras;
    AWENewPublishTableCell *_starAtlasTableViewCell;
    NSString *_starAtlasHashTag;
    NSString *_starAtlasTip;
    AWEPostPageAnchorViewModel *_missionAnchorVM;
}

@property (retain, nonatomic) AWENewPublishTableCell *starAtlasTableViewCell;
@property (nonatomic) BOOL isMissionEditable;
@property (nonatomic) BOOL shouldShowStarAtlas;
@property (copy, nonatomic) NSString *starAtlasHashTag;
@property (copy, nonatomic) NSString *starAtlasTip;
@property (retain, nonatomic) AWEPostPageAnchorViewModel *missionAnchorVM;
@property (nonatomic) BOOL isShowTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;

- (void)addAIAnchorWithType:(long long)arg0 anchorDismissBlock:(id /* block */)arg1;
- (BOOL)isShowTracked;
- (void)setIsShowTracked:(BOOL)arg0;
- (void)setupCell:(id)arg0;
- (void)refreshWithAnchorVM:(id)arg0;
- (id)poiService;
- (BOOL)anchor:(id)arg0 shouldSelectAnchorWithType:(long long)arg1;
- (BOOL)isAbnormalAnchor;
- (BOOL)forceReceiveEvents;
- (id)companyTools;
- (id)navBarService;
- (id)matchMission;
- (BOOL)shouldShowStarAtlas;
- (id)localLifeMission;
- (BOOL)isMissionEditable;
- (void)checkStarAtlasOrderIfNeeded;
- (void)addStarAtlasRNObservers;
- (void)cleanStarAtlasDraft;
- (id)starAtlasTableViewCell;
- (id)missionAnchorVM;
- (void)p_startAtlasCellClicked;
- (void)handleRNData:(id)arg0;
- (void)addStarAtlasInfoFromIronManNotification:(id)arg0;
- (void)setIsMissionEditable:(BOOL)arg0;
- (void)setShouldShowStarAtlas:(BOOL)arg0;
- (void)setStarAtlasTip:(id)arg0;
- (void)setStarAtlasHashTag:(id)arg0;
- (id)starAtlasHashTag;
- (void)updateStarAtlasWithJsonDict:(id)arg0 from:(unsigned long long)arg1;
- (id)getStarAtlasParamsWithPublishModel:(id)arg0;
- (void)prepareDataWithJsonDict:(id)arg0 from:(unsigned long long)arg1;
- (id)jsonDictionaryWithModel:(id)arg0;
- (void)setStarAtlasTableViewCell:(id)arg0;
- (id)starAtlasTip;
- (void)setMissionAnchorVM:(id)arg0;
- (void)cleanUp;
- (void).cxx_destruct;
- (id)type;
- (id)extras;
- (BOOL)isEnabled;
- (id)cellClass;
- (void)viewDidLoad;
- (id)service;
- (BOOL)isVisible;
- (id)cell;
- (id)cellIdentifier;
- (void)didSelect;

@end