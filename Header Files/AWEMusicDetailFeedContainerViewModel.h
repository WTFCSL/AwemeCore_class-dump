//
//     Generated by private class-dump
//

@class AWEMusicDetailEmptyTipSectionViewModel, AWEMusicDetailTrackInstance, AWEMusicDetailFeedDataContext, AWEMusicDetailInspirationSectionViewModel, AWEMusicDetailFeedSectionViewModel, AWEMusicDetailDataContext;

@interface AWEMusicDetailFeedContainerViewModel : AWEBaseListViewModel {
    AWEMusicDetailDataContext *_dataContext;
    AWEMusicDetailFeedSectionViewModel *_feedSectionViewModel;
    AWEMusicDetailInspirationSectionViewModel *_inspirationViewModel;
    AWEMusicDetailTrackInstance *_trackInstance;
    AWEMusicDetailEmptyTipSectionViewModel *_emptyTipSectionViewModel;
}

@property (retain, nonatomic) AWEMusicDetailDataContext *dataContext;
@property (retain, nonatomic) AWEMusicDetailFeedSectionViewModel *feedSectionViewModel;
@property (retain, nonatomic) AWEMusicDetailEmptyTipSectionViewModel *emptyTipSectionViewModel;
@property (retain, nonatomic) AWEMusicDetailTrackInstance *trackInstance;
@property (readonly, nonatomic) AWEMusicDetailFeedDataContext *feedDataContext;
@property (readonly, nonatomic) AWEMusicDetailInspirationSectionViewModel *inspirationViewModel;
@property (readonly, nonatomic) BOOL isEmptyList;
@property (readonly, nonatomic) BOOL hasMoreData;

- (void)setupViewModel;
- (void)loadMore;
- (id)dataContext;
- (id)trackInstance;
- (void)preloadDetailData;
- (id)feedDataContext;
- (void)prepareTrackInstance:(id)arg0;
- (void)shareRecommendedAwemeCoversForIM;
- (void)setDataContext:(id)arg0;
- (void)setTrackInstance:(id)arg0;
- (id)feedSectionViewModel;
- (BOOL)isEmptyList;
- (void)loadMoreIfNeeded;
- (void)updateDataContext:(id)arg0;
- (id)emptyTipSectionViewModel;
- (void)setFeedSectionViewModel:(id)arg0;
- (id)inspirationViewModel;
- (void)setEmptyTipSectionViewModel:(id)arg0;
- (void).cxx_destruct;
- (BOOL)hasMoreData;

@end