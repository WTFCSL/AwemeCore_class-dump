//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSString, NSTimer, AWEInAppMessageView;

@interface AWEInAppMessage : NSObject <AWEInAppMessageViewDelegate> {
    NSRecursiveLock *_lock;
    AWEInAppMessageView *_currentView;
    NSTimer *_timer;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) AWEInAppMessageView *currentView;
@property (weak, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showOnView:(id)arg0 config:(id)arg1 showBlock:(id /* block */)arg2 actionBlock:(id /* block */)arg3 dismissBlock:(id /* block */)arg4;
+ (void)show:(id)arg0 showBlock:(id /* block */)arg1 actionBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
+ (id)sharedInstance;
+ (void)dismiss;

- (void)didEndDragging:(BOOL)arg0;
- (void)timerFired:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (id)lock;
- (void)setLock:(id)arg0;
- (id)currentView;
- (void)setCurrentView:(id)arg0;

@end
