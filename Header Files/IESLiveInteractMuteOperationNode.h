//
//     Generated by private class-dump
//

@interface IESLiveInteractMuteOperationNode : NSObject {
    BOOL _mute;
    BOOL _force;
    BOOL _noRequestOnMuteSelf;
    unsigned long long _state;
}

@property (nonatomic) BOOL mute;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL noRequestOnMuteSelf;

- (BOOL)noRequestOnMuteSelf;
- (void)setNoRequestOnMuteSelf:(BOOL)arg0;
- (void)setForce:(BOOL)arg0;
- (BOOL)mute;
- (BOOL)force;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (void)setMute:(BOOL)arg0;

@end
