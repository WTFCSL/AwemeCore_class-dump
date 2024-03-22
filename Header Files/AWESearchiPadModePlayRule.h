//
//     Generated by private class-dump
//

@class NSString, AWESearchAutoPlayHandler, UIView;
@protocol AWESearchAutoPlayCardProtocol;

@interface AWESearchiPadModePlayRule : NSObject <AWESearchAutoPlayRuleProtocol> {
    BOOL _shouldFilterStaticCard;
    BOOL _needCheckPlayIndex;
    BOOL _isResginActive;
    AWESearchAutoPlayHandler *handler;
    double _activeRectTop;
    double _activeRectBottom;
    double _shouldNotActiveHeight;
    UIView<AWESearchAutoPlayCardProtocol> *_currentActiveViewInWaterFallLayou;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _activeRect;
}

@property (nonatomic) BOOL isResginActive;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double activeRectTop;
@property (nonatomic) double activeRectBottom;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (nonatomic) BOOL needCheckPlayIndex;
@property (weak, nonatomic) UIView<AWESearchAutoPlayCardProtocol> *currentActiveViewInWaterFallLayou;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)fetchActiveRectTop;
+ (double)fetchActiveRectBottom;
+ (double)fetchShouldNotActiveHeight;
+ (BOOL)fetchShouldFilterStaticCard;
+ (BOOL)enableFluencyOptimize;

- (void)setActiveRectTop:(double)arg0;
- (void)setActiveRectBottom:(double)arg0;
- (void)setShouldNotActiveHeight:(double)arg0;
- (void)setShouldFilterStaticCard:(BOOL)arg0;
- (id)getAutoPlayViewFromViews:(id)arg0 inContainer:(id)arg1 contentOffset:(struct CGPoint { double x0; double x1; })arg2 directionPoint:(struct CGPoint { double x0; double x1; })arg3 speedPoint:(struct CGPoint { double x0; double x1; })arg4;
- (double)shouldNotActiveHeight;
- (BOOL)shouldFilterStaticCard;
- (double)activeRectTop;
- (double)activeRectBottom;
- (void)_resignCard:(id)arg0;
- (double)_calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)p_enableFluencyOptimize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateActiveRectWithContainer:(id)arg0;
- (void)setIsResginActive:(BOOL)arg0;
- (BOOL)isResginActive;
- (double)_calculateRelativeCenterX:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)needCheckPlayIndex;
- (id)currentActiveViewInWaterFallLayou;
- (void)setNeedCheckPlayIndex:(BOOL)arg0;
- (void)setCurrentActiveViewInWaterFallLayou:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (void)setHandler:(id)arg0;
- (id)handler;
- (void)dealloc;
- (void)applicationDidBecomeActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeRect;
- (void)setActiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)ruleType;
- (void)addObservers;

@end
