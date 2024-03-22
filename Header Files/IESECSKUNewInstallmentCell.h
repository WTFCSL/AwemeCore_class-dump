//
//     Generated by private class-dump
//

@class UIStackView, UIView, NSArray, NSString, IESECSKUNewInstallmentViewModel, UICollectionView, IESECSKUNewPOIView, IESECSKUTitleView;
@protocol IESECSKUNewInstallmentCellDelegate;

@interface IESECSKUNewInstallmentCell : UICollectionViewCell <IESECSKUTradeInCellDelegate> {
    BOOL _canSelectInstallment;
    UICollectionView *_collectionView;
    IESECSKUNewInstallmentViewModel *_viewModel;
    id<IESECSKUNewInstallmentCellDelegate> _delegate;
    UIStackView *_container;
    unsigned long long _lastSelectedIndex;
    NSArray *_installmentItemArray;
    IESECSKUTitleView *_installmentTitle;
    IESECSKUNewPOIView *_poiView;
    UIView *_separator;
    IESECSKUTitleView *_tradeInTitle;
    UIStackView *_tradeInContainer;
}

@property (retain, nonatomic) UIStackView *container;
@property (nonatomic) unsigned long long lastSelectedIndex;
@property (retain, nonatomic) NSArray *installmentItemArray;
@property (nonatomic) BOOL canSelectInstallment;
@property (retain, nonatomic) IESECSKUTitleView *installmentTitle;
@property (retain, nonatomic) IESECSKUNewPOIView *poiView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) IESECSKUTitleView *tradeInTitle;
@property (retain, nonatomic) UIStackView *tradeInContainer;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECSKUNewInstallmentViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUNewInstallmentCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calCellHeightWithModel:(id)arg0;

- (id)poiView;
- (void)setPoiView:(id)arg0;
- (void)setLastSelectedIndex:(unsigned long long)arg0;
- (unsigned long long)lastSelectedIndex;
- (id)installmentTitle;
- (void)setInstallmentTitle:(id)arg0;
- (void)clickTradeInItem:(id)arg0;
- (void)setInstallmentItemArray:(id)arg0;
- (void)setCanSelectInstallment:(BOOL)arg0;
- (id)installmentItemArray;
- (BOOL)canSelectInstallment;
- (id)tradeInTitle;
- (id)tradeInContainer;
- (void)clickPOIInfo;
- (void)setTradeInTitle:(id)arg0;
- (void)setTradeInContainer:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (id)collectionView;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (void)setContainer:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (void)updateUI;

@end