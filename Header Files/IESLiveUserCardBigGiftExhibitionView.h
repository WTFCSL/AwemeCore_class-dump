//
//     Generated by private class-dump
//

@class UIStackView, UIView, IESLiveUserCardStore, NSString, IESLiveGiftExhibitionBanner, UIImageView, NSMutableArray, HTSLiveAmazingBackgroundView, IESLiveAnimatedImageView, UILabel;

@interface IESLiveUserCardBigGiftExhibitionView : UIView {
    BOOL _shouldPlayAnimation;
    IESLiveUserCardStore *_store;
    IESLiveGiftExhibitionBanner *_giftExhibitionData;
    HTSLiveAmazingBackgroundView *_backgroundColorView;
    UILabel *_textLabel;
    UILabel *_numberLabel;
    UIImageView *_collecAllImageView;
    UIImageView *_rightBackgroundImageView;
    UIImageView *_suffixIcon;
    UIStackView *_rightContainerView;
    UIView *_parentRightView;
    double _widthSpace;
    NSMutableArray *_animationList;
    NSString *_playGradeLevelUpAnimationKey;
    IESLiveAnimatedImageView *_gradeAnimationView;
}

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveGiftExhibitionBanner *giftExhibitionData;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *backgroundColorView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIImageView *collecAllImageView;
@property (retain, nonatomic) UIImageView *rightBackgroundImageView;
@property (retain, nonatomic) UIImageView *suffixIcon;
@property (retain, nonatomic) UIStackView *rightContainerView;
@property (retain, nonatomic) UIView *parentRightView;
@property (nonatomic) double widthSpace;
@property (retain, nonatomic) NSMutableArray *animationList;
@property (nonatomic) BOOL shouldPlayAnimation;
@property (copy, nonatomic) NSString *playGradeLevelUpAnimationKey;
@property (retain, nonatomic) IESLiveAnimatedImageView *gradeAnimationView;

- (id)rightContainerView;
- (void)setRightContainerView:(id)arg0;
- (id)suffixIcon;
- (void)setSuffixIcon:(id)arg0;
- (void)usercardOpenFinished;
- (id)textColor:(BOOL)arg0;
- (void)setGiftExhibitionData:(id)arg0;
- (void)setWidthSpace:(double)arg0;
- (void)setShouldPlayAnimation:(BOOL)arg0;
- (id)giftExhibitionData;
- (void)setPlayGradeLevelUpAnimationKey:(id)arg0;
- (void)trackEvent:(id)arg0 isClicked:(BOOL)arg1;
- (id)collecAllImageView;
- (BOOL)shouldPlayGradeLevelUpAnimation;
- (id)gradeAnimationView;
- (id)rightBackgroundImageView;
- (void)doTap;
- (void)setParentRightView:(id)arg0;
- (id)parentRightView;
- (struct CGSize { double x0; double x1; })parentViewSize;
- (BOOL)shouldPlayAnimation;
- (id)createColors;
- (id)playGradeLevelUpAnimationKey;
- (double)widthSpace;
- (id)animationList;
- (void)setCollecAllImageView:(id)arg0;
- (void)setRightBackgroundImageView:(id)arg0;
- (void)setAnimationList:(id)arg0;
- (void)setGradeAnimationView:(id)arg0;
- (id)textLabel;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)textContent;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;
- (id)backgroundColorView;
- (BOOL)shouldShowAnimation;
- (id)userType:(id)arg0;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg0;
- (void)setBackgroundColorView:(id)arg0;

@end
