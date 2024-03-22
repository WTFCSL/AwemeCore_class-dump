//
//     Generated by private class-dump
//

@class IESGCPAudienceDetailView, IESGCPGameDetailSmallWindowService, NSString, IESGCPGameDetailPlayerScaleService;

@interface IESGCPAudienceDetailViewController : IESGCPBaseDetailViewController <IESGCPDIContextSubscriber> {
    IESGCPAudienceDetailView *_audienceDetailView;
    IESGCPGameDetailSmallWindowService *_smallWindowService;
    IESGCPGameDetailPlayerScaleService *_playerScaleService;
}

@property (retain, nonatomic) IESGCPAudienceDetailView *audienceDetailView;
@property (retain, nonatomic) IESGCPGameDetailSmallWindowService *smallWindowService;
@property (retain, nonatomic) IESGCPGameDetailPlayerScaleService *playerScaleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (id)initWithRouterModel:(id)arg0;
- (id)smallWindowService;
- (id)playerScaleService;
- (id)audienceDetailView;
- (BOOL)livePowerSaveClearEnable;
- (void)handleFullScreenStatusDidChange:(BOOL)arg0;
- (void)setAudienceDetailView:(id)arg0;
- (void)setSmallWindowService:(id)arg0;
- (void)setPlayerScaleService:(id)arg0;
- (void)didDismiss;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)detailView;

@end
