//
//     Generated by private class-dump
//

@class UILabel;

@interface IESLivePKRecordFilterViewCell : UICollectionViewCell {
    BOOL _isSelected;
    UILabel *_filterTabLabel;
}

@property (retain, nonatomic) UILabel *filterTabLabel;
@property (nonatomic) BOOL isSelected;

- (void)setFilterTabLabel:(id)arg0;
- (id)filterTabLabel;
- (void)updateViewsWithSelected:(BOOL)arg0;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isSelected;
- (void)setupViews;

@end
