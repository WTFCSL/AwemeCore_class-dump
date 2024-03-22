//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, UIImage, AWESearchPhotoSearchTabViewModel, NSMutableArray, NSString;
@protocol AWESearchPhotoSearchTabViewProtocol;

@interface AWESearchPhotoSearchTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    UIImage *_sourceImage;
    NSArray *_fixedDetectionList;
    id<AWESearchPhotoSearchTabViewProtocol> _delegate;
    UICollectionView *_collectionView;
    NSMutableArray *_dataList;
    AWESearchPhotoSearchTabViewModel *_selectedModel;
    long long _selectedIndex;
}

@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIImage *sourceImage;
@property (retain, nonatomic) NSArray *fixedDetectionList;
@property (weak, nonatomic) id<AWESearchPhotoSearchTabViewProtocol> delegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) AWESearchPhotoSearchTabViewModel *selectedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataList:(id)arg0;
- (id)selectedModel;
- (void)setSelectedModel:(id)arg0;
- (void)configUI;
- (void)setFixedDetectionList:(id)arg0;
- (id)fixedDetectionList;
- (id)init;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setSelectedIndex:(long long)arg0;
- (void)setCollectionView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (long long)selectedIndex;
- (id)sourceImage;
- (void)setSourceImage:(id)arg0;
- (void)selectItemAtIndex:(long long)arg0;
- (id)dataList;

@end
