//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESLiveMultiOrderSingMVTabView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource> {
    NSArray *_dataModel;
}

@property (copy, nonatomic) NSArray *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataModel:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)dataModel;
- (void)setDataModel:(id)arg0;

@end