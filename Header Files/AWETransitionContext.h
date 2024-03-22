//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWETransitionContextProvider;

@interface AWETransitionContext : NSObject {
    unsigned long long _type;
    unsigned long long _interaction;
    unsigned long long _triggerDirection;
    unsigned long long _pinchZoomType;
    double _percentCompleteForPercentageDriven;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    id _fromContextProvider;
    id _toContextProvider;
    id<AWETransitionContextProvider> _contextProvider;
    struct CGPoint { double x; double y; } _currentPanLocation;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long interaction;
@property (nonatomic) unsigned long long triggerDirection;
@property (nonatomic) unsigned long long pinchZoomType;
@property (nonatomic) struct CGPoint { double x; double y; } currentPanLocation;
@property (nonatomic) double percentCompleteForPercentageDriven;
@property (retain, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) UIViewController *toViewController;
@property (retain, nonatomic) id fromContextProvider;
@property (retain, nonatomic) id toContextProvider;
@property (retain, nonatomic) id<AWETransitionContextProvider> contextProvider;

- (unsigned long long)triggerDirection;
- (double)percentCompleteForPercentageDriven;
- (id)toContextProvider;
- (void)setTriggerDirection:(unsigned long long)arg0;
- (void)setFromViewController:(id)arg0;
- (void)setToViewController:(id)arg0;
- (id)fromContextProvider;
- (void)setFromContextProvider:(id)arg0;
- (void)setToContextProvider:(id)arg0;
- (struct CGPoint { double x0; double x1; })currentPanLocation;
- (unsigned long long)pinchZoomType;
- (void)setPinchZoomType:(unsigned long long)arg0;
- (void)setCurrentPanLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)setPercentCompleteForPercentageDriven:(double)arg0;
- (unsigned long long)interaction;
- (id)toViewController;
- (void).cxx_destruct;
- (id)fromViewController;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setInteraction:(unsigned long long)arg0;
- (id)contextProvider;
- (void)setContextProvider:(id)arg0;

@end
