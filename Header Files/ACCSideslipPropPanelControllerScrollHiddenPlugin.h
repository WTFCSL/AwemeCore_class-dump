//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCRecorderSideslipViewContainerProtocol, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropService, ACCSideslipPropViewContainerProtocol;

@interface ACCSideslipPropPanelControllerScrollHiddenPlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol> {
    id<ACCSideslipPropPanelControllerProtocol> _controller;
    id<ACCSideslipPropViewContainerProtocol> _viewContainer;
    id<ACCRecorderSideslipViewContainerProtocol> _recorderSideslipViewContainer;
    id<ACCSideslipPropService> _sideslipPropService;
}

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCRecorderSideslipViewContainerProtocol> recorderSideslipViewContainer;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sideslipPropService;
- (void)setSideslipPropService:(id)arg0;
- (void)sideslipPropPickCollectionView:(id)arg0 willBeginScrollWithReason:(unsigned long long)arg1 scrollDirection:(unsigned long long)arg2;
- (void)sideslipPropPickCollectionView:(id)arg0 didEndScrollWithReason:(unsigned long long)arg1;
- (void)controllerViewDidLoad:(id)arg0;
- (void)p_bindService;
- (id)recorderSideslipViewContainer;
- (void)setRecorderSideslipViewContainer:(id)arg0;
- (void)p_showElements:(BOOL)arg0 amimated:(BOOL)arg1;
- (id)p_elementViews;
- (id)p_getColorsWithShow:(BOOL)arg0;
- (void)setController:(id)arg0;
- (void).cxx_destruct;
- (id)controller;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
