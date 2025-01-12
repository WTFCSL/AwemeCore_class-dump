//
//     Generated by private class-dump
//

@class NSString, ACCTrimCropBarItem;
@protocol ACCTrimBeatEditServiceProtocol, ACCTrimCropSequencePieceServiceProtocol, ACCAdvanceEditMainTrackActionServiceProtocol, ACCTrimCropEditorFlagProtocol, ACCEditServiceProtocol;

@interface ACCTrimBeatEditComponent : ACCTrimCropBaseComponent <ACCTrimBeatEditServiceDelegate> {
    BOOL _isSlidesAndMusicDisableBeat;
    ACCTrimCropBarItem *_barItem;
    id<ACCTrimCropSequencePieceServiceProtocol> _sequencePieceService;
    id<ACCEditServiceProtocol> _editService;
    id<ACCTrimBeatEditServiceProtocol> _beatService;
    id<ACCAdvanceEditMainTrackActionServiceProtocol> _mainTrackActionService;
    id<ACCTrimCropEditorFlagProtocol> _editorFlagService;
}

@property (retain, nonatomic) ACCTrimCropBarItem *barItem;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCTrimBeatEditServiceProtocol> beatService;
@property (weak, nonatomic) id<ACCAdvanceEditMainTrackActionServiceProtocol> mainTrackActionService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (nonatomic) BOOL isSlidesAndMusicDisableBeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)componentDidLoad;
- (void)componentDidAppear;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)barItem;
- (id)beatService;
- (void)setBeatService:(id)arg0;
- (id)sequencePieceService;
- (void)setSequencePieceService:(id)arg0;
- (id)mainTrackActionService;
- (void)setMainTrackActionService:(id)arg0;
- (id)editorFlagService;
- (void)setEditorFlagService:(id)arg0;
- (void)setBarItem:(id)arg0;
- (void)setIsSlidesAndMusicDisableBeat:(BOOL)arg0;
- (BOOL)isSlidesAndMusicDisableBeat;
- (void)musicBeatStateChange:(BOOL)arg0;
- (void).cxx_destruct;
- (void)initData;

@end
