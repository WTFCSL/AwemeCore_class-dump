//
//     Generated by private class-dump
//

@class UIViewController, ACCMVTemplatesTransitionDelegate, NSMutableSet, NSMutableArray, AWEVideoPublishViewModel;
@protocol AWEAlbumSelectTemplateFeedViewControllerProtocol, ACCMVTemplatesDataControllerProtocol;

@interface AWEAlbumSelectTemplateFeedViewModel : NSObject {
    BOOL _usedProloadData;
    BOOL _needReload;
    unsigned long long _viewModelType;
    AWEVideoPublishViewModel *_publishModel;
    unsigned long long _columnCount;
    double _minimumColumnSpacing;
    double _minimumInteritemSpacing;
    UIViewController<AWEAlbumSelectTemplateFeedViewControllerProtocol> *_viewController;
    id<ACCMVTemplatesDataControllerProtocol> _dataController;
    ACCMVTemplatesTransitionDelegate *_transitionDelegate;
    NSMutableSet *_needRemoveIndexs;
    NSMutableArray *_reportArray;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _sectionInset;
}

@property (retain, nonatomic) id<ACCMVTemplatesDataControllerProtocol> dataController;
@property (retain, nonatomic) ACCMVTemplatesTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) NSMutableSet *needRemoveIndexs;
@property (nonatomic) BOOL usedProloadData;
@property (retain, nonatomic) NSMutableArray *reportArray;
@property (nonatomic) unsigned long long viewModelType;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) BOOL needReload;
@property (weak, nonatomic) UIViewController<AWEAlbumSelectTemplateFeedViewControllerProtocol> *viewController;

- (id)accui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)setDataController:(id)arg0;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setMinimumColumnSpacing:(double)arg0;
- (id)reportArray;
- (void)setReportArray:(id)arg0;
- (void)setNeedReload:(BOOL)arg0;
- (BOOL)needReload;
- (double)minimumColumnSpacing;
- (void)handleOnViewDidAppear;
- (void)refreshContentDataIsRetry:(BOOL)arg0 isPulled:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)loadMoreContentDataWithCompletion:(id /* block */)arg0;
- (void)refreshContentDataIsRetry:(BOOL)arg0 completion:(id /* block */)arg1;
- (unsigned long long)viewModelType;
- (BOOL)usedProloadData;
- (void)p_handleDidFavoriteMVTemplate:(id)arg0;
- (void)p_handleDidUnFavoriteMVTemplate:(id)arg0;
- (id)needRemoveIndexs;
- (void)setUsedProloadData:(BOOL)arg0;
- (id)p_filteredDataSource;
- (id /* block */)didPickTemplateBlock;
- (void)registerCellForcollectionView:(id)arg0;
- (void)setViewModelType:(unsigned long long)arg0;
- (void)setNeedRemoveIndexs:(id)arg0;
- (unsigned long long)columnCount;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)init;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setViewController:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (id)viewController;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (BOOL)hasMore;
- (void)setColumnCount:(unsigned long long)arg0;
- (void)dealloc;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (void)setSectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInset;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)dataController;

@end
