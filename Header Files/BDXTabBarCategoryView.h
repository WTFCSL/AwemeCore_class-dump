//
//     Generated by private class-dump
//

@class NSString, BDXLynxTabBarPro;

@interface BDXTabBarCategoryView : BDXCategoryIndicatorView <BDXTabbarItemProViewDelegate> {
    BDXLynxTabBarPro *_lynxTabbar;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastRect;
    struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } _borderRadii;
}

@property (nonatomic) struct { struct _LynxBorderUnitValue { double val; long long unit; } topLeftX; struct _LynxBorderUnitValue { double val; long long unit; } topLeftY; struct _LynxBorderUnitValue { double val; long long unit; } topRightX; struct _LynxBorderUnitValue { double val; long long unit; } topRightY; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftX; struct _LynxBorderUnitValue { double val; long long unit; } bottomLeftY; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightX; struct _LynxBorderUnitValue { double val; long long unit; } bottomRightY; } borderRadii;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastRect;
@property (weak, nonatomic) BDXLynxTabBarPro *lynxTabbar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshDataSource;
- (void)refreshCellModel:(id)arg0 index:(long long)arg1;
- (BOOL)selectCellAtIndex:(long long)arg0 selectedType:(unsigned long long)arg1;
- (Class)preferredCellClass;
- (double)preferredCellWidthAtIndex:(long long)arg0;
- (void)widthDidChanged:(id)arg0;
- (void)setLynxTabbar:(id)arg0;
- (id)lynxTabbar;
- (void).cxx_destruct;
- (void)insertSubview:(id)arg0 atIndex:(long long)arg1;
- (void)layoutSubviews;
- (struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; })borderRadii;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastRect;
- (void)setLastRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderRadii:(struct { struct _LynxBorderUnitValue { double x0; long long x1; } x0; struct _LynxBorderUnitValue { double x0; long long x1; } x1; struct _LynxBorderUnitValue { double x0; long long x1; } x2; struct _LynxBorderUnitValue { double x0; long long x1; } x3; struct _LynxBorderUnitValue { double x0; long long x1; } x4; struct _LynxBorderUnitValue { double x0; long long x1; } x5; struct _LynxBorderUnitValue { double x0; long long x1; } x6; struct _LynxBorderUnitValue { double x0; long long x1; } x7; })arg0;

@end
