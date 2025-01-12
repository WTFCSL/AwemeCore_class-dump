//
//     Generated by private class-dump
//

@class UIColor, UIFont, UIImageView, AWEFamiliarSegmentItem, UILabel, UIView;

@interface AWEFamiliarSegmentItemView : UIView {
    BOOL _needOptimizeTabTextColor;
    AWEFamiliarSegmentItem *_item;
    UIFont *_font;
    double _bottomLineWidth;
    UILabel *_darkLabel;
    UILabel *_lightLabel;
    UIView *_yellowDotView;
    UIImageView *_dropDownArrow;
    UIColor *_selectedDarkColor;
    UIColor *_selectedLightColor;
    UIColor *_unSelectedDarkColor;
    UIColor *_unSelectedLightColor;
    UIColor *_selectedLightLabelColor;
    UIColor *_unSelectedLightLabelColor;
}

@property (retain, nonatomic) UILabel *darkLabel;
@property (retain, nonatomic) UILabel *lightLabel;
@property (retain, nonatomic) UIView *yellowDotView;
@property (retain, nonatomic) UIImageView *dropDownArrow;
@property (nonatomic) BOOL needOptimizeTabTextColor;
@property (retain, nonatomic) UIColor *selectedDarkColor;
@property (retain, nonatomic) UIColor *selectedLightColor;
@property (retain, nonatomic) UIColor *unSelectedDarkColor;
@property (retain, nonatomic) UIColor *unSelectedLightColor;
@property (retain, nonatomic) UIColor *selectedLightLabelColor;
@property (retain, nonatomic) UIColor *unSelectedLightLabelColor;
@property (retain, nonatomic) AWEFamiliarSegmentItem *item;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double bottomLineWidth;

- (void)addNotifications;
- (id)lightLabel;
- (void)setLightLabel:(id)arg0;
- (BOOL)needOptimizeTabTextColor;
- (id)selectedDarkColor;
- (void)setSelectedDarkColor:(id)arg0;
- (id)selectedLightColor;
- (void)setSelectedLightColor:(id)arg0;
- (id)unSelectedDarkColor;
- (void)setUnSelectedDarkColor:(id)arg0;
- (id)unSelectedLightColor;
- (void)setUnSelectedLightColor:(id)arg0;
- (void)setNeedOptimizeTabTextColor:(BOOL)arg0;
- (void)configTextColor;
- (void)updateItemYellowDotWithHidden:(BOOL)arg0;
- (void)updateItemDropDownArrowWithHidden:(BOOL)arg0;
- (BOOL)isShowingYellowDot;
- (void)updateSelectedProgress:(double)arg0 darkTheme:(BOOL)arg1 themeChanged:(BOOL)arg2;
- (void)updateTitleAlpha:(double)arg0 darkTheme:(BOOL)arg1;
- (id)yellowDotView;
- (void)setYellowDotView:(id)arg0;
- (id)darkLabel;
- (void)addYellowDotView;
- (id)dropDownArrow;
- (void)setBottomLineWidth:(double)arg0;
- (void)onThemeChange;
- (id)selectedLightLabelColor;
- (void)setSelectedLightLabelColor:(id)arg0;
- (id)unSelectedLightLabelColor;
- (void)setUnSelectedLightLabelColor:(id)arg0;
- (double)bottomLineWidth;
- (void)setDarkLabel:(id)arg0;
- (void)setDropDownArrow:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)item;
- (void).cxx_destruct;
- (id)font;
- (void)setFont:(id)arg0;
- (void)dealloc;
- (void)setItem:(id)arg0;
- (id)initWithItem:(id)arg0;
- (void)setupUI;

@end
