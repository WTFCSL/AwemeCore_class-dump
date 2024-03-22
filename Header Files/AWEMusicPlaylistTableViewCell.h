//
//     Generated by private class-dump
//

@class UIStackView, UIImageView, UILabel, UIView, UIButton;
@protocol AWEMusicPlaylistTableViewCellDelegate;

@interface AWEMusicPlaylistTableViewCell : UITableViewCell {
    id<AWEMusicPlaylistTableViewCellDelegate> _delegate;
    UIImageView *_iconImageV;
    UILabel *_titleLB;
    UILabel *_countLB;
    UIImageView *_privateImageView;
    UIStackView *_horizontaLine;
    UIStackView *_tagStackView;
    UIButton *_addButton;
    UIView *_coverMaskView;
    UIImageView *_myFavoriteIcon;
}

@property (retain, nonatomic) UIImageView *iconImageV;
@property (retain, nonatomic) UILabel *titleLB;
@property (retain, nonatomic) UILabel *countLB;
@property (retain, nonatomic) UIImageView *privateImageView;
@property (retain, nonatomic) UIStackView *horizontaLine;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) UIImageView *myFavoriteIcon;
@property (weak, nonatomic) id<AWEMusicPlaylistTableViewCellDelegate> delegate;

- (void)setTagStackView:(id)arg0;
- (id)tagStackView;
- (void)setCoverMaskView:(id)arg0;
- (id)coverMaskView;
- (void)displayWithModel:(id)arg0;
- (id)myFavoriteIcon;
- (void)setMyFavoriteIcon:(id)arg0;
- (id)titleLB;
- (id)horizontaLine;
- (void)setTitleLB:(id)arg0;
- (void)setHorizontaLine:(id)arg0;
- (id)iconImageV;
- (id)privateImageView;
- (id)countLB;
- (void)didTapAddButton;
- (void)setIconImageV:(id)arg0;
- (void)setCountLB:(id)arg0;
- (void)setPrivateImageView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)updateConstraints;
- (void)setDelegate:(id)arg0;
- (void)setupViews;
- (id)addButton;
- (void)setAddButton:(id)arg0;

@end
