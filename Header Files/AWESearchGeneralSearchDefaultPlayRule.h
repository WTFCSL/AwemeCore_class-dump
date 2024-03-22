//
//     Generated by private class-dump
//

@class NSString, AWESearchAutoPlayHandler;

@interface AWESearchGeneralSearchDefaultPlayRule : NSObject <AWESearchAutoPlayRuleProtocol> {
    BOOL _shouldFilterStaticCard;
    AWESearchAutoPlayHandler *_handler;
    double _activeRectTop;
    double _activeRectBottom;
    double _shouldNotActiveHeight;
    double _flingSpeedLimit;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _activeRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) double activeRectTop;
@property (nonatomic) double activeRectBottom;
@property (nonatomic) double shouldNotActiveHeight;
@property (nonatomic) BOOL shouldFilterStaticCard;
@property (nonatomic) double flingSpeedLimit;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActiveRectTop:(double)arg0;
- (void)setActiveRectBottom:(double)arg0;
- (void)setShouldNotActiveHeight:(double)arg0;
- (void)setShouldFilterStaticCard:(BOOL)arg0;
- (id)getAutoPlayViewFromViews:(id)arg0 inContainer:(id)arg1 contentOffset:(struct CGPoint { double x0; double x1; })arg2 directionPoint:(struct CGPoint { double x0; double x1; })arg3 speedPoint:(struct CGPoint { double x0; double x1; })arg4;
- (double)shouldNotActiveHeight;
- (BOOL)shouldFilterStaticCard;
- (double)activeRectTop;
- (double)activeRectBottom;
- (double)_calculateRelativeCenterY:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFlingSpeedLimit:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateActiveRectWithContainer:(id)arg0;
- (double)flingSpeedLimit;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (void)setHandler:(id)arg0;
- (id)handler;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })activeRect;
- (void)setActiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)ruleType;

@end
