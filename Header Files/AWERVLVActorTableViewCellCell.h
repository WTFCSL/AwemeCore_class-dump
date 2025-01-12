//
//     Generated by private class-dump
//

@class UILabel, BDImageView;

@interface AWERVLVActorTableViewCellCell : UICollectionViewCell {
    BDImageView *_avatarImg;
    UILabel *_nameLabel;
    UILabel *_roleLabel;
}

@property (retain, nonatomic) BDImageView *avatarImg;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *roleLabel;

- (void)updateWithActorModel:(id)arg0;
- (id)avatarImg;
- (id)roleLabel;
- (void)setAvatarImg:(id)arg0;
- (void)setRoleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;

@end
