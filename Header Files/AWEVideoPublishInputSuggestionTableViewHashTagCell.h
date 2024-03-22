//
//     Generated by private class-dump
//

@class UILabel, UIImageView, AWERoundedBackgroundLabelView;

@interface AWEVideoPublishInputSuggestionTableViewHashTagCell : UITableViewCell {
    UILabel *_labelName;
    UIImageView *_tagImageView;
    UIImageView *_historyView;
    UIImageView *_hotSpotView;
    AWERoundedBackgroundLabelView *_labelCount;
    UILabel *_labelCountLong;
    unsigned long long _hashTagType;
    double _imageWidth;
    double _imageHeight;
}

@property (retain, nonatomic) UILabel *labelName;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIImageView *historyView;
@property (retain, nonatomic) UIImageView *hotSpotView;
@property (retain, nonatomic) AWERoundedBackgroundLabelView *labelCount;
@property (retain, nonatomic) UILabel *labelCountLong;
@property (nonatomic) unsigned long long hashTagType;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;

- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (unsigned long long)hashTagType;
- (void)setHashTagType:(unsigned long long)arg0;
- (id)historyView;
- (id)hotSpotView;
- (id)labelCountLong;
- (void)showHotSpotViewWithModel:(id)arg0;
- (void)showHotIcon;
- (void)showRecommendIcon;
- (void)showIconsInTyping:(id)arg0;
- (void)showIconsNotInTyping:(id)arg0;
- (void)updateChallengeCountView:(long long)arg0 isFirst:(BOOL)arg1 isNewTag:(BOOL)arg2;
- (void)checkIfShowIcons:(id)arg0;
- (void)setCounterNumber:(id)arg0 isFirst:(BOOL)arg1 isNewTag:(BOOL)arg2;
- (void)setHistoryView:(id)arg0;
- (void)setHotSpotView:(id)arg0;
- (void)setLabelCount:(id)arg0;
- (void)setLabelCountLong:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)accessibilityLabel;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)labelCount;
- (BOOL)isAccessibilityElement;
- (double)imageWidth;
- (void)setupUI;
- (id)labelName;
- (double)imageHeight;
- (void)setLabelName:(id)arg0;
- (void)setImageHeight:(double)arg0;
- (void)setImageWidth:(double)arg0;

@end
