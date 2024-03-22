//
//     Generated by private class-dump
//

@class NSArray, NSString, UIView;
@protocol AWEPlayInteractionCoCreatorInfoViewProtocol;

@interface AWEPlayInteractionCoCreatorInfoElement : AWEPlayInteractionLeftElement <AWEUserMessage, AWECoCreatorPanelDelegate> {
    BOOL _isPreLoadRequesting;
    UIView<AWEPlayInteractionCoCreatorInfoViewProtocol> *_infoView;
    NSArray *_acceptedCoCreators;
}

@property (retain, nonatomic) UIView<AWEPlayInteractionCoCreatorInfoViewProtocol> *infoView;
@property (copy, nonatomic) NSArray *acceptedCoCreators;
@property (nonatomic) BOOL isPreLoadRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)initializeElement;
- (void)viewDidDisposed;
- (id)acceptedCoCreators;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)coCreatorPanelDidShow;
- (void)coCreatorpanelDidDissmiss;
- (void)coCreatorPanelDragOffset:(double)arg0;
- (void)trackEnterPersonalDetail:(id)arg0;
- (void)enterUserProfilePage:(id)arg0 indexPath:(id)arg1;
- (void)layoutElementView;
- (void)viewController_didEndDisplaying;
- (void)dynamicWidthRemakeLayout;
- (void)setAcceptedCoCreators:(id)arg0;
- (id)coCreatorModelWithAuthor;
- (void)onFollowStatusChanged:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (BOOL)shouldShowWithModel:(id)arg0;
- (void)didFinishRemoveFans:(id)arg0;
- (void)tryPreloadCoCreatorInfo;
- (BOOL)shouldAvoidEcommerceEntry:(id)arg0;
- (id)currentCoCreator:(id)arg0;
- (void)setIsPreLoadRequesting:(BOOL)arg0;
- (BOOL)isPreLoadRequesting;
- (void)trackEnterPersonalDetail:(id)arg0 indexPath:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (void)updateUI;
- (id)infoView;
- (void)setInfoView:(id)arg0;

@end