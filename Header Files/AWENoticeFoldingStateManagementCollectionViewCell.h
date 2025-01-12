//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEIMNoticeFoldStructModel;

@interface AWENoticeFoldingStateManagementCollectionViewCell : UICollectionViewCell {
    AWEIMNoticeFoldStructModel *_model;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_foldingStateLabel;
    UIImageView *_arrowView;
}

@property (retain, nonatomic) AWEIMNoticeFoldStructModel *model;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *foldingStateLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (id)foldingStateLabel;
- (void)p_configFoldingStateLabel;
- (void)cofigWithModel:(id)arg0;
- (void)setFoldingStateLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (int)avatarWidth;

@end
