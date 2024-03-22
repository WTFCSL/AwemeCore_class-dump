//
//     Generated by private class-dump
//

@class DUXBasicSheet, AWEDislikePanelNetworkHelper, NSDictionary, NSString;

@interface AWEPlayInteractionDislikePanelManager : NSObject <AWEPlayInteractionDislikeTableViewControllerDelegate, AWEMultipleSelectionDislikePanelViewControllerDelegate, AWEPIDislikePanelVCDelegate, DUXSheetDelegate> {
    BOOL _isShowing;
    DUXBasicSheet *_sheet;
    id /* block */ _dislikePanelSelectedBlock;
    id /* block */ _dislikeMultipleSelectionBlock;
    id /* block */ _dislikeV2MultipleSelectionBlock;
    id /* block */ _dislikePanelCancelBlock;
    NSDictionary *_trackExtra;
    unsigned long long _panelType;
    AWEDislikePanelNetworkHelper *_networkHelper;
}

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (copy, nonatomic) id /* block */ dislikePanelSelectedBlock;
@property (copy, nonatomic) id /* block */ dislikeMultipleSelectionBlock;
@property (copy, nonatomic) id /* block */ dislikeV2MultipleSelectionBlock;
@property (copy, nonatomic) id /* block */ dislikePanelCancelBlock;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) unsigned long long panelType;
@property (retain, nonatomic) AWEDislikePanelNetworkHelper *networkHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sheetDidClickCloseButton:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (void)sheetDidDismiss:(id)arg0;
- (void)sheetDidDragToDismiss:(id)arg0;
- (void)setIsShowing:(BOOL)arg0;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (unsigned long long)panelType;
- (id)trackExtra;
- (void)setTrackExtra:(id)arg0;
- (void)setPanelType:(unsigned long long)arg0;
- (void)dislikePanelOnVC:(id)arg0 awemeModel:(id)arg1 trackExtra:(id)arg2 multipleSelectionBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
- (void)dislikeV2PanelOnVC:(id)arg0 awemeModel:(id)arg1 trackExtra:(id)arg2 multipleSelectionBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
- (id)networkHelper;
- (void)setNetworkHelper:(id)arg0;
- (void)submitWithInfos:(id)arg0 awemeModel:(id)arg1;
- (void)didClickedClose:(id)arg0;
- (void)submitWithInfos:(id)arg0 awemeModel:(id)arg1 logExtra:(id)arg2;
- (void)didClickCancel:(id)arg0 logExtra:(id)arg1;
- (void)didClickClose:(id)arg0 logExtra:(id)arg1;
- (void)trackQuitPanelDislikeWithQuitMethod:(id)arg0;
- (void)dislikePanelOnVC:(id)arg0 awemeModel:(id)arg1 trackExtra:(id)arg2 selectedBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
- (void)setDislikePanelSelectedBlock:(id /* block */)arg0;
- (void)setDislikePanelCancelBlock:(id /* block */)arg0;
- (void)setDislikeMultipleSelectionBlock:(id /* block */)arg0;
- (void)setDislikeV2MultipleSelectionBlock:(id /* block */)arg0;
- (void)requestDimensionWithModel:(id)arg0 vc:(id)arg1;
- (id /* block */)dislikePanelSelectedBlock;
- (void)trackSubmitResult:(id)arg0;
- (id /* block */)dislikeMultipleSelectionBlock;
- (void)trackQuitDislikeReasonWithQuitMethod:(id)arg0;
- (id /* block */)dislikePanelCancelBlock;
- (void)submitDislikeReasonsToNegativeFilterWithInfos:(id)arg0 awemeModel:(id)arg1;
- (id /* block */)dislikeV2MultipleSelectionBlock;
- (void)optionSelectedIndex:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
