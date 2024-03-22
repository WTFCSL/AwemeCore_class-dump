//
//     Generated by private class-dump
//

@class NSString, AWEGDAlbumDataProcessor, AWEGDAlbumCategoryInfoModel, UIImageView, NSDictionary, UITableView, AWEGoodsDetailPageContext, UICollectionView, AWEGDAlbumRefreshFooter;

@interface AWEGDAlbumPageViewItem : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, AWEPOIDetailPhotosDynamicPreviewViewControllerLoadMoreDelegate, AWEZoomTransitionOuterContextProvider, AWEPOIDetailPhotosPreviewViewControllerDelegate> {
    AWEGoodsDetailPageContext *_context;
    NSString *_sessionID;
    double _photoLength;
    long long _selectIndex;
    UITableView *_tableView;
    UICollectionView *_collectionView;
    UIImageView *_zoomStartView;
    AWEGDAlbumRefreshFooter *_footer;
    AWEGDAlbumDataProcessor *_dataProcessor;
    NSDictionary *_logParams;
    AWEGDAlbumCategoryInfoModel *_model;
}

@property (nonatomic) double photoLength;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *zoomStartView;
@property (retain, nonatomic) AWEGDAlbumRefreshFooter *footer;
@property (retain, nonatomic) AWEGDAlbumDataProcessor *dataProcessor;
@property (retain, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) AWEGDAlbumCategoryInfoModel *model;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (copy, nonatomic) NSString *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (BOOL)zoomTransitionWantsFromVCScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)arg0;
- (long long)selectIndex;
- (void)setSelectIndex:(long long)arg0;
- (void)setDataProcessor:(id)arg0;
- (id)dataProcessor;
- (void)scrollViewDidEndScroll:(id)arg0;
- (id)logParams;
- (void)setLogParams:(id)arg0;
- (void)loadMore;
- (void)loadDataWithCategoryInfo:(id)arg0 extraParam:(id)arg1 dataProcessor:(id)arg2;
- (void)reloadAlbumPageItem;
- (void)anchorTargetIndex:(long long)arg0;
- (void)trackShowPOIPicOperation;
- (void)setPhotoLength:(double)arg0;
- (void)appendData;
- (void)didTapAlbumItemView:(long long)arg0;
- (double)photoLength;
- (void)trackPoiPicOperation:(id)arg0 enterMethod:(id)arg1 extraParams:(id)arg2;
- (void)trackShowPOIPicOperation:(id)arg0 enterFrom:(id)arg1 extraParams:(id)arg2;
- (id)zoomStartView;
- (BOOL)hasMoreInPhotosPreviewVC;
- (long long)thresholdForLoadMoreInPhotosPreviewVC;
- (void)photosPreviewVCLoadMorePhotosWithCompletion:(id /* block */)arg0;
- (void)photosPreviewVCDidFinishloadMore:(BOOL)arg0;
- (void)photosPreviewViewControllerWillDismiss:(id)arg0;
- (void)setZoomStartView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setFooter:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)collectionView;
- (id)tableView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)sessionID;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)footer;
- (id)context;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)endRefreshing;
- (void)setupUI;

@end