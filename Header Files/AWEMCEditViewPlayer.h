//
//     Generated by private class-dump
//

@class NLEInterface_OC;

@interface AWEMCEditViewPlayer : NSObject {
    NLEInterface_OC *_session;
}

@property (retain, nonatomic) NLEInterface_OC *session;

- (void)setVideoData:(id)arg0 preview:(id)arg1;
- (void)addNLEMainVideoTrackToNLEModel:(id)arg0 withRecorderAssets:(id)arg1;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (id)session;
- (void)start;
- (void)dealloc;
- (void)pause;

@end
