//
//     Generated by private class-dump
//

@class NSNumber, NSString, ACCMVCategoryModel, NSDictionary, NSMutableArray, AWEAweMVTemplateModel;

@interface AWEFavoriteTemplatesDataController : AWEListDataController <ACCMVTemplatesDataControllerProtocol> {
    BOOL _hasMore;
    BOOL _isFromMusicDetail;
    NSNumber *_cursor;
    NSNumber *_longCursor;
    NSNumber *_sortedPosition;
    NSDictionary *_musicDetailTrackParams;
    NSDictionary *_extraParams;
    AWEAweMVTemplateModel *_justRemovedModel;
    NSMutableArray *_toBeRemovedFromDetailPage;
    NSMutableArray *_toBeAddedFromDetailPage;
}

@property (retain, nonatomic) AWEAweMVTemplateModel *justRemovedModel;
@property (retain, nonatomic) NSMutableArray *toBeRemovedFromDetailPage;
@property (retain, nonatomic) NSMutableArray *toBeAddedFromDetailPage;
@property (retain, nonatomic) ACCMVCategoryModel *categoryModel;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *longCursor;
@property (retain, nonatomic) NSNumber *sortedPosition;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSDictionary *musicDetailTrackParams;
@property (nonatomic) BOOL isFromMusicDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (void)initFetchWithCompletion:(id /* block */)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setMusicDetailTrackParams:(id)arg0;
- (void)setIsFromMusicDetail:(BOOL)arg0;
- (void)setJustRemovedModel:(id)arg0;
- (id)justRemovedModel;
- (void)fetchDataWithCompletion:(id /* block */)arg0 isLoadmore:(BOOL)arg1;
- (BOOL)isFromMusicDetail;
- (id)musicDetailTrackParams;
- (void)loadMoreContentDataWithCompletion:(id /* block */)arg0;
- (id)sortedPosition;
- (void)setSortedPosition:(id)arg0;
- (void)refreshContentDataWithCompletion:(id /* block */)arg0;
- (id)longCursor;
- (void)setLongCursor:(id)arg0;
- (void)markTemplateToBeAdded:(id)arg0;
- (void)markTemplateToBeRemoved:(id)arg0;
- (BOOL)addTemplateWithItemID:(id)arg0;
- (void)addTemplateModelToDataSource:(id)arg0;
- (BOOL)removeTemplateWithItemID:(id)arg0;
- (BOOL)templatesModifiedInDetailPage;
- (void)resortTempaltesDataSource;
- (long long)templateCountPerPage;
- (id)toBeAddedFromDetailPage;
- (id)toBeRemovedFromDetailPage;
- (void)setToBeRemovedFromDetailPage:(id)arg0;
- (void)setToBeAddedFromDetailPage:(id)arg0;
- (id)cursor;
- (id)init;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
