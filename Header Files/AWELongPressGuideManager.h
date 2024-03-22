//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface AWELongPressGuideManager : NSObject <UIGestureRecognizerDelegate, AWELongPressGuideManagerProtocol> {
    UIView *_guideView;
    id /* block */ _finishBlock;
}

@property (retain, nonatomic) UIView *guideView;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showLongPressGuideIfNeededWithAweme:(id)arg0 finishBlock:(id /* block */)arg1;
- (void)releaseGuideView;
- (void)longPressDetected:(id)arg0;
- (void)panDetected:(id)arg0;
- (void)tapDetected:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;
- (void)setGuideView:(id)arg0;
- (id)guideView;

@end