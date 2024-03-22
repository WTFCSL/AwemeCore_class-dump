//
//     Generated by private class-dump
//

@class NSArray, UICollectionView, NSString, DVEEffectValue, UIButton;

@interface DVEBaseBrushTopBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_brushListView;
    UIButton *_doneButton;
    DVEEffectValue *_currentBrushValue;
    NSArray *_brushValues;
}

@property (retain, nonatomic) UICollectionView *brushListView;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) DVEEffectValue *currentBrushValue;
@property (retain, nonatomic) NSArray *brushValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentBrushValue;
- (void)selectWithBrushValues:(id)arg0;
- (void)setBrushValues:(id)arg0;
- (void)setCurrentBrushValue:(id)arg0;
- (void)selectBrushValuesWithIndex:(long long)arg0;
- (void)updateBrushValues:(id)arg0;
- (void)setBrushListView:(id)arg0;
- (id)brushListView;
- (id)brushValues;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg0;
- (void)setupUI;

@end