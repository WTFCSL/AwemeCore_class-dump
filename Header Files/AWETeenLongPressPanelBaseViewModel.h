//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImage, UIView, AWETeenLongPressPanelContext;
@protocol AWETeenLongPressPanelDelegate;

@interface AWETeenLongPressPanelBaseViewModel : NSObject {
    BOOL _showSelected;
    long long _actionType;
    NSString *_describeString;
    NSString *_duxIconName;
    UIColor *_duxIconColor;
    UIImage *_iconImage;
    AWETeenLongPressPanelContext *_context;
    NSString *_describeSelectedString;
    NSString *_duxIconSelectedName;
    UIColor *_duxIconSelectedColor;
    id /* block */ _action;
    UIView *_rightSubview;
    double _rightPadding;
    id /* block */ _willAppearBlock;
    id<AWETeenLongPressPanelDelegate> _delegate;
    struct CGSize { double width; double height; } _rightSubviewSize;
}

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSString *describeString;
@property (retain, nonatomic) NSString *duxIconName;
@property (retain, nonatomic) UIColor *duxIconColor;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) AWETeenLongPressPanelContext *context;
@property (nonatomic) BOOL showSelected;
@property (retain, nonatomic) NSString *describeSelectedString;
@property (retain, nonatomic) NSString *duxIconSelectedName;
@property (retain, nonatomic) UIColor *duxIconSelectedColor;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIView *rightSubview;
@property (nonatomic) struct CGSize { double width; double height; } rightSubviewSize;
@property (nonatomic) double rightPadding;
@property (copy, nonatomic) id /* block */ willAppearBlock;
@property (weak, nonatomic) id<AWETeenLongPressPanelDelegate> delegate;

- (void)dismissPanel;
- (void)setRightPadding:(double)arg0;
- (id /* block */)willAppearBlock;
- (void)setWillAppearBlock:(id /* block */)arg0;
- (void)setDescribeString:(id)arg0;
- (void)setDuxIconName:(id)arg0;
- (id)getCommonSwitch;
- (void)setRightSubview:(id)arg0;
- (id)getCommonSegmentWithItems:(id)arg0 delegate:(id)arg1;
- (id)describeString;
- (id)duxIconName;
- (id)duxIconColor;
- (void)setDuxIconColor:(id)arg0;
- (BOOL)showSelected;
- (void)setShowSelected:(BOOL)arg0;
- (id)describeSelectedString;
- (void)setDescribeSelectedString:(id)arg0;
- (id)duxIconSelectedName;
- (void)setDuxIconSelectedName:(id)arg0;
- (id)duxIconSelectedColor;
- (void)setDuxIconSelectedColor:(id)arg0;
- (id)rightSubview;
- (struct CGSize { double x0; double x1; })rightSubviewSize;
- (void)setRightSubviewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setActionType:(long long)arg0;
- (id)iconImage;
- (long long)actionType;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;
- (void)setDelegate:(id)arg0;
- (void)setIconImage:(id)arg0;
- (double)rightPadding;

@end
