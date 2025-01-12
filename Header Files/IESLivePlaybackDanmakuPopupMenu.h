//
//     Generated by private class-dump
//

@class UIColor, NSArray, NSDictionary, UIView, NSMutableArray;
@protocol IESLivePlaybackDanmakuPopupMenuDelegate;

@interface IESLivePlaybackDanmakuPopupMenu : UIView {
    BOOL _visible;
    NSDictionary *_userInfo;
    UIColor *_popupColor;
    id<IESLivePlaybackDanmakuPopupMenuDelegate> _delegate;
    NSArray *_menuItems;
    unsigned long long _arrowDirection;
    UIView *_hitTransferView;
    UIView *_view;
    double _height;
    double _arrowSize;
    double _cornerRadius;
    NSMutableArray *_itemViews;
    NSMutableArray *_separators;
    unsigned long long _realArrowDirection;
    struct CGPoint { double x; double y; } _arrowPoint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _popupMenuInsets;
}

@property (copy, nonatomic) NSDictionary *userInfo;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) double height;
@property (nonatomic) struct CGPoint { double x; double y; } arrowPoint;
@property (nonatomic) double arrowSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } popupMenuInsets;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSMutableArray *separators;
@property (nonatomic) unsigned long long realArrowDirection;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (retain, nonatomic) UIColor *popupColor;
@property (weak, nonatomic) id<IESLivePlaybackDanmakuPopupMenuDelegate> delegate;
@property (copy, nonatomic) NSArray *menuItems;
@property (nonatomic) unsigned long long arrowDirection;
@property (weak, nonatomic) UIView *hitTransferView;

+ (id)danmakuPopupMenu;

- (struct CGPoint { double x0; double x1; })arrowPoint;
- (void)setArrowPoint:(struct CGPoint { double x0; double x1; })arg0;
- (double)arrowSize;
- (void)setArrowSize:(double)arg0;
- (id)popupImage;
- (id)hitTransferView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })popupMenuInsets;
- (void)setRealArrowDirection:(unsigned long long)arg0;
- (void)layoutItemViews;
- (void)layoutSeparatorLines;
- (void)calculateArrowPointAndMenuFrameWithTartgetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 targetView:(id)arg1;
- (void)showMenuFromView:(id)arg0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 userInfo:(id)arg2;
- (void)createItemViews;
- (void)createSeparatorLines;
- (unsigned long long)realArrowDirection;
- (void)arrowPath:(struct CGPath { } *)arg0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 arrowPoint:(struct CGPoint { double x0; double x1; })arg2 arrowSize:(double)arg3 arrowUp:(BOOL)arg4;
- (void)bodyPath:(struct CGPath { } *)arg0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 cornerRadius:(double)arg2;
- (id)popupColor;
- (void)setPopupColor:(id)arg0;
- (void)setHitTransferView:(id)arg0;
- (void)setPopupMenuInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRect;
- (void)hideMenu;
- (unsigned long long)arrowDirection;
- (void)showMenuFromView:(id)arg0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void).cxx_destruct;
- (double)height;
- (double)cornerRadius;
- (void)setUserInfo:(id)arg0;
- (id)menuItems;
- (void)setView:(id)arg0;
- (id)delegate;
- (id)userInfo;
- (void)setHeight:(double)arg0;
- (void)setDelegate:(id)arg0;
- (void)setMenuItems:(id)arg0;
- (void)setCornerRadius:(double)arg0;
- (id)view;
- (void)setArrowDirection:(unsigned long long)arg0;
- (BOOL)isVisible;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setVisible:(BOOL)arg0;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)separators;
- (void)setSeparators:(id)arg0;
- (id)itemViews;
- (void)setItemViews:(id)arg0;

@end
