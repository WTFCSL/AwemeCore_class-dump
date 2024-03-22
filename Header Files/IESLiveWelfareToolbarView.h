//
//     Generated by private class-dump
//

@class UIImageView, NSString, UIImage;
@protocol IESLiveWebPPlayer;

@interface IESLiveWelfareToolbarView : UIView {
    BOOL _isAnimating;
    UIImage *_welfareSpiltWebpTheme;
    UIImage *_welfareCardOutWebpTheme;
    UIImage *_welfareCardBackWebpTheme;
    UIImageView<IESLiveWebPPlayer> *_iconImageView;
    unsigned long long _animationType;
    NSString *_spiltWebpString;
    NSString *_cardOutWebpString;
    NSString *_cardBackWebpString;
    UIImage *_welfareSpiltWebp;
    UIImage *_welfareCardOutWebp;
    UIImage *_welfareCardBackWebp;
}

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *iconImageView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) unsigned long long animationType;
@property (retain, nonatomic) NSString *spiltWebpString;
@property (retain, nonatomic) NSString *cardOutWebpString;
@property (retain, nonatomic) NSString *cardBackWebpString;
@property (retain, nonatomic) UIImage *welfareSpiltWebp;
@property (retain, nonatomic) UIImage *welfareCardOutWebp;
@property (retain, nonatomic) UIImage *welfareCardBackWebp;
@property (retain, nonatomic) UIImage *welfareSpiltWebpTheme;
@property (retain, nonatomic) UIImage *welfareCardOutWebpTheme;
@property (retain, nonatomic) UIImage *welfareCardBackWebpTheme;

- (void)playAnimationWithType:(unsigned long long)arg0;
- (void)setSpiltWebpString:(id)arg0;
- (void)setCardOutWebpString:(id)arg0;
- (void)setCardBackWebpString:(id)arg0;
- (id)spiltWebpString;
- (void)setWelfareSpiltWebp:(id)arg0;
- (id)welfareCardBackWebp;
- (id)welfareCardBackWebpTheme;
- (id)cardBackWebpString;
- (id)welfareCardOutWebp;
- (id)welfareCardOutWebpTheme;
- (id)cardOutWebpString;
- (id)welfareSpiltWebp;
- (id)welfareSpiltWebpTheme;
- (void)setWelfareCardBackWebp:(id)arg0;
- (void)setWelfareCardOutWebp:(id)arg0;
- (void)startAnimationWithType:(unsigned long long)arg0;
- (void)changeImageWithType:(unsigned long long)arg0;
- (void)setWelfareSpiltWebpTheme:(id)arg0;
- (void)setWelfareCardOutWebpTheme:(id)arg0;
- (void)setWelfareCardBackWebpTheme:(id)arg0;
- (BOOL)isAnimating;
- (id)init;
- (void).cxx_destruct;
- (void)setAnimationType:(unsigned long long)arg0;
- (unsigned long long)animationType;
- (id)iconImageView;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;

@end
