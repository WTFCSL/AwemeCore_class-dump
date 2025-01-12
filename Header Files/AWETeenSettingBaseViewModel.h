//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol AWETeenSettingBaseViewModelDelegate;

@interface AWETeenSettingBaseViewModel : NSObject <AWEComplianceMessage, AWESettingViewModelProtocol> {
    long long _colorStyle;
    id<AWETeenSettingBaseViewModelDelegate> _controllerDelegate;
}

@property (nonatomic) long long colorStyle;
@property (weak, nonatomic) id<AWETeenSettingBaseViewModelDelegate> controllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *sectionDataArray;

- (void)listControlDidChange;
- (id)sectionDataArray;
- (id)itemModelWithType:(long long)arg0;
- (void)tapTeenagerProtectionCell;
- (void)tapSettingCell;
- (void)tapEyeProtectionCell;
- (void)tapHelpDeskCell;
- (void)tapWalletCell;
- (void)tapBalanceWithdrawCell;
- (void)tapContentManageCell;
- (void)tapContentPreferCell;
- (void)refreshAllCells;
- (void)viewDidDisapper;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)setControllerDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)controllerDelegate;
- (void)viewWillAppear;
- (long long)colorStyle;
- (void)setColorStyle:(long long)arg0;

@end
