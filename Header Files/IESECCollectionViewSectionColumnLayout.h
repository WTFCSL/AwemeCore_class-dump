//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESECCollectionViewSectionColumnLayout : IESECCollectionViewSectionLayout {
    double _contentHeight;
    double _totalWeight;
    NSMutableArray *_weights;
    double _totalGap;
    double _contentWidth;
    NSMutableArray *_itemsWidth;
}

@property (nonatomic) double contentHeight;
@property (nonatomic) double totalWeight;
@property (retain, nonatomic) NSMutableArray *weights;
@property (nonatomic) double totalGap;
@property (nonatomic) double contentWidth;
@property (retain, nonatomic) NSMutableArray *itemsWidth;

- (id)initWithConfig:(id)arg0 weightDic:(id)arg1;
- (void)buildWeightsWithWeightDic:(id)arg0;
- (id)itemsWidth;
- (double)totalGap;
- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (void)setTotalGap:(double)arg0;
- (void)setItemsWidth:(id)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (double)contentWidth;
- (void)setCollectionView:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (id)weights;
- (void)setContentWidth:(double)arg0;
- (void)setContentHeight:(double)arg0;
- (void)setWeights:(id)arg0;
- (double)totalWeight;
- (void)setTotalWeight:(double)arg0;

@end
