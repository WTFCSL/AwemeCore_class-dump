//
//     Generated by private class-dump
//

@class NSString, DUXBasicSheet;

@interface AWEHotSpotInterestPanelContainer : UIViewController <DUXSheetDelegate> {
    DUXBasicSheet *_interestPanel;
}

@property (retain, nonatomic) DUXBasicSheet *interestPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (void)showInterestPanelOnViewContrller:(id)arg0 withLabels:(id)arg1 completion:(id)arg2;
- (id)getInterestPanel;
- (void)setInterestPanel:(id)arg0;
- (id)interestPanel;
- (void).cxx_destruct;

@end
