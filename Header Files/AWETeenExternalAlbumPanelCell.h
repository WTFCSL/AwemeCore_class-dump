//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWETeenExternalAlbumPanelCell : UITableViewCell {
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_durationLabel;
    UIImageView *_diggImageView;
    UILabel *_diggLabel;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *diggImageView;
@property (retain, nonatomic) UILabel *diggLabel;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)updateCoverWithModel:(id)arg0;
- (void)updateDescriptionWithModel:(id)arg0;
- (void)updateDurationWithModel:(id)arg0;
- (void)updateDiggWithModel:(id)arg0;
- (id)diggImageView;
- (id)diggLabel;
- (void)updateWithAwemeModel:(id)arg0 isAnchored:(BOOL)arg1;
- (void)setDiggImageView:(id)arg0;
- (void)setDiggLabel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;

@end
