//
//     Generated by private class-dump
//

@class AWERVLVBasePanelViewModel, NSString;
@protocol AWERVLVFloatPanelProtocol;

@interface AWERVLVFloatPanelContainerViewController : AWERVMetaPanelViewController <UIGestureRecognizerDelegate> {
    AWERVLVBasePanelViewModel<AWERVLVFloatPanelProtocol> *_panelViewModel;
}

@property (retain, nonatomic) AWERVLVBasePanelViewModel<AWERVLVFloatPanelProtocol> *panelViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPanel:(id)arg0;
- (void)setPanelHeight:(double)arg0;
- (void)refreshModel:(id)arg0;
- (id)panelViewModel;
- (void)dismissPanelVCWithCompletion:(id /* block */)arg0;
- (id)panelContentView;
- (void)setPanelViewModel:(id)arg0;
- (void)removePanelViewModel;
- (void)floatPanelDidAppear;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)closeButtonTapped;

@end