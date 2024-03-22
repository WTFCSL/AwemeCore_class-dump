//
//     Generated by private class-dump
//

@class NSString, UIFont;
@protocol AWELeftSideBarItemContext;

@interface AWELeftSideBarRecentVisitUserCellConfig : MTLModel <MTLJSONSerializing> {
    BOOL _cellImageHasBorderLine;
    BOOL _cellBadgeBackground;
    BOOL _headerBottomLine;
    NSString *_title;
    NSString *_schemaUrl;
    long long _oneLineUsersLimit;
    long long _twoLineUsersLimit;
    long long _moduleQuitUsers;
    id<AWELeftSideBarItemContext> _context;
    long long _cellHeight;
    long long _maxLineVisible;
    double _cellHorizontalPadding;
    double _cellHorizontalGap;
    double _cellTopPadding;
    double _cellBottomPadding;
    double _cellVerticalGap;
    double _cellImageWidth;
    double _cellImageTopPadding;
    double _cellImageCornerRadius;
    double _cellImageGapWidth;
    UIFont *_cellTitleFont;
    double _cellTitleWidth;
    double _cellBadgeSize;
    double _headerHeight;
    double _headerTitleFontSize;
    double _headerTitleHeight;
    double _headerTitleTopPadding;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) long long oneLineUsersLimit;
@property (nonatomic) long long twoLineUsersLimit;
@property (nonatomic) long long moduleQuitUsers;
@property (retain, nonatomic) id<AWELeftSideBarItemContext> context;
@property (nonatomic) long long cellHeight;
@property (nonatomic) long long maxLineVisible;
@property (nonatomic) double cellHorizontalPadding;
@property (nonatomic) double cellHorizontalGap;
@property (nonatomic) double cellTopPadding;
@property (nonatomic) double cellBottomPadding;
@property (nonatomic) double cellVerticalGap;
@property (nonatomic) double cellImageWidth;
@property (nonatomic) double cellImageTopPadding;
@property (nonatomic) double cellImageCornerRadius;
@property (nonatomic) double cellImageGapWidth;
@property (nonatomic) BOOL cellImageHasBorderLine;
@property (retain, nonatomic) UIFont *cellTitleFont;
@property (nonatomic) double cellTitleWidth;
@property (nonatomic) double cellBadgeSize;
@property (nonatomic) BOOL cellBadgeBackground;
@property (nonatomic) double headerHeight;
@property (nonatomic) BOOL headerBottomLine;
@property (nonatomic) double headerTitleFontSize;
@property (nonatomic) double headerTitleHeight;
@property (nonatomic) double headerTitleTopPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)schemaUrl;
- (void)setSchemaUrl:(id)arg0;
- (double)cellImageWidth;
- (double)cellImageCornerRadius;
- (BOOL)cellImageHasBorderLine;
- (double)cellImageGapWidth;
- (double)cellTitleWidth;
- (long long)maxLineVisible;
- (void)setMaxLineVisible:(long long)arg0;
- (double)cellHorizontalPadding;
- (void)setCellHorizontalPadding:(double)arg0;
- (double)cellHorizontalGap;
- (void)setCellHorizontalGap:(double)arg0;
- (double)cellTopPadding;
- (void)setCellTopPadding:(double)arg0;
- (double)cellBottomPadding;
- (void)setCellBottomPadding:(double)arg0;
- (double)cellVerticalGap;
- (void)setCellVerticalGap:(double)arg0;
- (void)setCellImageWidth:(double)arg0;
- (void)setCellImageCornerRadius:(double)arg0;
- (void)setCellImageGapWidth:(double)arg0;
- (void)setCellImageHasBorderLine:(BOOL)arg0;
- (void)setCellTitleFont:(id)arg0;
- (void)setCellTitleWidth:(double)arg0;
- (BOOL)headerBottomLine;
- (void)setHeaderBottomLine:(BOOL)arg0;
- (double)headerTitleFontSize;
- (void)setHeaderTitleFontSize:(double)arg0;
- (double)headerTitleHeight;
- (void)setHeaderTitleHeight:(double)arg0;
- (double)headerTitleTopPadding;
- (void)setHeaderTitleTopPadding:(double)arg0;
- (double)cellImageTopPadding;
- (BOOL)cellBadgeBackground;
- (double)cellBadgeSize;
- (long long)oneLineUsersLimit;
- (void)setOneLineUsersLimit:(long long)arg0;
- (long long)twoLineUsersLimit;
- (void)setTwoLineUsersLimit:(long long)arg0;
- (long long)moduleQuitUsers;
- (void)setModuleQuitUsers:(long long)arg0;
- (void)setCellImageTopPadding:(double)arg0;
- (void)setCellBadgeSize:(double)arg0;
- (void)setCellBadgeBackground:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)title;
- (id)context;
- (double)headerHeight;
- (void)setTitle:(id)arg0;
- (id)cellTitleFont;
- (void)setHeaderHeight:(double)arg0;
- (long long)cellHeight;
- (void)setCellHeight:(long long)arg0;

@end
