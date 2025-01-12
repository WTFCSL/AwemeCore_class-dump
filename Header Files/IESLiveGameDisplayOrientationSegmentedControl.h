//
//     Generated by private class-dump
//

@class NSArray;

@interface IESLiveGameDisplayOrientationSegmentedControl : UIControl {
    id /* block */ _itemSelectedHandler;
    NSArray *_labels;
    NSArray *_displayOrientationItems;
    unsigned long long _initialIndex;
    unsigned long long _selectedIndex;
}

@property (copy, nonatomic) NSArray *labels;
@property (retain, nonatomic) NSArray *displayOrientationItems;
@property (nonatomic) unsigned long long initialIndex;
@property (nonatomic) unsigned long long selectedIndex;
@property (copy, nonatomic) id /* block */ itemSelectedHandler;

- (void)updateSelectedIndex:(long long)arg0;
- (long long)findLabelIndexAtLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id /* block */)itemSelectedHandler;
- (void)setItemSelectedHandler:(id /* block */)arg0;
- (id)createItemLabelWithSelected:(BOOL)arg0;
- (id)displayOrientationItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 displayOrientationItems:(id)arg1 initialIndex:(unsigned long long)arg2;
- (void)setDisplayOrientationItems:(id)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)arg0;
- (void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1;
- (id)labels;
- (unsigned long long)selectedIndex;
- (void)setLabels:(id)arg0;
- (void)setupViews;
- (unsigned long long)initialIndex;
- (void)setInitialIndex:(unsigned long long)arg0;

@end
