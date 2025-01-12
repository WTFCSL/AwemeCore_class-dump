//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol ACCSideslipPropViewContainerProtocol, IESServiceProvider;

@interface ACCSideslipPropPanelEditorUIConfigImpl : NSObject <ACCSideslipPropPanelUIConfigService> {
    id<IESServiceProvider> _sideslipServiceProvider;
    id<ACCSideslipPropViewContainerProtocol> _viewContainer;
    AWEVideoPublishViewModel *_repository;
}

@property (weak, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceProvider:(id)arg0 repository:(id)arg1;
- (id)sideslipServiceProvider;
- (void)setSideslipServiceProvider:(id)arg0;
- (BOOL)enableApplyPropWhileSliping;
- (void)setupBaseView;
- (void)layoutBaseView;
- (BOOL)enableSideslipPropPanelPanAreaOpt;
- (struct CGSize { double x0; double x1; })layoutItemSize;
- (double)layoutIndicatorItemRadius;
- (BOOL)enableLoadMoreButton;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
