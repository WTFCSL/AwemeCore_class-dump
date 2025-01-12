//
//     Generated by private class-dump
//

@class NSObject, DUXPopover, NSString, UILabel, UIView, UIButton;
@protocol OS_dispatch_semaphore, ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropPanelEditorEventDispatchServiceProtocol, ACCSideslipPropViewContainerProtocol, ACCSideslipPropPanelFocusEditorHandleServiceProtocol;

@interface ACCSideslipPropPanelControllerEditorCancelPlugin : NSObject <ACCSideslipPropServiceSubscriber, AWEStickerPickerControllerPluginProtocol> {
    BOOL _lastFocusUnavailable;
    BOOL _waitPanelAnimate;
    id<ACCSideslipPropPanelControllerProtocol> _controller;
    id<ACCSideslipPropViewContainerProtocol> _viewContainer;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCSideslipPropPanelService> _sideslipPropPanelService;
    id<ACCSideslipPropPanelFocusEditorHandleServiceProtocol> _sideslipPropPanelFocusHandleService;
    id<ACCSideslipPropPanelEditorEventDispatchServiceProtocol> _panelEditorEventDispatchService;
    UIView *_cancelView;
    UILabel *_nameLabel;
    UIButton *_cancelButton;
    DUXPopover *_popoverView;
    NSObject<OS_dispatch_semaphore> *_waitPanelAnimateSemaphore;
}

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelFocusEditorHandleServiceProtocol> sideslipPropPanelFocusHandleService;
@property (weak, nonatomic) id<ACCSideslipPropPanelEditorEventDispatchServiceProtocol> panelEditorEventDispatchService;
@property (retain, nonatomic) UIView *cancelView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) DUXPopover *popoverView;
@property (nonatomic) BOOL lastFocusUnavailable;
@property (nonatomic) BOOL waitPanelAnimate;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitPanelAnimateSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cancelView;
- (void)setCancelView:(id)arg0;
- (void)showDebugView;
- (void)setPopoverView:(id)arg0;
- (id)sideslipPropService;
- (void)setSideslipPropService:(id)arg0;
- (id)sideslipPropPanelService;
- (void)setSideslipPropPanelService:(id)arg0;
- (void)sideslipPropService:(id)arg0 willChangeShowState:(unsigned long long)arg1;
- (void)sideslipPropService:(id)arg0 didChangeShowState:(unsigned long long)arg1;
- (id)sideslipPropPanelFocusHandleService;
- (void)setSideslipPropPanelFocusHandleService:(id)arg0;
- (void)controllerViewDidLoad:(id)arg0;
- (void)bindFocusCellModel:(id)arg0;
- (id)panelEditorEventDispatchService;
- (void)setPanelEditorEventDispatchService:(id)arg0;
- (void)setWaitPanelAnimateSemaphore:(id)arg0;
- (void)setLastFocusUnavailable:(BOOL)arg0;
- (BOOL)lastFocusUnavailable;
- (id)nameLabelTextWithDataModel:(id)arg0;
- (void)setWaitPanelAnimate:(BOOL)arg0;
- (id)waitPanelAnimateSemaphore;
- (BOOL)waitPanelAnimate;
- (void)showUnavailablePopoverWithHideCompletion:(id /* block */)arg0;
- (void)setController:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (id)popoverView;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)controller;
- (id)nameLabel;
- (void)cancelButtonClicked:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
