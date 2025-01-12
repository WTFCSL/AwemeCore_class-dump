//
//     Generated by private class-dump
//

@class UIImageView, LOTAnimationView, UILabel, UIView;

@interface AWELongVideoEpisodeCell : UICollectionViewCell {
    UIView *_container;
    UILabel *_rankLabel;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UIView *_dateContainer;
    UILabel *_dateLabel;
    UIView *_playingContainerView;
    LOTAnimationView *_playingAnimationView;
    UILabel *_playingLabel;
    UIView *_cornerMarkView;
    UILabel *_cornerMarkLabel;
    long long _patternStatus;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *dateContainer;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIView *playingContainerView;
@property (retain, nonatomic) LOTAnimationView *playingAnimationView;
@property (retain, nonatomic) UILabel *playingLabel;
@property (retain, nonatomic) UIView *cornerMarkView;
@property (retain, nonatomic) UILabel *cornerMarkLabel;
@property (nonatomic) long long patternStatus;

- (id)playingAnimationView;
- (void)setPlayingAnimationView:(id)arg0;
- (void)setupFrameDrawingUI;
- (void)setupSelectedFrameDrawingUI:(BOOL)arg0;
- (id)playingContainerView;
- (id)playingLabel;
- (void)setPlayingContainerView:(id)arg0;
- (void)setPlayingLabel:(id)arg0;
- (void)setPatternStatus:(long long)arg0;
- (void)setupNumberingUI;
- (void)setupSelectedNumberingUI:(BOOL)arg0;
- (void)setCornerMarkWithEpisodeModel:(id)arg0;
- (id)cornerMarkView;
- (id)cornerMarkLabel;
- (long long)patternStatus;
- (id)dateContainer;
- (void)updateWithEpisodeModel:(id)arg0 shouldSimplifyTitle:(BOOL)arg1 titleUnit:(id)arg2 patternStatus:(long long)arg3;
- (void)setDateContainer:(id)arg0;
- (void)setCornerMarkView:(id)arg0;
- (void)setCornerMarkLabel:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)dateLabel;
- (void)setDateLabel:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
