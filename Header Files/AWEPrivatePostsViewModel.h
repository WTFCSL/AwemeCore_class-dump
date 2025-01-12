//
//     Generated by private class-dump
//

@class NSString, AWEPrivatePostsDataController, NSArray, NSMutableArray;
@protocol AWECloudAlbumPrivatePostViewModel, AWECloudAlbumChangeProtocol, AWEInTodayPrivatePostViewModelProtocol;

@interface AWEPrivatePostsViewModel : NSObject <AWECloudAlbumChangeProtocol, AWEPrivatePostsViewModel> {
    BOOL _isRequestOnAir;
    NSString *_currentUserID;
    NSMutableArray *_dataSource;
    id<AWECloudAlbumChangeProtocol> _cloudAlbumDelegate;
    AWEPrivatePostsDataController *_privateDataController;
    id<AWECloudAlbumPrivatePostViewModel> _cloudAlbumDataController;
    id<AWEInTodayPrivatePostViewModelProtocol> _memoriesDataController;
}

@property (retain, nonatomic) AWEPrivatePostsDataController *privateDataController;
@property (retain, nonatomic) id<AWECloudAlbumPrivatePostViewModel> cloudAlbumDataController;
@property (retain, nonatomic) id<AWEInTodayPrivatePostViewModelProtocol> memoriesDataController;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly, nonatomic) NSArray *cloudAlbumList;
@property (readonly, nonatomic) NSArray *privatePostList;
@property (readonly, nonatomic) NSArray *memoriesList;
@property (weak, nonatomic) id<AWECloudAlbumChangeProtocol> cloudAlbumDelegate;
@property (readonly, nonatomic) BOOL loadmoreHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (void)willDisplayCell:(id)arg0;
- (void)setCurrentUserID:(id)arg0;
- (BOOL)addAwemeWithItemID:(id)arg0;
- (void)insertAwemeModel:(id)arg0 atIndex:(unsigned long long)arg1;
- (id)privatePostDataController;
- (BOOL)removeAwemeWithItemID:(id)arg0;
- (void)changeVideFavoritedStatus:(BOOL)arg0 itemID:(id)arg1;
- (id)removeLocalAlbum;
- (id)cloudAlbumList;
- (id)memoriesList;
- (void)cloudAlbumUpdate;
- (void)updataMemoriesData:(id /* block */)arg0;
- (long long)memoriesCellIndex;
- (BOOL)memoriesCellNeedRefresh;
- (long long)memoriesListDelete;
- (id)privatePostList;
- (void)setCloudAlbumDelegate:(id)arg0;
- (void)cloudAlbumUploadAssetWithCompletion:(id /* block */)arg0;
- (void)cloudAlbumDelete:(id)arg0;
- (id)cloudAlbumDataController;
- (id)memoriesDataController;
- (void)p_combineAlbumsWithPostsDataSource;
- (BOOL)p_isPrivatePostListShow;
- (long long)indexOfTargetData:(id)arg0;
- (id)cloudAlbumDelegate;
- (BOOL)hasCloudAlbumExcludeLocalAlbum;
- (BOOL)hasCloudAlbumVisible:(id)arg0;
- (void)setCloudAlbumDataController:(id)arg0;
- (void)setMemoriesDataController:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)privateDataController;
- (void)setPrivateDataController:(id)arg0;
- (id)currentUserID;
- (void)viewWillDisappear;

@end
