//
//     Generated by private class-dump
//

@class IESLiveKTVOrderPanelSearchSectionModel, UICollectionView, IESLiveKTVSearchSectionItem, NSString, NSMutableArray;

@interface IESLiveKTVHistoryAndHotView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    id /* block */ _selectedActionBlock;
    IESLiveKTVOrderPanelSearchSectionModel *_model;
    IESLiveKTVSearchSectionItem *_historySection;
    NSMutableArray *_items;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) IESLiveKTVOrderPanelSearchSectionModel *model;
@property (retain, nonatomic) IESLiveKTVSearchSectionItem *historySection;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ selectedActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_loadData;
- (id)savedHistoryKey;
- (id)createHistorySection;
- (id)p_historyData;
- (void)removeHistory:(id)arg0;
- (id /* block */)selectedActionBlock;
- (void)tr_ClickedHotSearchEventWith:(id)arg0 isHistory:(BOOL)arg1;
- (void)refreshHistoryList;
- (void)setSelectedActionBlock:(id /* block */)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setItems:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setHistorySection:(id)arg0;
- (id)model;
- (void)setCollectionView:(id)arg0;
- (void)addHistory:(id)arg0;
- (id)historySection;

@end
