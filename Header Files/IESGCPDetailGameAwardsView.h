//
//     Generated by private class-dump
//

@class NSArray, NSString, UICollectionView;
@protocol IESGCPDetailGameAwardsViewDelegate;

@interface IESGCPDetailGameAwardsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    id<IESGCPDetailGameAwardsViewDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_dataSource;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (weak, nonatomic) id<IESGCPDetailGameAwardsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reloadData:(id)arg0;

@end
