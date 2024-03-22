//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveWelfareJSBHandler : NSObject <IESLivePiperHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (void)registerGetDonationActivityWithBridge:(id)arg0;
- (void)registerSetDonationActivityWithBridge:(id)arg0;
- (void)registerRemoveDonationActivityWithBridge:(id)arg0;
- (void)registerShowLiveFloatWindowWithBridge:(id)arg0;
- (void)registerHideLiveFloatWindowWithBridge:(id)arg0;
- (void)registerIsLiveFloatWindowShowWithBridge:(id)arg0;
- (void)registerGetDonationPanelFrequencyWithBridge:(id)arg0;
- (void)registerOpenDonationFrequencySettingWithBridge:(id)arg0;

@end
