//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIColor;

@interface AWELiveAcqCastVideoMixListCell : UITableViewCell {
    BOOL _isBGColorWhite;
    UIImageView *_mixVideoCoverView;
    UILabel *_titleLabel;
    UILabel *_durationLabel;
    UIImageView *_digIcon;
    UILabel *_playLabel;
    UIImageView *_picoVRTagView;
    UIColor *_titleLabelTextColor;
    UIColor *_contentViewBackgroundColor;
    UIColor *_lineAttributesColor;
}

@property (retain, nonatomic) UIImageView *mixVideoCoverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) UIImageView *picoVRTagView;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *contentViewBackgroundColor;
@property (retain, nonatomic) UIColor *lineAttributesColor;
@property (nonatomic) BOOL isBGColorWhite;

- (void)setIsBGColorWhite:(BOOL)arg0;
- (BOOL)isBGColorWhite;
- (id)contentViewBackgroundColor;
- (void)setContentViewBackgroundColor:(id)arg0;
- (id)mixVideoCoverView;
- (id)digIcon;
- (id)playLabel;
- (void)setMixVideoCoverView:(id)arg0;
- (void)setDigIcon:(id)arg0;
- (void)setPlayLabel:(id)arg0;
- (void)setLineAttributesColor:(id)arg0;
- (id)lineAttributesColor;
- (id)getFormatTimeStringWithDuration:(id)arg0;
- (id)minuteFormatStringWithDuration:(id)arg0;
- (id)secondsFormatStringWithDuration:(id)arg0;
- (void)updateAwemeModel:(id)arg0;
- (id)picoVRTagView;
- (void)setPicoVRTagView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg0;
- (void)setTitleLabelTextColor:(id)arg0;
- (id)titleLabelTextColor;

@end
