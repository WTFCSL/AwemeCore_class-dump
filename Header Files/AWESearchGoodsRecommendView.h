//
//     Generated by private class-dump
//

@class UIImageView, NSTimer, AWESearchMerchandiseCommonInfo, UILabel, UIView;

@interface AWESearchGoodsRecommendView : UIView {
    BOOL _needUnifiedUIConfig;
    UIView *_bgColorView;
    AWESearchMerchandiseCommonInfo *_recommend;
    UILabel *_recommendLabel;
    UILabel *_suffixLabel;
    UIImageView *_recommendIcon;
    UIImageView *_arrowIcon;
    NSTimer *_countDownTimer;
}

@property (retain, nonatomic) UIView *bgColorView;
@property (nonatomic) BOOL needUnifiedUIConfig;
@property (retain, nonatomic) AWESearchMerchandiseCommonInfo *recommend;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (retain, nonatomic) UIImageView *recommendIcon;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) NSTimer *countDownTimer;

+ (double)recommendHeightNeedUnifiedUIConfig:(BOOL)arg0;

- (void)setRecommendLabel:(id)arg0;
- (id)recommendLabel;
- (id)arrowIcon;
- (void)setArrowIcon:(id)arg0;
- (void)configBGColor;
- (double)recommendMaxWidthWithContainerWidth:(double)arg0;
- (id)recommend;
- (BOOL)hasBgConfig;
- (BOOL)needEllipsis;
- (void)beginTimer;
- (long long)getCountdownInterVal;
- (void)countDownAction;
- (void)setRecommend:(id)arg0 needUnifiedUIConfig:(BOOL)arg1;
- (BOOL)needUnifiedUIConfig;
- (void)setNeedUnifiedUIConfig:(BOOL)arg0;
- (void)setRecommend:(id)arg0;
- (id)suffixLabel;
- (void)setSuffixLabel:(id)arg0;
- (id)recommendIcon;
- (void)setRecommendIcon:(id)arg0;
- (void).cxx_destruct;
- (void)endTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)updateText;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;
- (void)setBgColorView:(id)arg0;
- (id)bgColorView;

@end
