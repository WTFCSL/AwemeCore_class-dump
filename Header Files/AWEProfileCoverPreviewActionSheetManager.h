//
//     Generated by private class-dump
//

@class NSString, DUXActionSheet, UIViewController;

@interface AWEProfileCoverPreviewActionSheetManager : NSObject <DUXActionSheetDelegate> {
    NSString *_enterFrom;
    id /* block */ _selectCompletion;
    id /* block */ _selectCoverFromAlbum;
    id /* block */ _confirmDynamicCoverCompletion;
    DUXActionSheet *_actionSheet;
    UIViewController *_presenter;
}

@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (weak, nonatomic) UIViewController *presenter;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ selectCompletion;
@property (copy, nonatomic) id /* block */ selectCoverFromAlbum;
@property (copy, nonatomic) id /* block */ confirmDynamicCoverCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)actionSheetDidClickMaskArea:(id)arg0;
- (void)didActionSheetDismiss:(id)arg0;
- (id /* block */)selectCompletion;
- (void)setSelectCompletion:(id /* block */)arg0;
- (void)showActionSheetOnVC:(id)arg0;
- (id)modelWithTitle:(id)arg0;
- (id /* block */)selectCoverFromAlbum;
- (id /* block */)confirmDynamicCoverCompletion;
- (void)setSelectCoverFromAlbum:(id /* block */)arg0;
- (void)setConfirmDynamicCoverCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)presenter;
- (void)setPresenter:(id)arg0;
- (void)setActionSheet:(id)arg0;
- (id)actionSheet;
- (void)showActionSheet;

@end