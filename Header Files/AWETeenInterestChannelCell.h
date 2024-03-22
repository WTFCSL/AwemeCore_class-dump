//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWETeenInterestChannelCell : UICollectionViewCell {
    BOOL _isSmallScreen;
    UIImageView *_itemIcon;
    UILabel *_itemContent;
    UIView *_placeholderView;
    double _iconWidth;
    double _placeholderWidth;
    double _contentWidth;
    double _iconContentSpacing;
    long long _fontSize;
}

@property (retain, nonatomic) UIImageView *itemIcon;
@property (retain, nonatomic) UILabel *itemContent;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic) BOOL isSmallScreen;
@property (nonatomic) double iconWidth;
@property (nonatomic) double placeholderWidth;
@property (nonatomic) double contentWidth;
@property (nonatomic) double iconContentSpacing;
@property (nonatomic) long long fontSize;

- (void)configWithModel:(id)arg0;
- (id)itemIcon;
- (void)setItemIcon:(id)arg0;
- (void)p_setupViews;
- (void)updateChannelName:(id)arg0;
- (void)p_setupStatus;
- (id)itemContent;
- (double)iconContentSpacing;
- (void)updateBackgroundTheme:(BOOL)arg0;
- (void)setItemContent:(id)arg0;
- (void)setIconContentSpacing:(double)arg0;
- (id)placeholderView;
- (void).cxx_destruct;
- (void)setFontSize:(long long)arg0;
- (long long)fontSize;
- (double)contentWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)isSmallScreen;
- (void)setPlaceholderView:(id)arg0;
- (double)iconWidth;
- (void)setContentWidth:(double)arg0;
- (void)setIsSmallScreen:(BOOL)arg0;
- (void)setIconWidth:(double)arg0;
- (void)setPlaceholderWidth:(double)arg0;
- (double)placeholderWidth;

@end
