//
//     Generated by private class-dump
//

@class UIColor;

@interface IESLivePlayerScaleConfig : NSObject {
    BOOL _needRightPanelMask;
    BOOL _needTopSafeArea;
    BOOL _needLeftTopAndBottomCorner;
    BOOL _acceptCloseFromPuzzleEnable;
    UIColor *_rightPanelBackgroundColor;
    double _panelCustomWidth;
    double _showAnimationDuration;
    double _closeAnimationDuration;
}

@property (nonatomic) BOOL needRightPanelMask;
@property (nonatomic) BOOL needTopSafeArea;
@property (retain, nonatomic) UIColor *rightPanelBackgroundColor;
@property (nonatomic) BOOL needLeftTopAndBottomCorner;
@property (nonatomic) double panelCustomWidth;
@property (nonatomic) double showAnimationDuration;
@property (nonatomic) double closeAnimationDuration;
@property (nonatomic) BOOL acceptCloseFromPuzzleEnable;

- (void)setNeedRightPanelMask:(BOOL)arg0;
- (void)setPanelCustomWidth:(double)arg0;
- (void)setShowAnimationDuration:(double)arg0;
- (void)setCloseAnimationDuration:(double)arg0;
- (void)setAcceptCloseFromPuzzleEnable:(BOOL)arg0;
- (BOOL)needRightPanelMask;
- (BOOL)needTopSafeArea;
- (void)setNeedTopSafeArea:(BOOL)arg0;
- (id)rightPanelBackgroundColor;
- (void)setRightPanelBackgroundColor:(id)arg0;
- (BOOL)needLeftTopAndBottomCorner;
- (void)setNeedLeftTopAndBottomCorner:(BOOL)arg0;
- (double)panelCustomWidth;
- (double)showAnimationDuration;
- (double)closeAnimationDuration;
- (BOOL)acceptCloseFromPuzzleEnable;
- (id)init;
- (void).cxx_destruct;

@end
