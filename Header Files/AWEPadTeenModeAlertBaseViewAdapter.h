//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPadTeenModeAlertBaseViewAdapter : NSObject <AWEPadTeenModeAlertBaseViewAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)performSetupUI;
- (void)performDismissByDragging:(BOOL)arg0;
- (void)performSwipeToDismiss:(id)arg0 swipeOffset:(double)arg1;
- (void)performContentViewDidLayoutSubviews;
- (void)updateSwipeOffsetThreshold:(id /* block */)arg0;
- (id)weakTarget;

@end