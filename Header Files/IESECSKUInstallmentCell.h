//
//     Generated by private class-dump
//

@class NSArray, UICollectionView;

@interface IESECSKUInstallmentCell : UICollectionViewCell {
    BOOL _canSelectInstallment;
    UICollectionView *_collectionView;
    unsigned long long _lastSelectedIndex;
    NSArray *_installmentItemArray;
}

@property (nonatomic) unsigned long long lastSelectedIndex;
@property (retain, nonatomic) NSArray *installmentItemArray;
@property (nonatomic) BOOL canSelectInstallment;
@property (retain, nonatomic) UICollectionView *collectionView;

- (void)setLastSelectedIndex:(unsigned long long)arg0;
- (unsigned long long)lastSelectedIndex;
- (void)setInstallmentItemArray:(id)arg0;
- (void)setCanSelectInstallment:(BOOL)arg0;
- (void)configureUIWithInstallment:(id)arg0 canSelect:(BOOL)arg1;
- (id)installmentItemArray;
- (BOOL)canSelectInstallment;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;

@end
