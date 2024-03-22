//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESLivePrivilegeEntranceWealthViewModel : IESLiveCubeViewModel <IESLiveIncomeResultUpdateAction> {
    BOOL _shouldShowWealthView;
    NSDictionary *_selectedGiftInfo;
}

@property (copy, nonatomic) NSDictionary *selectedGiftInfo;
@property (nonatomic) BOOL shouldShowWealthView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)wealthViewHeight;
- (BOOL)shouldShowPrivilegeEntranceWealth;
- (void)incomeResultDidUpdate;
- (void)setSelectedGiftInfo:(id)arg0;
- (void)actionSelectedGiftInfo:(id)arg0;
- (id)selectedGiftInfo;
- (BOOL)shouldShowWealthView;
- (void)setShouldShowWealthView:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end