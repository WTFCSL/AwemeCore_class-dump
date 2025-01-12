//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, NSIndexPath;
@protocol IESLiveAnchorPanelTabViewDelegate;

@interface IESLiveAnchorPanelTabView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id<IESLiveAnchorPanelTabViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_tabModels;
    NSIndexPath *_currentIndexPath;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *tabModels;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (weak, nonatomic) id<IESLiveAnchorPanelTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabModels;
- (void)setTabModels:(id)arg0;
- (void)setDefaultSelect;
- (id)initWithTabModels:(id)arg0;
- (void)update:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)currentIndexPath;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupCollectionView;
- (void)setCurrentIndexPath:(id)arg0;

@end
