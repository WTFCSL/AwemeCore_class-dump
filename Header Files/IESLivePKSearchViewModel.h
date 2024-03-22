//
//     Generated by private class-dump
//

@class IESLiveFixedFontTextSizeCache, NSString, RivalsSearchResponse_AnchorInfo, NSArray, HTSLivePKApi, RivalsSearchResponse_ResponseData, RivalsRecommendResponse_GroupRivals;

@interface IESLivePKSearchViewModel : NSObject <IESLivePKSearchAction, IESLivePKStateAction> {
    BOOL _isLoadingMore;
    int _selectedRecommendType;
    NSString *_toastString;
    NSString *_currentQuery;
    NSString *_searchSourceHistoryStr;
    long long _currentOffset;
    long long _searchScene;
    long long _searchStatus;
    NSArray *_historyWords;
    NSArray *_suggestWords;
    RivalsSearchResponse_ResponseData *_searchResult;
    RivalsRecommendResponse_GroupRivals *_selectedRivals;
    RivalsRecommendResponse_GroupRivals *_hourlyRecommendRivals;
    RivalsRecommendResponse_GroupRivals *_popularityRecommendRivals;
    IESLiveFixedFontTextSizeCache *_tagSizeCache;
    IESLiveFixedFontTextSizeCache *_nameSizeCache;
    HTSLivePKApi *_pkAPI;
    RivalsSearchResponse_AnchorInfo *_invitedAnchor;
}

@property (retain, nonatomic) HTSLivePKApi *pkAPI;
@property (retain, nonatomic) RivalsSearchResponse_AnchorInfo *invitedAnchor;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *tagSizeCache;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *nameSizeCache;
@property (copy, nonatomic) NSString *toastString;
@property (copy, nonatomic) NSString *currentQuery;
@property (copy, nonatomic) NSString *searchSourceHistoryStr;
@property (nonatomic) long long currentOffset;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) long long searchScene;
@property (nonatomic) long long searchStatus;
@property (copy, nonatomic) NSArray *historyWords;
@property (copy, nonatomic) NSArray *suggestWords;
@property (retain, nonatomic) RivalsSearchResponse_ResponseData *searchResult;
@property (retain, nonatomic) RivalsRecommendResponse_GroupRivals *selectedRivals;
@property (retain, nonatomic) RivalsRecommendResponse_GroupRivals *hourlyRecommendRivals;
@property (retain, nonatomic) RivalsRecommendResponse_GroupRivals *popularityRecommendRivals;
@property (nonatomic) int selectedRecommendType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setSuggestWords:(id)arg0;
- (id)suggestWords;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:(BOOL)arg0;
- (long long)searchScene;
- (void)setSearchScene:(long long)arg0;
- (id)toastString;
- (void)setToastString:(id)arg0;
- (void)didChangePKStateFrom:(long long)arg0 to:(long long)arg1;
- (long long)searchStatus;
- (void)setSearchStatus:(long long)arg0;
- (void)setHistoryWords:(id)arg0;
- (id)historyWords;
- (void)resetInitialHistoryStatus;
- (void)cleanHistoryWord;
- (void)setSearchSourceHistoryStr:(id)arg0;
- (void)searchForResultWith:(id)arg0 isLoadMore:(BOOL)arg1;
- (void)searchForSuggestWordsWith:(id)arg0;
- (id)searchSourceHistoryStr;
- (id)pkAPI;
- (void)setPkAPI:(id)arg0;
- (id)nameSizeCache;
- (void)setNameSizeCache:(id)arg0;
- (void)deleteHistoryWord:(id)arg0;
- (void)setInvitedSearchAnchor:(id)arg0;
- (void)searchForRecommend;
- (int)selectedRecommendType;
- (id)selectedRivals;
- (id)tagSizeCache;
- (void)setSelectedRecommendType:(int)arg0;
- (id)popularityRecommendRivals;
- (void)setSelectedRivals:(id)arg0;
- (id)hourlyRecommendRivals;
- (void)migrateHistoryStorePerUserIfNeed;
- (void)preprocessSearchResultModel:(id)arg0;
- (void)updateHistoryWords:(id)arg0;
- (void)setHourlyRecommendRivals:(id)arg0;
- (void)setPopularityRecommendRivals:(id)arg0;
- (void)setInvitedAnchor:(id)arg0;
- (id)invitedAnchor;
- (id)setupDefaultActivityText;
- (void)setTagSizeCache:(id)arg0;
- (long long)currentOffset;
- (id)currentQuery;
- (void).cxx_destruct;
- (void)setup;
- (id)searchResult;
- (void)setSearchResult:(id)arg0;
- (void)setCurrentQuery:(id)arg0;
- (void)setCurrentOffset:(long long)arg0;

@end