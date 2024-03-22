//
//     Generated by private class-dump
//

@class UIImage, UIFont, UIColor;

@interface AWEBarPanelDetailBottomUIConfig : NSObject {
    double _horizontalMargin;
    double _barHeight;
    UIImage *_icon;
    double _iconLeft;
    double _iconCenterYOffset;
    UIFont *_contentFont;
    UIColor *_contentTextColor;
    double _contentLeftToIconMargin;
    double _contentCenterYOffset;
    double _contentRightToArrowMargin;
    UIImage *_arrow;
    double _arrowRightMargin;
    double _arrowCenterYOffset;
    struct CGSize { double width; double height; } _iconSize;
    struct CGSize { double width; double height; } _arrowSize;
}

@property (nonatomic) double horizontalMargin;
@property (nonatomic) double barHeight;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) double iconLeft;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double iconCenterYOffset;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIColor *contentTextColor;
@property (nonatomic) double contentLeftToIconMargin;
@property (nonatomic) double contentCenterYOffset;
@property (nonatomic) double contentRightToArrowMargin;
@property (retain, nonatomic) UIImage *arrow;
@property (nonatomic) double arrowRightMargin;
@property (nonatomic) struct CGSize { double width; double height; } arrowSize;
@property (nonatomic) double arrowCenterYOffset;

+ (id)defaultWatchLaterConfig;

- (id)contentTextColor;
- (void)setContentTextColor:(id)arg0;
- (double)iconLeft;
- (void)setIconLeft:(double)arg0;
- (void)setArrow:(id)arg0;
- (id)arrow;
- (double)iconCenterYOffset;
- (double)contentCenterYOffset;
- (double)contentRightToArrowMargin;
- (double)arrowRightMargin;
- (double)arrowCenterYOffset;
- (struct CGSize { double x0; double x1; })arrowSize;
- (id)contentFont;
- (void)setIconCenterYOffset:(double)arg0;
- (void)setContentFont:(id)arg0;
- (double)contentLeftToIconMargin;
- (void)setContentLeftToIconMargin:(double)arg0;
- (void)setContentCenterYOffset:(double)arg0;
- (void)setContentRightToArrowMargin:(double)arg0;
- (void)setArrowRightMargin:(double)arg0;
- (void)setArrowSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setArrowCenterYOffset:(double)arg0;
- (void)setIconSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)icon;
- (id)init;
- (void).cxx_destruct;
- (void)setIcon:(id)arg0;
- (void)setBarHeight:(double)arg0;
- (double)barHeight;
- (double)horizontalMargin;
- (void)setHorizontalMargin:(double)arg0;

@end