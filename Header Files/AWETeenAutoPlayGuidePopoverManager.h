//
//     Generated by private class-dump
//

@class NSString, DUXPopover, UIView;

@interface AWETeenAutoPlayGuidePopoverManager : NSObject <AWEAlertProtocol, DUXPopoverDelegate> {
    BOOL _isPopoverShowing;
    BOOL _guidePopoverHasShown;
    DUXPopover *_guidePopover;
    UIView *_target;
    id /* block */ _onCloseAlert;
}

@property (retain, nonatomic) DUXPopover *guidePopover;
@property (nonatomic) BOOL guidePopoverHasShown;
@property (nonatomic) BOOL isPopoverShowing;
@property (weak, nonatomic) UIView *target;
@property (copy, nonatomic) id /* block */ onCloseAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (void)popoverDidDisappear:(id)arg0;
- (void)dismissPopoverIfNeeded;
- (void)loadGuidePopoverDataFromCache;
- (BOOL)isPopoverShowing;
- (id /* block */)onCloseAlert;
- (void)setOnCloseAlert:(id /* block */)arg0;
- (id)guidePopover;
- (void)setIsPopoverShowing:(BOOL)arg0;
- (void)setGuidePopoverHasShown:(BOOL)arg0;
- (BOOL)guidePopoverHasShown;
- (void)showTeenAutoPlayGuidePopover;
- (void)setGuidePopover:(id)arg0;
- (BOOL)p_checkGuidePopoverFreqControl;
- (void)p_updateAutoPlayGuidePopoverInfo;
- (void)tryToShowAutoPlayGuidePopoverWithTarget:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setTarget:(id)arg0;
- (id)target;

@end
