//
//     Generated by private class-dump
//

@class NSString, ACCTrimCropBarItem, DUXActionSheet;
@protocol ACCTrimCropEditorConfigProtocol, ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider, ACCTCETrackEventServiceProtocol;

@interface ACCTCEDeleteEditorBar : NSObject <ACCTrimCropSequencePieceServiceListener, DUXActionSheetDelegate, ACCTrimCropBarProtocol> {
    id<IESServiceProvider> _serviceProvider;
    ACCTrimCropBarItem *_barItem;
    id<ACCTrimCropSequencePieceServiceProtocol> _sequencePieceService;
    id<ACCTCETrackEventServiceProtocol> _trackEventService;
    id<ACCTrimCropEditorConfigProtocol> _editorConfig;
    DUXActionSheet *_actionSheet;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCTrimCropBarItem *barItem;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (weak, nonatomic) id<ACCTrimCropEditorConfigProtocol> editorConfig;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)arg0 didClickButtonAtIndex:(long long)arg1;
- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)setEditorConfig:(id)arg0;
- (id)editorConfig;
- (id)barItem;
- (id)sequencePieceService;
- (void)setSequencePieceService:(id)arg0;
- (id)trackEventService;
- (void)setTrackEventService:(id)arg0;
- (void)sequencePieceService:(id)arg0 didTransferToIndex:(long long)arg1 isAutoTransfer:(BOOL)arg2;
- (void)sequencePieceService:(id)arg0 didChangedAtAddedIndexSet:(id)arg1 deletedIndexSet:(id)arg2;
- (void)setBarItem:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;
- (void)setActionSheet:(id)arg0;
- (id)actionSheet;

@end