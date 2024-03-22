//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEGCPLivePlayerViewProtocol <NSObject>

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ speakerButtonDidClicked;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)modernTransitionContext;
- (void)setSpeakerButtonDidClicked:(id /* block */)arg0;
- (void)updateAWEGCPAwemeModel:(id)arg0;
- (struct CGSize { double x0; double x1; })getSizeWithAWEGCPAwemeModel:(id)arg0 maxWidth:(double)arg1;
- (id /* block */)speakerButtonDidClicked;
- (void)stop;
- (void)play;
- (void)pause;
- (void)reset;
- (void)setMute:(BOOL)arg0;

@end
