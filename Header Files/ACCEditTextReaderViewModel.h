//
//     Generated by private class-dump
//

@class ACCCameraSubscription, ACCTextReadEffectSelectPanelModel, ACCEditTextReaderConfig, NSString;
@protocol ACCEditServiceProtocol, ACCTextReaderTrackerProtocol;

@interface ACCEditTextReaderViewModel : ACCEditViewModel <ACCEditTextReaderServiceProtocol> {
    ACCEditTextReaderConfig *_triggleConfig;
    id<ACCEditServiceProtocol> _editService;
    ACCCameraSubscription *_subscription;
    ACCTextReadEffectSelectPanelModel *_panelModel;
    id<ACCTextReaderTrackerProtocol> _tracker;
}

@property (retain, nonatomic) ACCEditTextReaderConfig *triggleConfig;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCTextReadEffectSelectPanelModel *panelModel;
@property (retain, nonatomic) id<ACCTextReaderTrackerProtocol> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)draftFolder;
- (id)editService;
- (void)setEditService:(id)arg0;
- (BOOL)supportTextReading;
- (void)triggleTextReaderView:(id)arg0;
- (void)applyTextReader:(id)arg0 completion:(id /* block */)arg1;
- (void)removeTextReader:(id)arg0;
- (id)getTextReaderModel:(id)arg0;
- (void)updateTextReaderModel:(id)arg0;
- (unsigned long long)textSupportReading:(id)arg0;
- (void)cancelTextReaderRequest;
- (id)panelModel;
- (void)setPanelModel:(id)arg0;
- (id)triggleConfig;
- (void)willDismissTextReaderView;
- (void)setTriggleConfig:(id)arg0;
- (void)setupRepoManagerIfNeeded;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;

@end
