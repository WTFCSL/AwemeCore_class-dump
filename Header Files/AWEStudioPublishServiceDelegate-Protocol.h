//
//     Generated by private class-dump
//

@protocol AWEStudioPublishServiceDelegate <NSObject>

- (BOOL)isHotUser;
- (BOOL)shouldMuteDownloadWithMusic:(id)arg0;
- (void)showMuteDownloadAlertWithConfirmHandler:(id /* block */)arg0 cancelHandler:(id /* block */)arg1 logParams:(id)arg2;
- (BOOL)isTeenMode;
- (BOOL)enableHashtag;
- (void)setLogPassback:(id)arg0 referString:(id)arg1;
- (id)feedLogPassbackWithReferString:(id)arg0;
- (BOOL)isBindedToutiao;
- (id)getIMSettingModel;
- (BOOL)enableShowPrivateOption;
- (void)requestPublishRecommendHashTagsWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)sharePublishedAwemeIfNeeded:(id)arg0 publishModel:(id)arg1;
- (void)savePublishedAwemeIfNeeded:(id)arg0 publishModel:(id)arg1 completion:(id /* block */)arg2;
- (void)tapticEngineManagerTap;
- (void)tapticEngineManagerNotifySuccess;
- (void)tapticEngineManagerNotifyFailure;
- (void)hashtagInputSuggestionAdtrackWithExtra:(id)arg0 inputSuggestionModel:(id)arg1;
- (void)publishCheckPrivatePolicyStatus;
- (void)updateSettingSyncWithStatus:(BOOL)arg0;
- (void)requestBindToToutiaoWithCompletion:(id /* block */)arg0;
- (id)newAwemeModel;
- (id)image:(id)arg0 ResizeToSize:(struct CGSize { double x0; double x1; })arg1;
- (void)landingToSkylightWithTask:(id)arg0;
- (BOOL)commonConfigShouldLandingFamiliarTab;
- (BOOL)commonConfigFamiliarTabInHomepage;
- (id)deviceID;

@end
