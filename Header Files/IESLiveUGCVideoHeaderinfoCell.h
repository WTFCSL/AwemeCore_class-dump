//
//     Generated by private class-dump
//

@class UILabel, IESLiveUGCVideoHeaderDiffableModel, IESLiveButton;

@interface IESLiveUGCVideoHeaderinfoCell : UICollectionViewCell {
    IESLiveUGCVideoHeaderDiffableModel *_model;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    IESLiveButton *_changeMVButton;
}

@property (retain, nonatomic) IESLiveUGCVideoHeaderDiffableModel *model;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) IESLiveButton *changeMVButton;

- (void)configWithModel:(id)arg0;
- (id)changeMVButton;
- (void)changeMVButtonClick;
- (void)setChangeMVButton:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (id)leftLabel;
- (id)rightLabel;
- (void)setLeftLabel:(id)arg0;
- (void)setRightLabel:(id)arg0;

@end
