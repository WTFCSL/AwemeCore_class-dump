//
//     Generated by private class-dump
//

@class IESLivePrivilegeEntranceVIPViewModel, NSString, IESLivePrivilegeEntranceEcomProfileViewModel, IESLivePrivilegeEntranceProfileViewModel, UIView, IESLivePrivilegeEntranceView;
@protocol IESLivePrivilegeEntranceProfileViewProtocol, IESLivePrivilegeEntranceProfileActions, IESLiveRoomProfileButtonDelegate, IESLivePrivilegeEntranceEcomProfileViewProtocol, IESLivePrivilegeEntranceSubviewDelegate, IESLiveRoomProfileButtonContainerOuterProtocol;

@interface IESLivePrivilegeEntranceProfileController : IESLiveCubeController <IESLivePrivilegeEntranceProfileViewEventHandler, IESLivePrivilegeModulePrivilegeEntranceProfileInterface> {
    BOOL _enableEnterFansClub;
    BOOL _enableEcomFansclub;
    BOOL _enableProfileVIPEntrance;
    BOOL _enableGeneralVIP;
    BOOL _enableProfileDoubleEntranceConfig;
    IESLivePrivilegeEntranceProfileViewModel *_profileViewModel;
    IESLivePrivilegeEntranceEcomProfileViewModel *_ecomProfileViewModel;
    UIView<IESLiveRoomProfileButtonDelegate> *_currentProfileView;
    UIView<IESLivePrivilegeEntranceProfileViewProtocol> *_profileView;
    UIView<IESLivePrivilegeEntranceEcomProfileViewProtocol> *_ecomProfileView;
    id<IESLiveRoomProfileButtonContainerOuterProtocol> _profileContainer;
    IESLivePrivilegeEntranceView *_entranceView;
    UIView<IESLivePrivilegeEntranceSubviewDelegate> *_fansClubView;
    UIView<IESLivePrivilegeEntranceSubviewDelegate> *_generalVIPView;
    IESLivePrivilegeEntranceVIPViewModel *_generalVIPViewModel;
    long long _entranceType;
    id<IESLivePrivilegeEntranceProfileActions> _actionCreator;
}

@property (retain, nonatomic) IESLivePrivilegeEntranceProfileViewModel *profileViewModel;
@property (retain, nonatomic) IESLivePrivilegeEntranceEcomProfileViewModel *ecomProfileViewModel;
@property (retain, nonatomic) UIView<IESLiveRoomProfileButtonDelegate> *currentProfileView;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceProfileViewProtocol> *profileView;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceEcomProfileViewProtocol> *ecomProfileView;
@property (weak, nonatomic) id<IESLiveRoomProfileButtonContainerOuterProtocol> profileContainer;
@property (nonatomic) BOOL enableEnterFansClub;
@property (nonatomic) BOOL enableEcomFansclub;
@property (nonatomic) BOOL enableProfileVIPEntrance;
@property (nonatomic) BOOL enableGeneralVIP;
@property (retain, nonatomic) IESLivePrivilegeEntranceView *entranceView;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> *fansClubView;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> *generalVIPView;
@property (retain, nonatomic) IESLivePrivilegeEntranceVIPViewModel *generalVIPViewModel;
@property (nonatomic) long long entranceType;
@property (readonly, nonatomic) BOOL enableProfileDoubleEntranceConfig;
@property (retain, nonatomic) id<IESLivePrivilegeEntranceProfileActions> actionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (long long)entranceType;
- (void)setEntranceType:(long long)arg0;
- (id)entranceView;
- (void)setEntranceView:(id)arg0;
- (id)buildCommonParams;
- (id)profileView;
- (void)setProfileView:(id)arg0;
- (id)actionCreator;
- (void)setActionCreator:(id)arg0;
- (void)viewDidShowOnContainer:(id)arg0;
- (id)profileButton;
- (void)openNormalFansClubView;
- (void)controllerActived;
- (BOOL)enableEcomFansclub;
- (void)setEnableEcomFansclub:(BOOL)arg0;
- (void)trackEcomFansclubShow;
- (void)trackEcomFansclubClick;
- (void)didTapFansclubButton;
- (void)trackFansclubClick;
- (void)trackFansclubShow;
- (void)didTapVIPButton;
- (void)setEnableProfileVIPEntrance:(BOOL)arg0;
- (void)setEnableEnterFansClub:(BOOL)arg0;
- (void)setEnableGeneralVIP:(BOOL)arg0;
- (BOOL)enableProfileDoubleEntranceConfig;
- (void)setEcomProfileViewModel:(id)arg0;
- (id)ecomProfileViewModel;
- (void)createEcomProfileView;
- (BOOL)enableEnterFansClub;
- (BOOL)enableProfileVIPEntrance;
- (void)createProfileView;
- (void)resetEcomAnchorEntranceStyle;
- (void)resetAnchorEntranceStyle;
- (BOOL)enableGeneralVIP;
- (void)createGeneralVIPView;
- (void)createVIPProfileView;
- (void)setCurrentProfileView:(id)arg0;
- (id)profileContainer;
- (void)setGeneralVIPViewModel:(id)arg0;
- (id)generalVIPViewModel;
- (void)setGeneralVIPView:(id)arg0;
- (id)generalVIPView;
- (void)setFansClubView:(id)arg0;
- (id)fansClubView;
- (void)setEcomProfileView:(id)arg0;
- (id)ecomProfileView;
- (void)bindEcomViewModel;
- (void)reloadProfileViewIfNeeded;
- (void)trackVIPShow;
- (id)currentProfileView;
- (void)trackVIPClick;
- (void)setProfileContainer:(id)arg0;
- (void).cxx_destruct;
- (id)profileViewModel;
- (void)setProfileViewModel:(id)arg0;

@end
