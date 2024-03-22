//
//     Generated by private class-dump
//

@class IESLiveInteractiveMediaService, NSString, IESLiveScreencastLinkerStreamLayout;
@protocol IESLiveScreencastLinkerAnchorInstanceDelegate;

@interface IESLiveScreencastLinkerAnchorInstance : NSObject <IESLiveInteractiveMediaServiceDelegate> {
    id<IESLiveScreencastLinkerAnchorInstanceDelegate> _delegate;
    IESLiveInteractiveMediaService *_mediaService;
    IESLiveScreencastLinkerStreamLayout *_streamLayout;
}

@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveScreencastLinkerStreamLayout *streamLayout;
@property (weak, nonatomic) id<IESLiveScreencastLinkerAnchorInstanceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)streamLayout;
- (void)setStreamLayout:(id)arg0;
- (void)stopInteract;
- (void)startInteract;
- (void)muteRemoteAudioStreamWithLinkmicID:(id)arg0 mute:(BOOL)arg1 reason:(id)arg2;
- (BOOL)needPlayOuxAuxAudio;
- (void)interactiveMediaServiceDidStart:(id)arg0;
- (void)interactiveMediaService:(id)arg0 receivesError:(id)arg1;
- (void)interactiveMediaService:(id)arg0 firstRemoteAudioFrameWithLinkmicUid:(id)arg1;
- (void)interactiveMediaService:(id)arg0 didOfflineOfUid:(id)arg1 sessions:(id)arg2 reason:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)mediaService;
- (void)setMediaService:(id)arg0;

@end