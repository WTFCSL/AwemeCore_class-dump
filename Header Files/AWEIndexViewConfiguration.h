//
//     Generated by private class-dump
//

@class UIColor, UIFont;

@interface AWEIndexViewConfiguration : NSObject {
    BOOL _isRTL;
    UIColor *_indexItemBackgroundColor;
    UIColor *_indexItemTextColor;
    UIColor *_indexItemSelectedBackgroundColor;
    UIColor *_indexItemSelectedTextColor;
    double _indexItemWidth;
    double _indexItemHeight;
    double _indexItemRightMargin;
    double _indexItemSpace;
    UIFont *_indexItemFont;
    UIColor *_indicatorBackgroundColor;
    UIColor *_indicatorTextColor;
    double _indicatorHeight;
    double _indicatorRightMargin;
    UIFont *_indicatorTextFont;
    double _tableViewShelterHeight;
    double _tableViewHeaderHeight;
    long long _firstIndexSectionsOffset;
}

@property (retain, nonatomic) UIColor *indexItemBackgroundColor;
@property (retain, nonatomic) UIColor *indexItemTextColor;
@property (retain, nonatomic) UIColor *indexItemSelectedBackgroundColor;
@property (retain, nonatomic) UIColor *indexItemSelectedTextColor;
@property (nonatomic) double indexItemWidth;
@property (nonatomic) double indexItemHeight;
@property (nonatomic) double indexItemRightMargin;
@property (nonatomic) double indexItemSpace;
@property (retain, nonatomic) UIFont *indexItemFont;
@property (retain, nonatomic) UIColor *indicatorBackgroundColor;
@property (retain, nonatomic) UIColor *indicatorTextColor;
@property (nonatomic) double indicatorHeight;
@property (nonatomic) double indicatorRightMargin;
@property (retain, nonatomic) UIFont *indicatorTextFont;
@property (nonatomic) double tableViewShelterHeight;
@property (nonatomic) double tableViewHeaderHeight;
@property (nonatomic) long long firstIndexSectionsOffset;
@property (nonatomic) BOOL isRTL;

+ (id)configurationWithIndexItemBackgroundColor:(id)arg0 indexItemTextColor:(id)arg1 indexItemSelectedBackgroundColor:(id)arg2 indexItemSelectedTextColor:(id)arg3 indexItemWidth:(double)arg4 indexItemHeight:(double)arg5 indexItemRightMargin:(double)arg6 indexItemSpace:(double)arg7 indexItemFont:(id)arg8 indicatorBackgroundColor:(id)arg9 indicatorTextColor:(id)arg10 indicatorHeight:(double)arg11 indicatorRightMargin:(double)arg12 indicatorTextFont:(id)arg13 tableViewShelterHeight:(double)arg14 tableViewHeaderHeight:(double)arg15;
+ (id)configuration;

- (double)indicatorHeight;
- (double)indexItemHeight;
- (double)indexItemSpace;
- (double)indexItemWidth;
- (double)indexItemRightMargin;
- (id)indexItemBackgroundColor;
- (id)indexItemFont;
- (id)indexItemTextColor;
- (double)tableViewHeaderHeight;
- (double)tableViewShelterHeight;
- (long long)firstIndexSectionsOffset;
- (double)indicatorRightMargin;
- (id)indexItemSelectedBackgroundColor;
- (id)indexItemSelectedTextColor;
- (id)indicatorBackgroundColor;
- (id)indicatorTextColor;
- (id)indicatorTextFont;
- (void)setIndexItemBackgroundColor:(id)arg0;
- (void)setIndexItemTextColor:(id)arg0;
- (void)setIndexItemSelectedBackgroundColor:(id)arg0;
- (void)setIndexItemSelectedTextColor:(id)arg0;
- (void)setIndexItemHeight:(double)arg0;
- (void)setIndexItemWidth:(double)arg0;
- (void)setIndexItemRightMargin:(double)arg0;
- (void)setIndexItemSpace:(double)arg0;
- (void)setIndexItemFont:(id)arg0;
- (void)setIndicatorBackgroundColor:(id)arg0;
- (void)setIndicatorTextColor:(id)arg0;
- (void)setIndicatorHeight:(double)arg0;
- (void)setIndicatorRightMargin:(double)arg0;
- (void)setIndicatorTextFont:(id)arg0;
- (void)setTableViewShelterHeight:(double)arg0;
- (void)setTableViewHeaderHeight:(double)arg0;
- (void)setFirstIndexSectionsOffset:(long long)arg0;
- (void).cxx_destruct;
- (BOOL)isRTL;
- (void)setIsRTL:(BOOL)arg0;

@end
