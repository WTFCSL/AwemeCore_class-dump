//
//     Generated by private class-dump
//

@class AWENewPublishCoCreatorTableViewCell, NSArray, AWEPublishCoCreatorSettingsModel, NSString, AWEPublishCoCreatorInfoModel, UIViewController;
@protocol AWECoCreatorRoleSelectorViewControllerProtocol;

@interface AWEPostPageCoCreatorElement : AWEPostPageCellElement {
    BOOL _hasTryLoadCache;
    AWENewPublishCoCreatorTableViewCell *_coCreatorCell;
    AWEPublishCoCreatorSettingsModel *_coCreatorConfig;
    NSArray *_coCreatorUserList;
    UIViewController<AWECoCreatorRoleSelectorViewControllerProtocol> *_roleSelectViewController;
    NSString *_capcutToken;
    AWEPublishCoCreatorInfoModel *_capcutCoCreatorInfo;
}

@property (nonatomic) BOOL hasTryLoadCache;
@property (retain, nonatomic) AWENewPublishCoCreatorTableViewCell *coCreatorCell;
@property (retain, nonatomic) AWEPublishCoCreatorSettingsModel *coCreatorConfig;
@property (copy, nonatomic) NSArray *coCreatorUserList;
@property (weak, nonatomic) UIViewController<AWECoCreatorRoleSelectorViewControllerProtocol> *roleSelectViewController;
@property (copy, nonatomic) NSString *capcutToken;
@property (retain, nonatomic) AWEPublishCoCreatorInfoModel *capcutCoCreatorInfo;

+ (void)_aweLazyRegisterPostPage;

- (id)commonParams;
- (BOOL)forceReceiveEvents;
- (BOOL)isAlbumVideo;
- (BOOL)isStarAtlasCoCreator;
- (BOOL)hasTryLoadCache;
- (void)loadCacheConfig;
- (BOOL)canShowCoCreator;
- (id)coCreatorConfig;
- (BOOL)isCapcupValidCoCreator;
- (BOOL)enableCocreatorWithMission;
- (id)coCreatorCell;
- (void)updateCoCreatorUserList;
- (BOOL)enableCellForAlbum;
- (id)roleNameWithRoleId:(long long)arg0;
- (void)setCoCreatorUserList:(id)arg0;
- (void)updateCoCreatorCell;
- (void)tryLoadCapcutToken;
- (void)requestCoCreatorConfig;
- (void)addClickCoCreatorTrack;
- (void)showAlertWithNotCocreatorMission;
- (void)showCoCreatorSelectPage;
- (id)capcutToken;
- (id)capcutCoCreatorInfo;
- (void)setCapcutCoCreatorInfo:(id)arg0;
- (void)updatePublishCoCreator:(id)arg0;
- (void)updateCoCreatorSettingsWithData:(id)arg0 model:(id)arg1 forceReload:(BOOL)arg2;
- (void)setCapcutToken:(id)arg0;
- (void)setCoCreatorConfig:(id)arg0;
- (void)checkNeedShowAlert;
- (id)roleSelectViewController;
- (void)setRoleSelectViewController:(id)arg0;
- (void)trackShowCannotAddCoCreatorAlert;
- (id)coCreatorUserList;
- (void)setHasTryLoadCache:(BOOL)arg0;
- (void)setCoCreatorCell:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (BOOL)isVisible;
- (void)_setup;
- (id)cell;
- (id)cellIdentifier;
- (id)paymentService;
- (void)didSelect;

@end