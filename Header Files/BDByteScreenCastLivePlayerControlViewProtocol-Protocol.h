//
//     Generated by private class-dump
//

@class UIView;

@protocol BDByteScreenCastLivePlayerControlViewProtocol <BDSCControlView>

@property (readonly, nonatomic) unsigned long long castStatus;
@property (retain, nonatomic) UIView *containerView;

- (void)setViewResponderDisable:(BOOL)arg0;
- (unsigned long long)castStatus;
- (void)updateControlViewWithLayoutModel:(id)arg0;
- (void)updateCastDanmakuShow:(BOOL)arg0;
- (void)updateCastDanmakuAuth:(BOOL)arg0 enable:(BOOL)arg1 animation:(BOOL)arg2;
- (void)setActionButtonGreyMode:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;

@end
