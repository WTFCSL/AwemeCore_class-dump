//
//     Generated by private class-dump
//

@class UILabel, AWEAwemeLongPressFunctionModel;

@interface AWEAwemeSpeedCell : UICollectionViewCell {
    BOOL _selectedSpeed;
    AWEAwemeLongPressFunctionModel *_model;
    UILabel *_speedTitleLabel;
}

@property (retain, nonatomic) UILabel *speedTitleLabel;
@property (retain, nonatomic) AWEAwemeLongPressFunctionModel *model;
@property (nonatomic) BOOL selectedSpeed;

- (void)setSelectedSpeed:(BOOL)arg0;
- (id)speedTitleLabel;
- (void)setSpeedTitleLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (BOOL)selectedSpeed;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)createUI;

@end
