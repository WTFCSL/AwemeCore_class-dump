//
//     Generated by private class-dump
//

@class NSString, UIButton, CKBeautyResetAllButton;

@interface CKBeautyContentItemViewController : CKBeautyContentViewController {
    BOOL _shouldShowBackButton;
    NSString *_resetTitle;
    UIButton *_backButton;
    CKBeautyResetAllButton *_resetAllBeautyButton;
}

@property (nonatomic) BOOL shouldShowBackButton;
@property (copy, nonatomic) NSString *resetTitle;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) CKBeautyResetAllButton *resetAllBeautyButton;

- (id)resetTitle;
- (void)setupNav;
- (id)resetAllBeautyButton;
- (void)markShouldShowBackButton;
- (void)p_handleTapBackButton:(id)arg0;
- (void)p_didTapResetButton;
- (unsigned long long)contentVcType;
- (void)collectionView:(id)arg0 didSelectBeautyCellAtIndexPath:(id)arg1 cellModel:(id)arg2;
- (void)showResetButton;
- (void)changeResetButtonEnabledState:(BOOL)arg0;
- (void)setResetTitle:(id)arg0;
- (void)setResetAllBeautyButton:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setupCollectionView;
- (BOOL)shouldShowBackButton;
- (void)setShouldShowBackButton:(BOOL)arg0;

@end
