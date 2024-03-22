//
//     Generated by private class-dump
//

@class UIImageView, AWESlidingTabbarView, AWEGradientView, UIView, UILabel;

@interface AWEHotSearchCommentFeedHeaderView : UIView {
    BOOL _isGray;
    AWEGradientView *_topGradientView;
    UIView *_backgroundView;
    UIImageView *_flameImageView;
    UILabel *_keywordLabel;
    UIImageView *_discussImageView;
    UILabel *_discussTitleLabel;
    AWEGradientView *_lineGradientView;
    AWESlidingTabbarView *_slidingTabBar;
}

@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *flameImageView;
@property (retain, nonatomic) UILabel *keywordLabel;
@property (retain, nonatomic) UIImageView *discussImageView;
@property (retain, nonatomic) UILabel *discussTitleLabel;
@property (retain, nonatomic) AWEGradientView *lineGradientView;
@property (retain, nonatomic) AWESlidingTabbarView *slidingTabBar;
@property (nonatomic) BOOL isGray;

- (BOOL)isGray;
- (void)setIsGray:(BOOL)arg0;
- (void)configUI;
- (id)slidingTabBar;
- (void)setSlidingTabBar:(id)arg0;
- (id)getSlidingTabbarView;
- (void)updateKeywordPinStyle:(BOOL)arg0;
- (void)showSkeletonStyle;
- (id)flameImageView;
- (id)discussTitleLabel;
- (void)updateUIIfThemeChanged;
- (id)discussImageView;
- (id)lineGradientView;
- (void)clearSkeletonStyle;
- (void)setFlameImageView:(id)arg0;
- (void)setDiscussImageView:(id)arg0;
- (void)setDiscussTitleLabel:(id)arg0;
- (void)setLineGradientView:(id)arg0;
- (id)init;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setBackgroundView:(id)arg0;
- (void)updateWithContext:(id)arg0;
- (id)keywordLabel;
- (void)setKeywordLabel:(id)arg0;
- (id)topGradientView;
- (void)setTopGradientView:(id)arg0;

@end