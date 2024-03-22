//
//     Generated by private class-dump
//

@class UIButton, NSString, AWEAwemeModel;

@interface AFDVideoPrivacyButtonController : NSObject <AFDAwemePermissionMessage, AFDVideoPrivacyButtonControllerProtocol> {
    BOOL _verticalCenterStyle;
    UIButton *_privacySettingButton;
    AWEAwemeModel *_awemeModel;
    NSString *_previousPage;
    NSString *_referString;
    NSString *_enterFrom;
    id /* block */ _isDraggingBlock;
}

@property (retain, nonatomic) UIButton *privacySettingButton;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL verticalCenterStyle;
@property (copy, nonatomic) id /* block */ isDraggingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (void)doPrivateToPublicForComment;
- (id)privacySettingButton;
- (void)setPrivacySettingButton:(id)arg0;
- (BOOL)showBottomRightButtonIfPossible;
- (void)doPrivacySettingAction;
- (id)realAweme;
- (void)setIsDraggingBlock:(id /* block */)arg0;
- (void)didChangeAwemePrivacyType:(id)arg0 privacyPermissionType:(long long)arg1 extra:(id)arg2 syncHandle:(id /* block */)arg3;
- (void)trackShowPrivacySetting:(id)arg0;
- (void)updatePrivacyIconWithType:(long long)arg0;
- (void)updatePrivacyTextWithType:(long long)arg0;
- (BOOL)shouldForbidChangePrivacyForXiguaStartAtlas;
- (void)trackToPublic:(id)arg0 enterMethod:(id)arg1 isCancel:(BOOL)arg2;
- (id)titleActionWithTitle:(id)arg0;
- (void)trackPublicPermission:(BOOL)arg0;
- (void)transferToPublic:(id)arg0;
- (id)confirmActionWithTitle:(id)arg0 confirmHandler:(id /* block */)arg1;
- (id /* block */)isDraggingBlock;
- (void)trackClickPrivacySetting:(id)arg0;
- (id)createPrivacyButtonForBottomBarWithVideoAnalysisEntrance;
- (BOOL)verticalCenterStyle;
- (id)p_verticalCenterButtonWithTitle:(id)arg0 imageNamed:(id)arg1;
- (id)createButtonWithTitle:(id)arg0;
- (void)privacySettingButtonAction:(id)arg0;
- (void)trackConfirmToPublic:(id)arg0 enterMethod:(id)arg1;
- (void)setVerticalCenterStyle:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end
