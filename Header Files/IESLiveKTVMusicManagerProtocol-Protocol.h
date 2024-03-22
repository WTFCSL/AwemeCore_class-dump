//
//     Generated by private class-dump
//

@class IESLiveKTVDownloader, NSArray, NSMutableArray, IESLiveCombineSubject;
@protocol IESLiveDynamicActivityProvider;

@protocol IESLiveKTVMusicManagerProtocol <NSObject>

@property (readonly, copy, nonatomic) NSArray *multiKTVOrderList;
@property (readonly, copy, nonatomic) NSArray *multiKTVSelfOrderedList;
@property (readonly, nonatomic) NSMutableArray *hasSungMusicList;
@property (readonly, nonatomic) IESLiveCombineSubject *hasSungMusicCountChanged;
@property (readonly, nonatomic) long long hasSungCount;
@property (readonly, nonatomic) IESLiveCombineSubject *favoriteChanged;
@property (readonly, copy, nonatomic) NSArray *multiKTVSelfList;
@property (readonly, nonatomic) NSMutableArray *wantListenSelfList;
@property (readonly, nonatomic) id<IESLiveDynamicActivityProvider> activityProvider;
@property (retain, nonatomic) IESLiveKTVDownloader *downloader;

- (void)setDownloader:(id)arg0;
- (id)pageModel;
- (id)pageModelWithCategory:(id)arg0;
- (void)fetchKTVMusicListWithRequestMode:(long long)arg0 firstLevelTab:(int)arg1 category:(id)arg2 inputPageModel:(id)arg3 pageNumber:(id)arg4 completion:(id /* block */)arg5;
- (id)downloadMusicTaskWithMusicModel:(id)arg0;
- (id)multiKTVSelfOrderedList;
- (BOOL)isLocalMusic:(id)arg0;
- (void)fetchSungSongListWithLastItemId:(id)arg0 completion:(id /* block */)arg1;
- (void)refreshMultiKTVOrderListWithCompletion:(id /* block */)arg0;
- (id)multiKTVOrderList;
- (id)favoriteChanged;
- (id)multiKTVOrderListChangeSignal;
- (id)ktvIMOrderListChangeSignal;
- (id)hasSungMusicCountChanged;
- (id)hasSungMusicList;
- (id)wantListenSelfList;
- (id)multiKTVSelfList;
- (long long)hasSungCount;
- (id)multiKTVSelfOrderedListChangeSignal;
- (id)addMusicToListTopWithCategory:(id)arg0 musicId:(id)arg1 source:(id)arg2;
- (id)addMusicToHotTabRecentListTopWitWithCategory:(id)arg0 musicId:(id)arg1 source:(id)arg2;
- (id)preloadMusicDataWithMusicModel:(id)arg0 completionBlock:(id /* block */)arg1;
- (long long)countIndexInLinkedAndOfflineWillSingList;
- (void)syncSearchResult:(id)arg0 completion:(id /* block */)arg1;
- (id)downloader;
- (id)activityProvider;

@end
