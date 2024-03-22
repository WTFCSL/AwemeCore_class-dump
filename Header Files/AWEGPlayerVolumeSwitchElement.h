//
//     Generated by private class-dump
//

@class NSNumber;

@interface AWEGPlayerVolumeSwitchElement : AWEGPlayerInteractionBaseElement {
    NSNumber *_volumeHandlerID;
}

@property (retain, nonatomic) NSNumber *volumeHandlerID;

- (void)initializeElement;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (void)updateVolumeSwitch;
- (void)setVolumeHandlerID:(id)arg0;
- (void)volumeSwitchDidChange:(id)arg0;
- (id)volumeHandlerID;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)dealloc;

@end
