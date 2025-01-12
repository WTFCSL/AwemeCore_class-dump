//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface BDXPageViewProps : NSObject {
    BOOL _hideIndicator;
    BOOL _hideBorder;
    BOOL _allowHorizontalBounce;
    BOOL _reserveEdgeback;
    BOOL _allowHorizontalGesture;
    int _gestureDirection;
    UIColor *_tabbarBackground;
    unsigned long long _selectedTextSize;
    double _tabPaddingLeft;
    double _tabPaddingRight;
    double _tabHeight;
    NSString *_textBoldMode;
    unsigned long long _layoutGravity;
    long long _selectIndex;
    UIColor *_selectTextColor;
    unsigned long long _unSelectedTextSize;
    UIColor *_unSelectTextColor;
    UIColor *_tabIndicatorColor;
    unsigned long long _tabInterSpace;
    unsigned long long _tabIndicatorWidth;
    unsigned long long _tabIndicatorHeight;
    double _tabIndicatorRadius;
    double _borderTop;
    double _borderHeight;
    double _borderWidth;
    UIColor *_borderColor;
    double _gestureBeginOffset;
}

@property (retain, nonatomic) UIColor *tabbarBackground;
@property (nonatomic) unsigned long long selectedTextSize;
@property (nonatomic) double tabPaddingLeft;
@property (nonatomic) double tabPaddingRight;
@property (nonatomic) double tabHeight;
@property (retain, nonatomic) NSString *textBoldMode;
@property (nonatomic) unsigned long long layoutGravity;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) UIColor *selectTextColor;
@property (nonatomic) unsigned long long unSelectedTextSize;
@property (retain, nonatomic) UIColor *unSelectTextColor;
@property (retain, nonatomic) UIColor *tabIndicatorColor;
@property (nonatomic) BOOL hideIndicator;
@property (nonatomic) unsigned long long tabInterSpace;
@property (nonatomic) unsigned long long tabIndicatorWidth;
@property (nonatomic) unsigned long long tabIndicatorHeight;
@property (nonatomic) double tabIndicatorRadius;
@property (nonatomic) double borderTop;
@property (nonatomic) double borderHeight;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL hideBorder;
@property (nonatomic) BOOL allowHorizontalBounce;
@property (nonatomic) BOOL reserveEdgeback;
@property (nonatomic) BOOL allowHorizontalGesture;
@property (nonatomic) int gestureDirection;
@property (nonatomic) double gestureBeginOffset;

- (long long)selectIndex;
- (void)setSelectIndex:(long long)arg0;
- (unsigned long long)selectedTextSize;
- (void)setSelectedTextSize:(unsigned long long)arg0;
- (double)tabHeight;
- (unsigned long long)layoutGravity;
- (void)setLayoutGravity:(unsigned long long)arg0;
- (double)borderHeight;
- (void)setHideBorder:(BOOL)arg0;
- (BOOL)hideBorder;
- (void)setGestureBeginOffset:(double)arg0;
- (void)setGestureDirection:(int)arg0;
- (double)gestureBeginOffset;
- (id)tabbarBackground;
- (id)textBoldMode;
- (id)selectTextColor;
- (unsigned long long)unSelectedTextSize;
- (id)unSelectTextColor;
- (id)tabIndicatorColor;
- (unsigned long long)tabInterSpace;
- (unsigned long long)tabIndicatorWidth;
- (unsigned long long)tabIndicatorHeight;
- (double)tabIndicatorRadius;
- (double)tabPaddingLeft;
- (double)tabPaddingRight;
- (BOOL)allowHorizontalBounce;
- (BOOL)reserveEdgeback;
- (BOOL)allowHorizontalGesture;
- (void)setTabbarBackground:(id)arg0;
- (void)setSelectTextColor:(id)arg0;
- (void)setUnSelectedTextSize:(unsigned long long)arg0;
- (void)setUnSelectTextColor:(id)arg0;
- (void)setTabIndicatorColor:(id)arg0;
- (void)setHideIndicator:(BOOL)arg0;
- (void)setTabInterSpace:(unsigned long long)arg0;
- (void)setTabIndicatorWidth:(unsigned long long)arg0;
- (void)setTabIndicatorHeight:(unsigned long long)arg0;
- (void)setTabPaddingLeft:(double)arg0;
- (void)setTabPaddingRight:(double)arg0;
- (void)setTabHeight:(double)arg0;
- (void)setTextBoldMode:(id)arg0;
- (void)setBorderHeight:(double)arg0;
- (void)setAllowHorizontalBounce:(BOOL)arg0;
- (void)setReserveEdgeback:(BOOL)arg0;
- (void)setTabIndicatorRadius:(double)arg0;
- (void)setAllowHorizontalGesture:(BOOL)arg0;
- (double)borderWidth;
- (id)init;
- (void).cxx_destruct;
- (id)borderColor;
- (void)setBorderColor:(id)arg0;
- (void)setBorderWidth:(double)arg0;
- (int)gestureDirection;
- (BOOL)hideIndicator;
- (double)borderTop;
- (void)setBorderTop:(double)arg0;

@end
