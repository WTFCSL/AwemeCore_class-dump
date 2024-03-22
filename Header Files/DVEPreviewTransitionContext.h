//
//     Generated by private class-dump
//

@class UIViewController;
@protocol DVEPreviewTransitionContextProvider;

@interface DVEPreviewTransitionContext : NSObject {
    unsigned long long _triggerDirection;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    id _fromContextProvider;
    id _toContextProvider;
    id<DVEPreviewTransitionContextProvider> _contextProvider;
}

@property (nonatomic) unsigned long long triggerDirection;
@property (retain, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) UIViewController *toViewController;
@property (retain, nonatomic) id fromContextProvider;
@property (retain, nonatomic) id toContextProvider;
@property (retain, nonatomic) id<DVEPreviewTransitionContextProvider> contextProvider;

- (unsigned long long)triggerDirection;
- (id)toContextProvider;
- (void)setTriggerDirection:(unsigned long long)arg0;
- (void)setFromViewController:(id)arg0;
- (void)setToViewController:(id)arg0;
- (id)fromContextProvider;
- (void)setFromContextProvider:(id)arg0;
- (void)setToContextProvider:(id)arg0;
- (id)toViewController;
- (void).cxx_destruct;
- (id)fromViewController;
- (id)contextProvider;
- (void)setContextProvider:(id)arg0;

@end
