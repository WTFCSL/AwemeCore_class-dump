//
//     Generated by private class-dump
//

@class UIView, NSString, NSHashTable;

@interface ACCPanelViewController : NSObject <ACCPanelViewController> {
    BOOL _isShowingPanel;
    NSHashTable *_observers;
    NSHashTable *_animators;
    UIView *_containerView;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSHashTable *animators;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isShowingPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShowingPanel;
- (void)removeAllObserver;
- (id)animators;
- (void)setAnimators:(id)arg0;
- (void)animatePanelView:(id)arg0 withAnimator:(id)arg1;
- (void)setIsShowingPanel:(BOOL)arg0;
- (void)showPanelView:(id)arg0 duration:(double)arg1;
- (void)dismissPanelView:(id)arg0 duration:(double)arg1;
- (void)dismissPanelView:(id)arg0;
- (void)notifyObeserverWillShowPanelView:(id)arg0;
- (void)notifyObeserverWillDismissPanelView:(id)arg0;
- (void)notifyObeserverDidShowPanelView:(id)arg0;
- (void)notifyObeserverDidDismissPanelView:(id)arg0;
- (void)showPanelView:(id)arg0;
- (void)unregisterObserver:(id)arg0;
- (void).cxx_destruct;
- (id)observers;
- (void)setContainerView:(id)arg0;
- (void)registerObserver:(id)arg0;
- (id)initWithContainerView:(id)arg0;
- (void)setObservers:(id)arg0;
- (id)containerView;

@end
