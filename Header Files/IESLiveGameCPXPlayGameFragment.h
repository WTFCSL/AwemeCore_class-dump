//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameCPXPlayGameFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveAudiencePullStreamUpdateSubscriber, IESLiveSocialInteractAction> {
    BOOL _openXPlayFailedToastFrequencyControl;
    BOOL _teenToastFrequencyControl;
    long long _liveCertFrequencyControl;
}

@property (nonatomic) BOOL openXPlayFailedToastFrequencyControl;
@property (nonatomic) BOOL teenToastFrequencyControl;
@property (nonatomic) long long liveCertFrequencyControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)showToast:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)didJoinChannelWithLayout:(id)arg0;
- (void)pullStreamDidUpdate:(id)arg0 currentQualityKey:(id)arg1;
- (void)setLiveCertFrequencyControl:(long long)arg0;
- (id)xplayGameInterface;
- (void)openLiveCertAlertIfNeed;
- (void)openXPlay:(id)arg0;
- (long long)liveCertFrequencyControl;
- (BOOL)openXPlayFailedToastFrequencyControl;
- (void)setOpenXPlayFailedToastFrequencyControl:(BOOL)arg0;
- (void)resetOpenXPlayFrequency;
- (BOOL)teenToastFrequencyControl;
- (void)setTeenToastFrequencyControl:(BOOL)arg0;
- (void)resetTeenToastFrequency;
- (void)messageReceived:(id)arg0;

@end