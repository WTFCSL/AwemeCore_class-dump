//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveRoomBattleRecordPanel : IESLiveInteractionPopupViewController <IESHYHybridViewLifecycleProtocol> {
    UIView<IESHYContainerProtocol> *_hybridContainer;
}

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (id)hybridContainer;
- (void)setHybridContainer:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (void)p_setupSettingView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end