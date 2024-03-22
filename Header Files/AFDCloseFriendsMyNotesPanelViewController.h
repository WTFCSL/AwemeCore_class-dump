//
//     Generated by private class-dump
//

@class UILabel, NSString, UIImageView, UIButton, AFDCloseFriendsShowSnackbarHelper, AFDCloseFriendsColorRingInfo, DUXButton, AFDCloseFriendsMyNotesPanelLoadingView, CMCPublishModel;

@interface AFDCloseFriendsMyNotesPanelViewController : UIViewController <AFDMomentNotesMessage> {
    id /* block */ _onClickPublishButtonBlock;
    AFDCloseFriendsColorRingInfo *_colorRingInfo;
    DUXButton *_publishButton;
    UILabel *_visibilityLabel;
    UIButton *_deleteButton;
    UIImageView *_avatarView;
    double _contentHeight;
    AFDCloseFriendsMyNotesPanelLoadingView *_loadingView;
    CMCPublishModel *_publishModel;
    AFDCloseFriendsShowSnackbarHelper *_showSnackbarHelper;
}

@property (retain, nonatomic) AFDCloseFriendsColorRingInfo *colorRingInfo;
@property (retain, nonatomic) DUXButton *publishButton;
@property (retain, nonatomic) UILabel *visibilityLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) AFDCloseFriendsMyNotesPanelLoadingView *loadingView;
@property (retain, nonatomic) CMCPublishModel *publishModel;
@property (retain, nonatomic) AFDCloseFriendsShowSnackbarHelper *showSnackbarHelper;
@property (copy, nonatomic) id /* block */ onClickPublishButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishButtonTitle;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)publishButton;
- (void)setPublishButton:(id)arg0;
- (id)showSnackbarHelper;
- (void)setShowSnackbarHelper:(id)arg0;
- (id)initWithColorRingInfo:(id)arg0;
- (void)setOnClickPublishButtonBlock:(id /* block */)arg0;
- (void)didPublishNotesSucceed:(id)arg0 withPublishModel:(id)arg1;
- (id)colorRingInfo;
- (void)reportHasRead;
- (id)visibilityLabel;
- (BOOL)isHitShowDeleteButtonTest;
- (id)appendCustomString:(id)arg0 ToDetailText:(id)arg1;
- (id)deleteButtonTitle;
- (void)onClickDeleteButton:(id)arg0;
- (void)onClickPublishButton:(id)arg0;
- (id /* block */)onClickPublishButtonBlock;
- (id)panelConfigDict;
- (void)setColorRingInfo:(id)arg0;
- (void)setVisibilityLabel:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)show;
- (id)deleteButton;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setContentHeight:(double)arg0;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end