//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface IESLiveFeedTabCell : UICollectionViewCell {
    BOOL _currentSelected;
    UILabel *_titleLabel;
    UIView *_line;
}

@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL currentSelected;

- (void)setCurrentSelected:(BOOL)arg0;
- (BOOL)currentSelected;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (id)line;
- (void)setTitleLabel:(id)arg0;
- (void)setLine:(id)arg0;

@end
