//
//     Generated by private class-dump
//

@class AWEMixDetailInformationHeadView, NSString, NSDictionary, NSNumber;
@protocol AWEMixVideoDetailInformationViewDelegate;

@protocol AWEMixDetailInformationListViewProtocol <NSObject>

@property (retain, nonatomic) AWEMixDetailInformationHeadView *headContentView;
@property (weak, nonatomic) id<AWEMixVideoDetailInformationViewDelegate> delegate;
@property (nonatomic) double topOffset;
@property (nonatomic) double navBarHeight;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL fromPersonPage;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchResultID;
@property (copy, nonatomic) NSString *searchLogPB;
@property (copy, nonatomic) NSString *searchListItemID;
@property (copy, nonatomic) NSString *searchListID;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *compilationEnterMethod;
@property (copy, nonatomic) NSString *compilationFromOrder;
@property (nonatomic) BOOL skipLocalCache;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *reqFrom;
@property (copy, nonatomic) NSNumber *watchedEpisode;
@property (nonatomic) BOOL watchedEpisodeLocated;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)searchResultID;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg0;
- (id)watchedEpisode;
- (void)setWatchedEpisode:(id)arg0;
- (void)setSearchResultID:(id)arg0;
- (BOOL)fromPersonPage;
- (void)dismissHintBubble;
- (void)setFromPersonPage:(BOOL)arg0;
- (id)headContentView;
- (double)navBarHeight;
- (void)setHintBubbleParams:(id)arg0;
- (id)videoAtIndex:(long long)arg0;
- (id)getScrollView;
- (void)setHeadContentView:(id)arg0;
- (void)setNavBarHeight:(double)arg0;
- (void)setSkipLocalCache:(BOOL)arg0;
- (void)setCompilationFromOrder:(id)arg0;
- (id)compilationEnterMethod;
- (id)compilationFromOrder;
- (void)setCompilationEnterMethod:(id)arg0;
- (void)setReqFrom:(id)arg0;
- (id)reqFrom;
- (BOOL)watchedEpisodeLocated;
- (id)searchLogPB;
- (id)searchListItemID;
- (id)searchListID;
- (void)updateMixInfo:(id)arg0 needResetDataController:(BOOL)arg1;
- (void)scrollToUpEpisode;
- (void)trackWillDisplay;
- (void)setSearchLogPB:(id)arg0;
- (void)setSearchListItemID:(id)arg0;
- (void)setSearchListID:(id)arg0;
- (BOOL)skipLocalCache;
- (void)setWatchedEpisodeLocated:(BOOL)arg0;
- (double)topOffset;
- (void)setTopOffset:(double)arg0;
- (void)clearCache;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (long long)numberOfVideos;
- (id)searchID;
- (void)setSearchID:(id)arg0;

@optional

- (void)updateCollectStatus;

@end