//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCTextLoadingViewProtcol;

@interface ACCEditorEffectMessageComponent : ACCFeatureComponent <ACCEditPreviewMessageProtocolD> {
    id<ACCEditServiceProtocol> _editService;
    id<ACCEditViewContainer> _viewContainer;
    UIView<ACCTextLoadingViewProtcol> *_loadingView;
}

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)editService;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (void)handleJson:(id)arg0 taskId:(long long)arg1;
- (void)handleEffectMessage:(id)arg0;
- (void)handleToastWithReceiveBody:(id)arg0 taskId:(long long)arg1;
- (void).cxx_destruct;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
