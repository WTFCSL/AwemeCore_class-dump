//
//     Generated by private class-dump
//

@class UIFont, AWENearbyPOIContentModel, UIView, NSAttributedString, UIImageView, AWEGradientView, YYLabel, UIColor;

@interface AWENearbyCardPOIRecommendView : UIView {
    UIColor *_labelColor;
    UIFont *_labelFont;
    NSAttributedString *_truncationToken;
    AWENearbyPOIContentModel *_model;
    YYLabel *_recommendLabel;
    UIView *_recommendContainer;
    long long _maxWidth;
    UIImageView *_awemeIcon;
    AWEGradientView *_iconBGView;
}

@property (retain, nonatomic) AWENearbyPOIContentModel *model;
@property (retain, nonatomic) YYLabel *recommendLabel;
@property (retain, nonatomic) UIView *recommendContainer;
@property (nonatomic) long long maxWidth;
@property (retain, nonatomic) UIImageView *awemeIcon;
@property (retain, nonatomic) AWEGradientView *iconBGView;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIFont *labelFont;
@property (copy, nonatomic) NSAttributedString *truncationToken;

- (void)setRecommendLabel:(id)arg0;
- (id)recommendLabel;
- (void)updateSubViewNoIconWithSring:(id)arg0 Model:(id)arg1 maxWidth:(double)arg2 leftAndRightOffset:(double)arg3;
- (void)updateSubViewHaveIconWithSring:(id)arg0 model:(id)arg1 showIconStyleType:(unsigned long long)arg2 maxWidth:(double)arg3;
- (void)updateSubViewNoIconWithAttributedStr:(id)arg0 Model:(id)arg1 maxWidth:(double)arg2 leftAndRightOffset:(double)arg3;
- (void)updateUIWithNOIconWithModel:(id)arg0 maxWidth:(double)arg1 leftAndRightOffset:(double)arg2;
- (void)updateUIWithStyleIconNoBG;
- (void)updateUIWithStyleIconHasBG;
- (void)updateUIWithStyleAllNoBG;
- (id)iconBGView;
- (id)awemeIcon;
- (id)recommendContainer;
- (void)setRecommendContainer:(id)arg0;
- (void)setAwemeIcon:(id)arg0;
- (void)setIconBGView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setLabelFont:(id)arg0;
- (void)setMaxWidth:(long long)arg0;
- (id)model;
- (long long)maxWidth;
- (id)labelFont;
- (id)labelColor;
- (void)setLabelColor:(id)arg0;
- (id)truncationToken;
- (void)setTruncationToken:(id)arg0;

@end
