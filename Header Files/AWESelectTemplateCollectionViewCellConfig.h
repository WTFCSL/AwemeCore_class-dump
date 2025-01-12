//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface AWESelectTemplateCollectionViewCellConfig : NSObject {
    BOOL _shouldHideSelectedMaskView;
    BOOL _shouldAnimateSelectedState;
    UIColor *_selectedBorderColor;
    UIColor *_unselectedBorderColor;
    UIColor *_selectedTextColor;
    UIColor *_unselectedTextColor;
    NSString *_noneTemplateIconName;
    long long _noneTemplateIconSize;
    NSString *_noneTemplateText;
    double _templateCellCorderRadius;
    double _cellWidth;
    double _cellHeight;
}

@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (retain, nonatomic) UIColor *unselectedBorderColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIColor *unselectedTextColor;
@property (retain, nonatomic) NSString *noneTemplateIconName;
@property (nonatomic) long long noneTemplateIconSize;
@property (retain, nonatomic) NSString *noneTemplateText;
@property (nonatomic) BOOL shouldHideSelectedMaskView;
@property (nonatomic) BOOL shouldAnimateSelectedState;
@property (nonatomic) double templateCellCorderRadius;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellHeight;

+ (id)defaultConfig;

- (id)selectedBorderColor;
- (void)setSelectedBorderColor:(id)arg0;
- (void)setUnselectedBorderColor:(id)arg0;
- (void)setUnselectedTextColor:(id)arg0;
- (void)setShouldHideSelectedMaskView:(BOOL)arg0;
- (void)setShouldAnimateSelectedState:(BOOL)arg0;
- (void)setNoneTemplateIconName:(id)arg0;
- (void)setNoneTemplateIconSize:(long long)arg0;
- (void)setNoneTemplateText:(id)arg0;
- (void)setTemplateCellCorderRadius:(double)arg0;
- (id)noneTemplateIconName;
- (BOOL)shouldHideSelectedMaskView;
- (BOOL)shouldAnimateSelectedState;
- (id)noneTemplateText;
- (double)templateCellCorderRadius;
- (long long)noneTemplateIconSize;
- (id)unselectedBorderColor;
- (id)unselectedTextColor;
- (id)init;
- (void).cxx_destruct;
- (double)cellWidth;
- (void)setSelectedTextColor:(id)arg0;
- (id)selectedTextColor;
- (double)cellHeight;
- (void)setCellHeight:(double)arg0;
- (void)setCellWidth:(double)arg0;

@end
