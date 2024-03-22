//
//     Generated by private class-dump
//

@class HTSLiveScrollLabel, UIColor, UIImageView, UILabel, UIView, IESEffectModel, IESLiveEffectProgressView;

@interface HTSLiveFaceStickerItemCell : UICollectionViewCell {
    IESEffectModel *_effectModel;
    UIImageView *_effectImageView;
    UIView *_effectImageContainer;
    UIView *_redDot;
    UIImageView *_downloadImageView;
    UIView *_collectedIconContainer;
    IESLiveEffectProgressView *_downloadProgressView;
    HTSLiveScrollLabel *_scrollLabel;
    UIColor *_appliedBorderColor;
    UIImageView *_linkageTipImageView;
    UILabel *_linkageTipLabel;
}

@property (retain, nonatomic) UIImageView *effectImageView;
@property (retain, nonatomic) UIView *effectImageContainer;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIImageView *downloadImageView;
@property (retain, nonatomic) UIView *collectedIconContainer;
@property (retain, nonatomic) IESLiveEffectProgressView *downloadProgressView;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) HTSLiveScrollLabel *scrollLabel;
@property (retain, nonatomic) UIColor *appliedBorderColor;
@property (retain, nonatomic) UIImageView *linkageTipImageView;
@property (retain, nonatomic) UILabel *linkageTipLabel;

- (id)effectModel;
- (void)setEffectModel:(id)arg0;
- (id)effectImageView;
- (void)setEffectImageView:(id)arg0;
- (void)setRedDot:(id)arg0;
- (id)redDot;
- (void)setupControl;
- (void)setDownloadImageView:(id)arg0;
- (id)downloadImageView;
- (void)startDownloadAnimation;
- (id)scrollLabel;
- (void)setScrollLabel:(id)arg0;
- (void)setEffectImageContainer:(id)arg0;
- (id)effectImageContainer;
- (void)setLinkageTipImageView:(id)arg0;
- (id)linkageTipImageView;
- (void)setLinkageTipLabel:(id)arg0;
- (id)linkageTipLabel;
- (void)setCollectedIconContainer:(id)arg0;
- (id)collectedIconContainer;
- (void)addDownloadProgressView;
- (void)updateDownloadingProgress:(double)arg0;
- (id)appliedBorderColor;
- (void)setAppliedBorderColor:(id)arg0;
- (void)setEffectApplied:(BOOL)arg0;
- (void)configWithDefaultAppearance;
- (void)configWithEffect:(id)arg0 needToShowCollectedIcon:(BOOL)arg1 cellWidth:(double)arg2;
- (void)endDownloadAnimationWithResult:(BOOL)arg0;
- (void)updateAppliedBorderColor:(id)arg0;
- (void)receiveCleanEffectNotification:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)_placeholderImage;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (void)accessibilityElementDidBecomeFocused;
- (void)markAsRead;
- (id)downloadProgressView;
- (void)setDownloadProgressView:(id)arg0;

@end