//
//     Generated by private class-dump
//

@class NSString, NSArray, UILabel, UIView;

@interface DUXFilterPanelItem : UIView {
    NSString *_itemName;
    NSArray *_itemAtoms;
    long long _itemUse;
    long long _componentCount;
    double _itemNameAtomsPadding;
    UILabel *_nameLabel;
    UIView *_filterContainerView;
    double _width;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *filterContainerView;
@property (nonatomic) double width;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSArray *itemAtoms;
@property (nonatomic) long long itemUse;
@property (nonatomic) long long componentCount;
@property (nonatomic) double itemNameAtomsPadding;

+ (id)filterPanelItemWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 itemName:(id)arg1 itemAtoms:(id)arg2 itemUse:(long long)arg3 componentCount:(long long)arg4;

- (void)setItemNameAtomsPadding:(double)arg0;
- (void)setItemUse:(long long)arg0;
- (void)setItemAtoms:(id)arg0;
- (id)itemAtoms;
- (void)setFilterContainerView:(id)arg0;
- (id)filterContainerView;
- (void)updateArrangedFilterWidth;
- (double)itemNameAtomsPadding;
- (long long)itemUse;
- (void).cxx_destruct;
- (id)itemName;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (void)setWidth:(double)arg0;
- (void)layoutSubviews;
- (double)width;
- (void)setNameLabel:(id)arg0;
- (void)setItemName:(id)arg0;
- (void)setComponentCount:(long long)arg0;
- (long long)componentCount;

@end
