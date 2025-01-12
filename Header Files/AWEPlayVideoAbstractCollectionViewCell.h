//
//     Generated by private class-dump
//

@class UILabel, AWEPlayVideoAbstractTimeComponent;

@interface AWEPlayVideoAbstractCollectionViewCell : UICollectionViewCell {
    UILabel *_titleLable;
    UILabel *_contentLabel;
    AWEPlayVideoAbstractTimeComponent *_timeBackView;
}

@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWEPlayVideoAbstractTimeComponent *timeBackView;

+ (id)identifier;

- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (void)configUI;
- (id)timeBackView;
- (void)updateWithContent:(id)arg0 jumpTime:(id)arg1 title:(id)arg2;
- (void)setTimeBackView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSelected:(BOOL)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end
