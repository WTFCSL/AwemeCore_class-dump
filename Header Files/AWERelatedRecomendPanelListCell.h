//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIColor;

@interface AWERelatedRecomendPanelListCell : UITableViewCell {
    UIImageView *_videoCoverView;
    UILabel *_titleLabel;
    UILabel *_durationLabel;
    UIImageView *_likeIcon;
    UILabel *_playLabel;
    UIColor *_titleLabelTextColor;
    UIColor *_contentViewBackgroundColor;
    UIColor *_locatedContentViewBackgroundColor;
    UIColor *_lineAttributesColor;
}

@property (retain, nonatomic) UIImageView *videoCoverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *contentViewBackgroundColor;
@property (retain, nonatomic) UIColor *locatedContentViewBackgroundColor;
@property (retain, nonatomic) UIColor *lineAttributesColor;

- (id)contentViewBackgroundColor;
- (void)setContentViewBackgroundColor:(id)arg0;
- (void)setLocatedContentViewBackgroundColor:(id)arg0;
- (id)playLabel;
- (id)locatedContentViewBackgroundColor;
- (void)setConstDarkMode;
- (void)setPlayLabel:(id)arg0;
- (void)setLineAttributesColor:(id)arg0;
- (id)lineAttributesColor;
- (id)likeIcon;
- (void)setLikeIcon:(id)arg0;
- (id)videoCoverView;
- (void)updateAwemeModel:(id)arg0 selected:(BOOL)arg1;
- (void)setContentBackgroundColor;
- (void)setVideoCoverView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (void)setTitleLabelTextColor:(id)arg0;
- (id)titleLabelTextColor;

@end