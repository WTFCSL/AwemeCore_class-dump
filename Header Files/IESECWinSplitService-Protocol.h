//
//     Generated by private class-dump
//

@class UIView;

@protocol IESECWinSplitService <NSObject>

@property (nonatomic) unsigned long long screenState;
@property (weak, nonatomic) UIView *mainDragView;
@property (readonly, nonatomic) double offsetY;
@property (readonly, nonatomic) double scrollRatio;
@property (readonly, nonatomic) double splitScreenModeScrollModuleMinY;
@property (readonly, nonatomic) double fullScreenModeScrollModuleMinY;
@property (readonly, nonatomic) double scrollDistance;

- (void)registerMoveView:(id)arg0;
- (void)registerViewFrames;
- (void)registerOpaqueView:(id)arg0;
- (void)registerReverseOpaqueView:(id)arg0;
- (void)scrollToFull;
- (BOOL)isHideInCurrentScreenState:(id)arg0;
- (void)startWork;

@optional

- (void)registerCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withSectionID:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFirstSplitCellFrameWithSectionID:(id)arg0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (void)registerOpaqueObject:(id)arg0;
- (void)registerReverseOpaqueObject:(id)arg0;
- (void)registerMoveObject:(id)arg0;
- (void)setSplitScreenModeScrollModuleMinY:(double)arg0;
- (void)setFullScreenModeScrollModuleMinY:(double)arg0;
- (void)updateStickyOfObjects;
- (unsigned long long)getSplitConfigWithHybridSectionID:(id)arg0;
- (id)mainDragView;
- (void)setMainDragView:(id)arg0;
- (double)scrollRatio;
- (double)splitScreenModeScrollModuleMinY;
- (double)fullScreenModeScrollModuleMinY;
- (double)scrollDistance;
- (double)offsetY;
- (unsigned long long)screenState;
- (void)setScreenState:(unsigned long long)arg0;

@end
