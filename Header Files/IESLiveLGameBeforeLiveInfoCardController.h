//
//     Generated by private class-dump
//

@class NSString, IESLiveLGameBeforeLiveInfoCardView;
@protocol IESLiveLGameBeforeLiveInfoCardControllerDelegate;

@interface IESLiveLGameBeforeLiveInfoCardController : IESLiveLGameMaskController <IESLiveLGameBeforeLiveInfoCardViewDelegate> {
    id<IESLiveLGameBeforeLiveInfoCardControllerDelegate> _delegate;
    IESLiveLGameBeforeLiveInfoCardView *_infoCard;
}

@property (retain, nonatomic) IESLiveLGameBeforeLiveInfoCardView *infoCard;
@property (weak, nonatomic) id<IESLiveLGameBeforeLiveInfoCardControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInfoCardWithModel:(id)arg0;
- (void)customDismissViewControllerAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)beforeLiveInfoCardCloseButtonClick:(id)arg0;
- (void)beforeLiveInfoCardExitMountButtonClick:(id)arg0;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)infoCard;
- (void)setInfoCard:(id)arg0;

@end
