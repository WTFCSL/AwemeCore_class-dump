//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCSideslipPropViewContainerProtocol, IESServiceProvider;

@interface ACCSideslipAIGCPanelUIConfigImpl : NSObject <ACCSideslipPropPanelUIConfigService> {
    id<IESServiceProvider> _sideslipServiceProvider;
    id<ACCSideslipPropViewContainerProtocol> _viewContainer;
}

@property (weak, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (id)initWithServiceProvider:(id)arg0;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
