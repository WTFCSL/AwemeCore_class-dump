//
//     Generated by private class-dump
//

@class AWEPadBaseSectionViewModel, NSObject;
@protocol OS_dispatch_group, AWEPLVSectionViewModelProtocol;

@interface AWEPadHistorySectionDataController : AWEListDataController {
    BOOL _isEpisodeRequestOnAir;
    BOOL _isSeriesRequestOnAir;
    BOOL _episodeHistoryHasMore;
    BOOL _seriesHistoryHasMore;
    NSObject<OS_dispatch_group> *_group;
    long long _episodeHistoryCursor;
    long long _seriesHistoryCursor;
    AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *_containerSection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (nonatomic) long long episodeHistoryCursor;
@property (nonatomic) long long seriesHistoryCursor;
@property (nonatomic) BOOL isEpisodeRequestOnAir;
@property (nonatomic) BOOL isSeriesRequestOnAir;
@property (nonatomic) BOOL episodeHistoryHasMore;
@property (nonatomic) BOOL seriesHistoryHasMore;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *containerSection;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (void)setContainerSection:(id)arg0;
- (void)fetchEpisodeSectionDataWithError:(id)arg0;
- (void)fetchSeriesHistoryDataWithError:(id)arg0;
- (BOOL)isEpisodeRequestOnAir;
- (void)setIsEpisodeRequestOnAir:(BOOL)arg0;
- (long long)episodeHistoryCursor;
- (id)containerSection;
- (void)setEpisodeHistoryCursor:(long long)arg0;
- (BOOL)isSeriesRequestOnAir;
- (void)setIsSeriesRequestOnAir:(BOOL)arg0;
- (long long)seriesHistoryCursor;
- (void)setSeriesHistoryCursor:(long long)arg0;
- (BOOL)episodeHistoryHasMore;
- (void)setEpisodeHistoryHasMore:(BOOL)arg0;
- (BOOL)seriesHistoryHasMore;
- (void)setSeriesHistoryHasMore:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)group;
- (void)setGroup:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end