//
//     Generated by private class-dump
//

@class NSString, AWESearchAutoPlayHandler, UIView;
@protocol AWESearchAutoPlayCardProtocol;

@interface AWESearchGeneralSearchWaterfallFilterPlayRule : NSObject <AWESearchAutoPlayRuleProtocol> {
    BOOL _disableAutoPlay;
    BOOL _isActive;
    AWESearchAutoPlayHandler *_handler;
    double _focusAreaRatio;
    double _activeRatio;
    double _inactiveRatio;
    double _outOfPageInactiveRatio;
    double _balance;
    double _singleColumnCardActiveRatio;
    UIView<AWESearchAutoPlayCardProtocol> *_singleCard;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerActiveRect;
}

@property (nonatomic) double focusAreaRatio;
@property (nonatomic) double activeRatio;
@property (nonatomic) double inactiveRatio;
@property (nonatomic) double outOfPageInactiveRatio;
@property (nonatomic) BOOL disableAutoPlay;
@property (nonatomic) double balance;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerActiveRect;
@property (nonatomic) double singleColumnCardActiveRatio;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *singleCard;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActiveRatio:(double)arg0;
- (id)getAutoPlayViewFromViews:(id)arg0 inContainer:(id)arg1 contentOffset:(struct CGPoint { double x0; double x1; })arg2 directionPoint:(struct CGPoint { double x0; double x1; })arg3 speedPoint:(struct CGPoint { double x0; double x1; })arg4;
- (double)activeRatio;
- (void)setOutOfPageInactiveRatio:(double)arg0;
- (double)outOfPageInactiveRatio;
- (id)singleCard;
- (void)setSingleCard:(id)arg0;
- (BOOL)p_isCard1:(id)arg0 equalToCard2:(id)arg1;
- (void)setFocusAreaRatio:(double)arg0;
- (void)setInactiveRatio:(double)arg0;
- (void)setSingleColumnCardActiveRatio:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateActiveRectWithContainer:(id)arg0;
- (void)setContainerActiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)singleColumnCardActiveRatio;
- (double)calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerActiveRect;
- (double)inactiveRatio;
- (double)focusAreaRatio;
- (id)init;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setBalance:(double)arg0;
- (void)applicationWillResignActive;
- (void)setHandler:(id)arg0;
- (BOOL)isActive;
- (id)handler;
- (double)balance;
- (void)applicationDidBecomeActive;
- (BOOL)disableAutoPlay;
- (void)setDisableAutoPlay:(BOOL)arg0;
- (unsigned long long)ruleType;
- (void)addObservers;

@end
