//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, DVEStoryColor, UICollectionView, NSString;

@interface DVEHorizontalColorChooseView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _cellIsAccessibility;
    NSArray *_colorValues;
    id /* block */ _didSelectedColorBlock;
    UICollectionView *_collectionView;
    DVEStoryColor *_selectedColor;
    NSDictionary *_colorAccessibilityLabelDic;
}

@property (retain, nonatomic) DVEStoryColor *selectedColor;
@property (copy, nonatomic) NSArray *colorValues;
@property (nonatomic) BOOL cellIsAccessibility;
@property (retain, nonatomic) NSDictionary *colorAccessibilityLabelDic;
@property (copy, nonatomic) id /* block */ didSelectedColorBlock;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cellIsAccessibility;
- (void)setCellIsAccessibility:(BOOL)arg0;
- (void)setupColorAccessibilityLabel;
- (void)setColorAccessibilityLabelDic:(id)arg0;
- (id)colorAccessibilityLabelDic;
- (id /* block */)didSelectedColorBlock;
- (void)selectWithIndexPath:(id)arg0;
- (void)setColorValues:(id)arg0;
- (void)updateSelectedColorWithIndexPath:(id)arg0;
- (void)selectWithColor:(id)arg0;
- (void)updateColorValues:(id)arg0;
- (void)setDidSelectedColorBlock:(id /* block */)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)initWithConfiguration:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg0;
- (id)colorValues;
- (void)dealloc;

@end
