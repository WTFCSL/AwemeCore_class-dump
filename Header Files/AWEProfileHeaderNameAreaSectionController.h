//
//     Generated by private class-dump
//

@class NSString, AWEProfileHeaderContext, NSMutableArray;

@interface AWEProfileHeaderNameAreaSectionController : AWEBaseListSectionController <AWEProfileHeaderNameAreaCollectionViewCellDelegate> {
    BOOL _isUserModelRefetched;
    AWEProfileHeaderContext *_context;
    NSMutableArray *_binds;
}

@property (weak, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) NSMutableArray *binds;
@property (nonatomic) BOOL isUserModelRefetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (id)binds;
- (void)setBinds:(id)arg0;
- (void)updateAvatarAccessibilityLabel:(id)arg0;
- (void)updateNameLabelWithSize:(struct CGSize { double x0; double x1; })arg0;
- (void)didTapCopyIdString:(id)arg0;
- (void)didTapSwitchAccountButton;
- (void)didTapMultiAccountUnreadDotView:(id)arg0;
- (void)didTapTagViewWithModel:(id)arg0;
- (void)didTapPrivacyEnhanceLabel;
- (void)setIsUserModelRefetched:(BOOL)arg0;
- (BOOL)isUserModelRefetched;
- (void)p_trackNameAreaTagsShow;
- (void)p_showAliasAlertView:(id)arg0;
- (void)didTapAliasAction;
- (void)p_trackEditRemarkWithActionType:(id)arg0 enterFrom:(id)arg1 toUserId:(id)arg2 trackParams:(id)arg3;
- (void)p_trackPlayletTagWithEventName:(id)arg0;
- (void).cxx_destruct;
- (BOOL)showSeparator;
- (void)setContext:(id)arg0;
- (Class)cellClass;
- (id)context;

@end
