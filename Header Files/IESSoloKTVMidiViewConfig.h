//
//     Generated by private class-dump
//

@class UIColor, NSDictionary;

@interface IESSoloKTVMidiViewConfig : NSObject {
    UIColor *_bgColor;
    UIColor *_fgColor;
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    double _midiViewHeight;
    double _scoreViewHeight;
    double _viewHeight;
    double _rowHeight;
    double _focusHeight;
    double _corner;
    double _secondWidth;
    double _topBottomMargin;
    double _startMargin;
    double _scoreTextSize;
    double _pitchABS;
    NSDictionary *_scoreAttribute;
    NSDictionary *_scoreAttributePX;
    struct CGSize { double width; double height; } _arrowSize;
    struct CGSize { double width; double height; } _arrowTailSize;
    struct CGSize { double width; double height; } _levelSize;
    struct CGSize { double width; double height; } _scoreBottomSize;
    struct CGSize { double width; double height; } _levelCountSize;
}

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *fgColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) double midiViewHeight;
@property (nonatomic) double scoreViewHeight;
@property (nonatomic) double viewHeight;
@property (nonatomic) double rowHeight;
@property (nonatomic) double focusHeight;
@property (nonatomic) double corner;
@property (nonatomic) double secondWidth;
@property (nonatomic) double topBottomMargin;
@property (nonatomic) double startMargin;
@property (nonatomic) double scoreTextSize;
@property (nonatomic) double pitchABS;
@property (nonatomic) struct CGSize { double width; double height; } arrowSize;
@property (nonatomic) struct CGSize { double width; double height; } arrowTailSize;
@property (nonatomic) struct CGSize { double width; double height; } levelSize;
@property (nonatomic) struct CGSize { double width; double height; } scoreBottomSize;
@property (nonatomic) struct CGSize { double width; double height; } levelCountSize;
@property (retain, nonatomic) NSDictionary *scoreAttribute;
@property (retain, nonatomic) NSDictionary *scoreAttributePX;

+ (id)soloKTVMidiConfig;

- (void)setStartMargin:(double)arg0;
- (double)startMargin;
- (void)setViewHeight:(double)arg0;
- (struct CGSize { double x0; double x1; })arrowSize;
- (void)setArrowSize:(struct CGSize { double x0; double x1; })arg0;
- (double)midiViewHeight;
- (void)setMidiViewHeight:(double)arg0;
- (void)setScoreViewHeight:(double)arg0;
- (void)setFocusHeight:(double)arg0;
- (double)secondWidth;
- (void)setSecondWidth:(double)arg0;
- (void)setTopBottomMargin:(double)arg0;
- (void)setScoreTextSize:(double)arg0;
- (void)setArrowTailSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setLevelSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setScoreBottomSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setLevelCountSize:(struct CGSize { double x0; double x1; })arg0;
- (void)calcTextAttr:(double)arg0;
- (double)scoreViewHeight;
- (double)topBottomMargin;
- (double)pitchABS;
- (id)getStartColor;
- (id)getEndColor;
- (double)focusHeight;
- (struct CGSize { double x0; double x1; })arrowTailSize;
- (struct CGSize { double x0; double x1; })scoreBottomSize;
- (id)scoreAttributePX;
- (struct CGSize { double x0; double x1; })levelSize;
- (struct CGSize { double x0; double x1; })levelCountSize;
- (void)setPitchABS:(double)arg0;
- (double)scoreTextSize;
- (void)setScoreAttribute:(id)arg0;
- (void)setScoreAttributePX:(id)arg0;
- (id)scoreAttribute;
- (void).cxx_destruct;
- (double)rowHeight;
- (double)corner;
- (void)setRowHeight:(double)arg0;
- (void)setGradientStartColor:(id)arg0;
- (void)setGradientEndColor:(id)arg0;
- (id)gradientStartColor;
- (id)gradientEndColor;
- (id)bgColor;
- (id)fgColor;
- (void)setBgColor:(id)arg0;
- (void)setFgColor:(id)arg0;
- (double)viewHeight;
- (void)setCorner:(double)arg0;

@end
