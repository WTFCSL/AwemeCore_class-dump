//
//     Generated by private class-dump
//

@class NSString, NSNumber, UIView;
@protocol AWEPOIDetailInfoViewModelProtocol;

@interface AWEPOIDetailLayoutAttribute : NSObject {
    BOOL _needUpdate;
    BOOL _isInitialized;
    NSString *_identifier;
    NSNumber *_dynamicId;
    long long _showDelay;
    double _cardCornerRadius;
    unsigned long long _showType;
    UIView *_layoutContainer;
    id<AWEPOIDetailInfoViewModelProtocol> _viewModel;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _itemMargin;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _itemPadding;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *dynamicId;
@property (nonatomic) long long showDelay;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemPadding;
@property (nonatomic) double cardCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) unsigned long long showType;
@property (retain, nonatomic) UIView *layoutContainer;
@property (retain, nonatomic) id<AWEPOIDetailInfoViewModelProtocol> viewModel;
@property (nonatomic) BOOL isInitialized;

- (BOOL)needUpdate;
- (void)setNeedUpdate:(BOOL)arg0;
- (void)setShowDelay:(long long)arg0;
- (long long)showDelay;
- (void)setItemMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })itemMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })itemPadding;
- (void)setItemPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)layoutContainer;
- (void)setLayoutContainer:(id)arg0;
- (id)dynamicId;
- (void)setDynamicId:(id)arg0;
- (BOOL)p_shouldExpose;
- (void)p_handleExposeWithShowType:(unsigned long long)arg0;
- (void)onPartlyDisappear;
- (void)onCompleteAppear;
- (BOOL)isInitialized;
- (void).cxx_destruct;
- (id)identifier;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setIdentifier:(id)arg0;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg0;
- (void)onDisappear;
- (void)onAppear;
- (double)cardCornerRadius;
- (void)setCardCornerRadius:(double)arg0;
- (void)setIsInitialized:(BOOL)arg0;

@end
