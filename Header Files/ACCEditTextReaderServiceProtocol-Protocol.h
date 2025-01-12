//
//     Generated by private class-dump
//

@class ACCTextReadEffectSelectPanelModel;
@protocol ACCTextReaderTrackerProtocol;

@protocol ACCEditTextReaderServiceProtocol <NSObject>

@property (readonly, nonatomic) ACCTextReadEffectSelectPanelModel *panelModel;
@property (readonly, nonatomic) id<ACCTextReaderTrackerProtocol> tracker;

- (BOOL)supportTextReading;
- (void)triggleTextReaderView:(id)arg0;
- (void)applyTextReader:(id)arg0 completion:(id /* block */)arg1;
- (void)removeTextReader:(id)arg0;
- (id)getTextReaderModel:(id)arg0;
- (void)updateTextReaderModel:(id)arg0;
- (unsigned long long)textSupportReading:(id)arg0;
- (void)cancelTextReaderRequest;
- (id)panelModel;
- (id)tracker;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;

@end
