//
//     Generated by private class-dump
//

@class NSString, IESLiveInteractiveMediaService, HTSLiveLinkMicMethod, IESLiveInteractionGuestPreviewView;

@interface IESLiveBigPartyResumeFromPKData : NSObject <IESLiveInteractionLinkerResumeContextProtocol> {
    BOOL _hasSwitchSceneMessage;
    IESLiveInteractiveMediaService *_mediaService;
    IESLiveInteractionGuestPreviewView *_previewView;
    HTSLiveLinkMicMethod *_switchSceneMessage;
}

@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveInteractionGuestPreviewView *previewView;
@property (nonatomic) BOOL hasSwitchSceneMessage;
@property (retain, nonatomic) HTSLiveLinkMicMethod *switchSceneMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)switchSceneMessage;
- (void)setSwitchSceneMessage:(id)arg0;
- (BOOL)hasSwitchSceneMessage;
- (void)setHasSwitchSceneMessage:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setPreviewView:(id)arg0;
- (id)previewView;
- (id)mediaService;
- (void)setMediaService:(id)arg0;

@end
