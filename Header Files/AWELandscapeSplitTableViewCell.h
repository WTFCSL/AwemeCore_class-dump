//
//     Generated by private class-dump
//

@class AWEPaymentBadgeView, AWELandscapePageContext, UIImageView, LOTAnimationView, UILabel, UIView, AWEAwemeModel;

@interface AWELandscapeSplitTableViewCell : UITableViewCell {
    BOOL _isPortraitVideo;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_durationLabel;
    UIImageView *_digIcon;
    UILabel *_digLabel;
    UILabel *_signLabel;
    UIView *_videoInfoContainerView;
    UIImageView *_albumIcon;
    UILabel *_albumLabel;
    UIView *_playingContainerView;
    LOTAnimationView *_playingAnimationView;
    UILabel *_playingLabel;
    UIImageView *_picoVRTagView;
    AWEAwemeModel *_model;
    unsigned long long _cellType;
    AWELandscapePageContext *_context;
    AWEPaymentBadgeView *_paymentBadgeView;
}

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UILabel *signLabel;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UILabel *albumLabel;
@property (retain, nonatomic) UIView *playingContainerView;
@property (retain, nonatomic) LOTAnimationView *playingAnimationView;
@property (retain, nonatomic) UILabel *playingLabel;
@property (nonatomic) BOOL isPortraitVideo;
@property (retain, nonatomic) UIImageView *picoVRTagView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) AWELandscapePageContext *context;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;

+ (double)cellHeight;

- (void)awe_themeDidChange:(long long)arg0;
- (id)digIcon;
- (void)setDigIcon:(id)arg0;
- (id)paymentBadgeView;
- (void)setPaymentBadgeView:(id)arg0;
- (id)digLabel;
- (void)setDigLabel:(id)arg0;
- (void)updateSelectedStatus:(BOOL)arg0;
- (id)playingAnimationView;
- (id)videoInfoContainerView;
- (void)setVideoInfoContainerView:(id)arg0;
- (void)setPlayingAnimationView:(id)arg0;
- (id)albumIcon;
- (void)setAlbumIcon:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0 context:(id)arg1 cellType:(unsigned long long)arg2 renderBlock:(id /* block */)arg3;
- (id)playingContainerView;
- (id)playingLabel;
- (void)setPlayingContainerView:(id)arg0;
- (void)setPlayingLabel:(id)arg0;
- (id)signLabel;
- (void)updateTitleLabelWithSelected:(BOOL)arg0;
- (void)trackRenderCellCoverWithCellType:(unsigned long long)arg0 model:(id)arg1 success:(BOOL)arg2;
- (id)albumLabel;
- (id)picoVRTagView;
- (void)setIsPortraitVideo:(BOOL)arg0;
- (void)setSignLabel:(id)arg0;
- (void)setAlbumLabel:(id)arg0;
- (void)setPicoVRTagView:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)titleLabel;
- (void)setCellType:(unsigned long long)arg0;
- (id)context;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (unsigned long long)cellType;
- (void)setupUI;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (BOOL)isPortraitVideo;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end