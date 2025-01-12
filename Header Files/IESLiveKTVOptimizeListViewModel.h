//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSArray, PlaylistTab, IESLiveEmptyViewConfig, IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo, IESLiveKTVSongListActivityBannerCellItem;
@protocol IESLiveKTVOrderPanelProtocol;

@interface IESLiveKTVOptimizeListViewModel : NSObject {
    BOOL _isActivityExposed;
    BOOL _isLocalPlaceholderTabs;
    BOOL _hasMore;
    BOOL _needSort;
    int _firstLevelTab;
    NSNumber *_recentSectionIndex;
    NSNumber *_artistSectionIndex;
    id /* block */ _reloadDataCallback;
    NSArray *_sectionArray;
    NSArray *_musicArray;
    NSString *_sortType;
    id<IESLiveKTVOrderPanelProtocol> _panelModel;
    PlaylistTab *_category;
    IESLiveEmptyViewConfig *_emptyConfig;
    Class _cellClass;
    IESLiveKTVSongListActivityBannerCellItem *_bannerCellItem;
    IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo *_activity;
    NSString *_lastItemId;
}

@property (nonatomic) BOOL hasMore;
@property (nonatomic) int firstLevelTab;
@property (nonatomic) BOOL needSort;
@property (copy, nonatomic) NSString *sortType;
@property (retain, nonatomic) IESLiveKTVSongListActivityBannerCellItem *bannerCellItem;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo *activity;
@property (copy, nonatomic) NSString *lastItemId;
@property (nonatomic) BOOL isActivityExposed;
@property (nonatomic) BOOL isLocalPlaceholderTabs;
@property (retain, nonatomic) NSNumber *recentSectionIndex;
@property (retain, nonatomic) NSNumber *artistSectionIndex;
@property (copy, nonatomic) id /* block */ reloadDataCallback;
@property (copy, nonatomic) NSArray *sectionArray;
@property (copy, nonatomic) NSArray *musicArray;
@property (weak, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (readonly, nonatomic) PlaylistTab *category;
@property (readonly, nonatomic) IESLiveEmptyViewConfig *emptyConfig;
@property (retain, nonatomic) Class cellClass;

- (id)lastItemId;
- (void)setLastItemId:(id)arg0;
- (id)sectionArray;
- (void)setSectionArray:(id)arg0;
- (id)musicArray;
- (void)setMusicArray:(id)arg0;
- (id)panelModel;
- (void)setPanelModel:(id)arg0;
- (void)setFirstLevelTab:(int)arg0;
- (int)firstLevelTab;
- (void)addMusicToRecentListTopWithMusicId:(id)arg0 source:(id)arg1;
- (void)deleteFavoriteWithMusicId:(id)arg0 source:(id)arg1;
- (void)setNeedSort:(BOOL)arg0;
- (id)emptyConfig;
- (BOOL)needSort;
- (id /* block */)reloadDataCallback;
- (void)sortMusicListWithSortType:(id)arg0 completion:(id /* block */)arg1;
- (void)loadMusicListWithIsLoadMore:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)combineMusicSectionWithMusicArray:(id)arg0;
- (id)p_sortMusicListArrayWithMusicListArray:(id)arg0 sortType:(id)arg1;
- (void)p_combineMusicSectionWith:(id)arg0;
- (BOOL)isLocalPlaceholderTabs;
- (void)p_preloadMusicIfIsHotTabWithMusiclistArray:(id)arg0;
- (BOOL)isActivityTab;
- (id)bannerCellItem;
- (void)trackActivityExposureEvent;
- (void)didSetActivityBannerUrls;
- (BOOL)isActivityExposed;
- (void)setIsActivityExposed:(BOOL)arg0;
- (id)initWithPanelModel:(id)arg0 category:(id)arg1 firstLevelTab:(int)arg2;
- (void)combineMusicSection;
- (void)loadDynamicActivityIfNeed;
- (void)addMusicToHotTabRecentListTopWithMusicId:(id)arg0 source:(id)arg1;
- (void)setIsLocalPlaceholderTabs:(BOOL)arg0;
- (id)recentSectionIndex;
- (void)setRecentSectionIndex:(id)arg0;
- (id)artistSectionIndex;
- (void)setArtistSectionIndex:(id)arg0;
- (void)setReloadDataCallback:(id /* block */)arg0;
- (void)setBannerCellItem:(id)arg0;
- (id)category;
- (void).cxx_destruct;
- (id)activity;
- (Class)cellClass;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setActivity:(id)arg0;
- (id)sortType;
- (void)setSortType:(id)arg0;
- (void)setCellClass:(Class)arg0;
- (void)cleanData;

@end
