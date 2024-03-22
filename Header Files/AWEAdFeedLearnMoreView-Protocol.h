//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, UILabel;

@protocol AWEAdFeedLearnMoreView <AWECrotocol>

@property (nonatomic) BOOL isShowing;
@property (readonly, nonatomic) UILabel *tipsLabel;
@property (readonly, nonatomic) UIImageView *arrowImageView;
@property (readonly, nonatomic) UIColor *toColor;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isLeftView;

- (id)referString;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (id)tipsLabel;
- (void)playFlashAnimated:(BOOL)arg0;
- (void)playGuideAnimation;
- (BOOL)isLeftView;
- (void)updateLearnMoreViewWithModel:(id)arg0;
- (void)setIsLeftView:(BOOL)arg0;
- (BOOL)isShowing;
- (void)prepareToAnimate;
- (id)arrowImageView;
- (id)toColor;

@end
