//
//     Generated by private class-dump
//

@class UINavigationController, NSString, HTSLiveFansGroupGuideMessage, IESLiveFansGroupListViewController;
@protocol IESLiveIMService;

@interface IESLiveFansGroupAdminFragment : IESLiveRoomComponent <IESLiveFansGroupAction, HTSLiveMessageSubscriber, UINavigationControllerDelegate> {
    BOOL _enableFansGroupAdminIcon;
    UINavigationController *_fansGroupShowNavigationController;
    IESLiveFansGroupListViewController *_webFansGroupListVC;
    id<IESLiveIMService> _imService;
    HTSLiveFansGroupGuideMessage *_fansGroupGuideMessage;
    NSString *_fansGroupURL;
    struct CGSize { double width; double height; } _fansGroupAdminViewSize;
}

@property (retain, nonatomic) UINavigationController *fansGroupShowNavigationController;
@property (retain, nonatomic) IESLiveFansGroupListViewController *webFansGroupListVC;
@property (retain, nonatomic) id<IESLiveIMService> imService;
@property (nonatomic) struct CGSize { double width; double height; } fansGroupAdminViewSize;
@property (retain, nonatomic) HTSLiveFansGroupGuideMessage *fansGroupGuideMessage;
@property (nonatomic) BOOL enableFansGroupAdminIcon;
@property (copy, nonatomic) NSString *fansGroupURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)tansToFansGroupAdminVC:(id)arg0;
- (void)hideFansGroupAdminView;
- (void)popupFansGroupAdminVC:(id)arg0 backURL:(id)arg1;
- (void)setFansGroupURL:(id)arg0;
- (void)setEnableFansGroupAdminIcon:(BOOL)arg0;
- (BOOL)enableFansGroupAdminIcon;
- (id)fansGroupURL;
- (void)addFansGroupAdminToolBarItem;
- (void)showFansGroupAdminView;
- (void)setFansGroupAdminViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })fansGroupAdminViewSize;
- (void)setWebFansGroupListVC:(id)arg0;
- (id)fansGroupShowNavigationController;
- (id)webFansGroupListVC;
- (void)setFansGroupShowNavigationController:(id)arg0;
- (void)showCreateFansGroupGuideBubble:(id)arg0;
- (void)setFansGroupGuideMessage:(id)arg0;
- (id)fansGroupGuideMessage;
- (void)showFansGroupAdminVC:(id)arg0 backURL:(id)arg1;
- (void).cxx_destruct;
- (void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)messageReceived:(id)arg0;
- (id)imService;
- (void)setImService:(id)arg0;

@end
