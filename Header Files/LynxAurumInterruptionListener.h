//
//     Generated by private class-dump
//

@interface LynxAurumInterruptionListener : NSObject {
    struct AudioIOS { void /* function */ **x0; struct AudioEngine *x1; BOOL x2; struct OpaqueAudioComponentInstance *x3; BOOL x4; BOOL x5; id x6; } *backend;
}

@property (nonatomic) struct AudioIOS { void /* function */ **x0; struct AudioEngine *x1; BOOL x2; struct OpaqueAudioComponentInstance *x3; BOOL x4; BOOL x5; id x6; } *backend;

- (void)onAppDidBecomeActive:(id)arg0;
- (void)onAudioInterrupt:(id)arg0;
- (void)onAudioSessionReset;
- (struct AudioIOS { void /* function */ **x0; struct AudioEngine *x1; BOOL x2; struct OpaqueAudioComponentInstance *x3; BOOL x4; BOOL x5; id x6; } *)backend;
- (id)init:(struct AudioIOS { void /* function */ **x0; struct AudioEngine *x1; BOOL x2; struct OpaqueAudioComponentInstance *x3; BOOL x4; BOOL x5; id x6; } *)arg0;
- (void)setBackend:(struct AudioIOS { void /* function */ **x0; struct AudioEngine *x1; BOOL x2; struct OpaqueAudioComponentInstance *x3; BOOL x4; BOOL x5; id x6; } *)arg0;

@end