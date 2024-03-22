//
//     Generated by private class-dump
//

@class NSObject, NSString, AWEAwemeModel;
@protocol IESGCPCommentPanelViewControllerProtocol, AWEAwemePlayInteractionInteractorProtocol;

@interface IESGCPActionPanelService_Douyin : NSObject <IESGCPActionPanelService> {
    AWEAwemeModel *_awemeModel;
    NSObject<AWEAwemePlayInteractionInteractorProtocol> *_awemePlayInteractionInteractor;
    NSObject<IESGCPCommentPanelViewControllerProtocol> *_commentPanelViewController;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject<AWEAwemePlayInteractionInteractorProtocol> *awemePlayInteractionInteractor;
@property (retain, nonatomic) NSObject<IESGCPCommentPanelViewControllerProtocol> *commentPanelViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)awemePlayInteractionInteractor;
- (void)onShareButtonTapped:(id)arg0;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 diggOriginItem:(BOOL)arg4 enterMethod:(id)arg5 inFollowFeed:(BOOL)arg6 ignoreUnlogin:(BOOL)arg7 animationBlock:(id /* block */)arg8;
- (void)favoriteWithFavoriteBlock:(id /* block */)arg0 unfavoriteBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 enterMethod:(id)arg4 enterFrom:(id)arg5 snackBarBottomPadding:(double)arg6 forceAFDSnackBar:(BOOL)arg7 a11yDismissView:(id)arg8;
- (void)updateAwemeModel:(id)arg0;
- (void)onCommentButtonTapped:(id)arg0 showInputView:(BOOL)arg1 exterMethod:(id)arg2;
- (void)diggNotification:(id)arg0 completion:(id /* block */)arg1;
- (void)favoriteNotification:(id)arg0 completion:(id /* block */)arg1;
- (void)commentTotalCountNotification:(id)arg0 completion:(id /* block */)arg1;
- (void)addTrackParamsWithLogExtraDict:(id)arg0 referString:(id)arg1;
- (id)commentPanelViewController;
- (void)setAwemePlayInteractionInteractor:(id)arg0;
- (void)setCommentPanelViewController:(id)arg0;
- (void).cxx_destruct;

@end
