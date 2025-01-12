//
//     Generated by private class-dump
//

@class NSString, NLEInterface_OC, NSMutableDictionary, NSHashTable, AWEVideoPublishViewModel, NLEEditor_OC, ACCNLELogger;
@protocol ACCEditCanvasProtocol, IESServiceProvider;

@interface ACCNLEEditorBuilder : NSObject <ACCEditSessionBuilderProtocol> {
    BOOL _doNotRenderWhenNotActive;
    BOOL _isInfini;
    id<ACCEditCanvasProtocol> _canvas;
    NLEInterface_OC *_nle;
    ACCNLELogger *_logger;
    AWEVideoPublishViewModel *_publishModel;
    NSHashTable *_subscribers;
    id<IESServiceProvider> _serviceResolver;
    NSMutableDictionary *_slotNameUserInfoMap;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NLEInterface_OC *nle;
@property (readonly, nonatomic) NLEEditor_OC *editor;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (weak, nonatomic) id<IESServiceProvider> serviceResolver;
@property (retain, nonatomic) NSMutableDictionary *slotNameUserInfoMap;
@property (weak, nonatomic) id<ACCEditCanvasProtocol> canvas;
@property (nonatomic) BOOL doNotRenderWhenNotActive;
@property (retain, nonatomic) ACCNLELogger *logger;
@property (nonatomic) BOOL isInfini;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)nle;
- (void)setNle:(id)arg0;
- (void)setFirstRenderBlk:(id /* block */)arg0;
- (void)setFailedToPlayBlk:(id /* block */)arg0;
- (void)setNthRenderBlk:(id /* block */)arg0;
- (void)setPrepareDoneBlk:(id /* block */)arg0;
- (id)initWithPublishModel:(id)arg0;
- (void)resetEditSessionWithPublishModel:(id)arg0;
- (void)configResolver:(id)arg0;
- (void)setIsInfini:(BOOL)arg0;
- (BOOL)isInfini;
- (id)serviceResolver;
- (void)setServiceResolver:(id)arg0;
- (void)addEditSessionListener:(id)arg0;
- (id)buildEditSessionWithContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setDoNotRenderWhenNotActive:(BOOL)arg0;
- (void)updateCanvasContent;
- (void)_createNLEWithPublishModel:(id)arg0;
- (void)_createNLEWithPublishModel:(id)arg0 doNotRender:(BOOL)arg1;
- (BOOL)doNotRenderWhenNotActive;
- (id)slotNameUserInfoMap;
- (void)regenerateReverseAssetIfNeededAndCommitRender;
- (void)restoreStickerUserInfoToNLE;
- (id)initWithPublishModel:(id)arg0 doNotRender:(BOOL)arg1;
- (void)setSlotNameUserInfoMap:(id)arg0;
- (id)logger;
- (void).cxx_destruct;
- (id)subscribers;
- (void)setCanvas:(id)arg0;
- (id)editor;
- (id)canvas;
- (void)setLogger:(id)arg0;
- (void)setSubscribers:(id)arg0;

@end
