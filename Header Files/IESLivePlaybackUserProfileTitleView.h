//
//     Generated by private class-dump
//

@class CAGradientLayer, NSShadow, UIImageView, NSString, UILabel, UIView;

@interface IESLivePlaybackUserProfileTitleView : UIView {
    BOOL _needsCarousel;
    UIImageView *_profileImageView;
    NSString *_title;
    CAGradientLayer *_gradientMaskLayer;
    UILabel *_profilePrefixTitleLabel;
    UIView *_profileTitleContainerView;
    UILabel *_profileTitleLabel;
    UILabel *_carouselProfileTitleLabel;
    UIView *_separatorLine;
    NSShadow *_shadow;
}

@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (retain, nonatomic) UIImageView *profileImageView;
@property (retain, nonatomic) UILabel *profilePrefixTitleLabel;
@property (retain, nonatomic) UIView *profileTitleContainerView;
@property (retain, nonatomic) UILabel *profileTitleLabel;
@property (retain, nonatomic) UILabel *carouselProfileTitleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) BOOL needsCarousel;
@property (copy, nonatomic) NSString *title;

- (id)profileTitleLabel;
- (void)setProfileTitleLabel:(id)arg0;
- (id)profileImageView;
- (void)setProfileImageView:(id)arg0;
- (void)stopTitleCarousel;
- (void)reloadLayoutForProfileImage:(id)arg0;
- (void)setNeedsCarousel;
- (void)setProfilePrefixTitleLabel:(id)arg0;
- (id)profilePrefixTitleLabel;
- (void)setProfileTitleContainerView:(id)arg0;
- (id)profileTitleContainerView;
- (void)startTitleCarouselIfNeeded;
- (id)carouselProfileTitleLabel;
- (void)setCarouselProfileTitleLabel:(id)arg0;
- (void)setNeedsCarousel:(BOOL)arg0;
- (BOOL)needsCarousel;
- (id)init;
- (void).cxx_destruct;
- (id)shadow;
- (void)setup;
- (id)title;
- (void)layoutSubviews;
- (void)setTitle:(id)arg0;
- (void)setShadow:(id)arg0;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg0;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg0;

@end
