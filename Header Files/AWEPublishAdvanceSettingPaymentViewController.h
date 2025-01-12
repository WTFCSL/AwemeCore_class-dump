//
//     Generated by private class-dump
//

@class AWECodeGenDouyinContentPayChargePermissionResponse, DUXBasicSheet, DUXAlertDialog, TTTAttributedLabel, UITableView, DUXTip, UIButton, UIView, BDImageView, NSString, AWEPublishAdvanceSettingPreviewVideoController, AWEVideoPublishViewModel, AWECodeGenDouyinContentPayChargeRecommendConfigResponse, NSArray, AWEPublishPaymentPreviewItem, DUXCheckBox, UIImageView;
@protocol AWEPostPageReeditService, ACCEditServiceProtocol;

@interface AWEPublishAdvanceSettingPaymentViewController : UIViewController <UINavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource, TTTAttributedLabelDelegate, DUXSheetDelegate> {
    BOOL _inEditMode;
    BOOL _hasVIPVideoPrivilege;
    BOOL _isClickCheckBox;
    BOOL _isButtonEnable;
    BOOL _isClickKnowButton;
    BOOL _isSkipCheckTrack;
    BOOL _isOpenPayment;
    BOOL _hasChangeCoverImage;
    BOOL _hasChangeConfigContent;
    AWEVideoPublishViewModel *_publishViewModel;
    id<ACCEditServiceProtocol> _editService;
    id<AWEPostPageReeditService> _reeditService;
    AWECodeGenDouyinContentPayChargePermissionResponse *_permissionModel;
    double _totalDuration;
    long long _vipVideoMonthPrice;
    id /* block */ _exitLandscapeBlock;
    id /* block */ _checkCanChooseSinglePaidCallback;
    UIView *_tipsView;
    UIImageView *_imageView;
    UIView *_changeCoverView;
    UITableView *_tableView;
    UIButton *_startPaymentButton;
    UIButton *_closeButton;
    UIView *_checkContainerView;
    DUXCheckBox *_checkBox;
    TTTAttributedLabel *_readLabel;
    DUXTip *_tipsHintView;
    BDImageView *_panelImageView;
    NSArray *_configItems;
    AWEPublishPaymentPreviewItem *_paidTypeItem;
    DUXBasicSheet *_currentSheet;
    double _currentSheetDefaultHeight;
    unsigned long long _currentPreviewType;
    AWEPublishAdvanceSettingPreviewVideoController *_previewVideoVC;
    AWECodeGenDouyinContentPayChargeRecommendConfigResponse *_recommendConfigModel;
    DUXBasicSheet *_guideSheet;
    DUXAlertDialog *_protocolDialog;
}

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *changeCoverView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *startPaymentButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *checkContainerView;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) TTTAttributedLabel *readLabel;
@property (nonatomic) BOOL isClickCheckBox;
@property (retain, nonatomic) DUXTip *tipsHintView;
@property (retain, nonatomic) BDImageView *panelImageView;
@property (copy, nonatomic) NSArray *configItems;
@property (retain, nonatomic) AWEPublishPaymentPreviewItem *paidTypeItem;
@property (weak, nonatomic) DUXBasicSheet *currentSheet;
@property (nonatomic) double currentSheetDefaultHeight;
@property (nonatomic) unsigned long long currentPreviewType;
@property (nonatomic) BOOL isButtonEnable;
@property (weak, nonatomic) AWEPublishAdvanceSettingPreviewVideoController *previewVideoVC;
@property (retain, nonatomic) AWECodeGenDouyinContentPayChargeRecommendConfigResponse *recommendConfigModel;
@property (weak, nonatomic) DUXBasicSheet *guideSheet;
@property (retain, nonatomic) DUXAlertDialog *protocolDialog;
@property (nonatomic) BOOL isClickKnowButton;
@property (nonatomic) BOOL isSkipCheckTrack;
@property (nonatomic) BOOL isOpenPayment;
@property (nonatomic) BOOL hasChangeCoverImage;
@property (nonatomic) BOOL hasChangeConfigContent;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<AWEPostPageReeditService> reeditService;
@property (weak, nonatomic) AWECodeGenDouyinContentPayChargePermissionResponse *permissionModel;
@property (nonatomic) BOOL inEditMode;
@property (nonatomic) double totalDuration;
@property (nonatomic) BOOL hasVIPVideoPrivilege;
@property (nonatomic) long long vipVideoMonthPrice;
@property (copy, nonatomic) id /* block */ exitLandscapeBlock;
@property (copy, nonatomic) id /* block */ checkCanChooseSinglePaidCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)arg0 didSelectLinkWithURL:(id)arg1;
- (BOOL)sheetWillStayAfterClickCloseButton;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetWillDismiss:(id)arg0;
- (id /* block */)exitLandscapeBlock;
- (void)setExitLandscapeBlock:(id /* block */)arg0;
- (id)publishViewModel;
- (id)tipsView;
- (void)setTipsView:(id)arg0;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (id)permissionModel;
- (void)setPermissionModel:(id)arg0;
- (void)configureUI;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)setGuideSheet:(id)arg0;
- (id)guideSheet;
- (void)setPublishViewModel:(id)arg0;
- (void)setPanelImageView:(id)arg0;
- (id)panelImageView;
- (void)setHasVIPVideoPrivilege:(BOOL)arg0;
- (void)setVipVideoMonthPrice:(long long)arg0;
- (BOOL)hasVIPVideoPrivilege;
- (long long)vipVideoMonthPrice;
- (void)setCheckCanChooseSinglePaidCallback:(id /* block */)arg0;
- (id)reeditService;
- (void)setReeditService:(id)arg0;
- (id /* block */)checkCanChooseSinglePaidCallback;
- (id)recommendConfigModel;
- (void)setRecommendConfigModel:(id)arg0;
- (id)readLabel;
- (void)setReadLabel:(id)arg0;
- (void)tipsFrequencyControl;
- (void)setCheckArea;
- (void)popupPaymentGuide;
- (void)checkButtonEnableState;
- (void)fetchPaymentConfigIfNeed;
- (void)trackPaidVideoEditPageShow;
- (id)tipsHintView;
- (void)trackPaidVideoEditPageClickWithArea:(id)arg0;
- (id)changeCoverView;
- (id)startPaymentButton;
- (id)checkContainerView;
- (id)configItems;
- (BOOL)isButtonEnable;
- (BOOL)hasChangeCoverImage;
- (BOOL)hasChangeConfigContent;
- (void)startPaymentButtonTapped;
- (void)resetChangeStatus;
- (void)trackPaidVideoEditSubPageShowWithPageName:(id)arg0;
- (void)setHasChangeCoverImage:(BOOL)arg0;
- (void)trackPaidVideoEditSubPageClickWithExtra:(id)arg0;
- (void)didClickEnablePaymentButtonIfDisagree;
- (void)confirmOpenPaymentButton;
- (BOOL)getCheckProtocolAgreeState;
- (BOOL)isOpenPayment;
- (void)trackPaidVideoEditPageButtonClickWithName:(id)arg0 activelyCheck:(id)arg1;
- (BOOL)isClickCheckBox;
- (void)configPublishModel;
- (void)checkProtocolAgree;
- (void)setIsButtonEnable:(BOOL)arg0;
- (unsigned long long)currentPreviewType;
- (void)saveCoverImageToDraftIfNeed;
- (void)createGuideInfoPanel;
- (void)knowDismiss;
- (void)trackPaidVideoEditLeadPageShow;
- (void)setIsClickKnowButton:(BOOL)arg0;
- (void)trackPaidVideoEditLeadPageClickWithPosition:(id)arg0;
- (void)setIsSkipCheckTrack:(BOOL)arg0;
- (void)updateCheckBoxValue:(BOOL)arg0;
- (void)setIsClickCheckBox:(BOOL)arg0;
- (id)protocolDialog;
- (void)setProtocolDialog:(id)arg0;
- (void)checkBoxValueChanged;
- (BOOL)isSkipCheckTrack;
- (id)getAttributedString:(id)arg0 protocolString:(id)arg1;
- (id)trackPublishCommonParams;
- (void)updatePriceItemWithPaidType:(unsigned long long)arg0;
- (void)updateConfigContent;
- (void)setCurrentSheetDefaultHeight:(double)arg0;
- (void)setHasChangeConfigContent:(BOOL)arg0;
- (id)paidTypeItem;
- (void)setCurrentPreviewType:(unsigned long long)arg0;
- (void)setPreviewVideoVC:(id)arg0;
- (id)previewVideoVC;
- (BOOL)isClickKnowButton;
- (double)currentSheetDefaultHeight;
- (void)changeCoverViewTapped;
- (void)setPaidTypeItem:(id)arg0;
- (void)setIsOpenPayment:(BOOL)arg0;
- (void)setChangeCoverView:(id)arg0;
- (void)setStartPaymentButton:(id)arg0;
- (void)setCheckContainerView:(id)arg0;
- (void)setTipsHintView:(id)arg0;
- (void)setConfigItems:(id)arg0;
- (double)totalDuration;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)imageView;
- (void)keyboardWillShow:(id)arg0;
- (void)setImageView:(id)arg0;
- (void)viewDidLoad;
- (void)addObserver;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setTotalDuration:(double)arg0;
- (void)closeButtonTapped;
- (BOOL)inEditMode;
- (void)setInEditMode:(BOOL)arg0;
- (void)backButtonTapped;
- (void)setCurrentSheet:(id)arg0;
- (id)currentSheet;

@end
