//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEPadPolymericChannelFilterHeaderView : UICollectionReusableView <AWEPadCollectionReusableViewLayoutProtocol> {
    NSMutableArray *_filterBarArray;
    id /* block */ _selectBlock;
}

@property (retain, nonatomic) NSMutableArray *filterBarArray;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (void)setSelectBlock:(id /* block */)arg0;
- (id)filterBarArray;
- (void)updateForBreakPoint;
- (void)addFilterTabWithFilterValueArray:(id)arg0 filterKey:(id)arg1;
- (void)setFilterBarArray:(id)arg0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id /* block */)selectBlock;

@end
