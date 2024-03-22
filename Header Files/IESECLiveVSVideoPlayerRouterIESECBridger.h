//
//     Generated by private class-dump
//

@class NSString;
@protocol IESVSVideoPlayerRouter;

@interface IESECLiveVSVideoPlayerRouterIESECBridger : NSObject <IESECLiveVSVideoPlayerRouter> {
    id<IESVSVideoPlayerRouter> _protoObj;
}

@property (retain, nonatomic) id<IESVSVideoPlayerRouter> protoObj;
@property (nonatomic, getter=isMuted, setter=setMute:) BOOL muted;
@property (readonly, nonatomic, getter=getCurrentPlaybackTime) double currentPlaybackTime;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playerFrame;
@property (nonatomic) double startLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (double)getCurrentPlaybackTime;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (void)seekVideoWithProgress:(double)arg0 complete:(id /* block */)arg1;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;
- (void)stop;
- (void)play;
- (void)pause;
- (void)pause:(BOOL)arg0;
- (void)setMute:(BOOL)arg0;
- (BOOL)isMuted;
- (void)replay;
- (double)startLocation;
- (void)setStartLocation:(double)arg0;

@end