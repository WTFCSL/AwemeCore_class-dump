//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdFeedSlardarManager : HTSService <AWEGokuPluginTargetProtocol, AWEAdFeedSlardarManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)willDisplayCellWithContext:(id)arg0;
- (void)didEndDisplayingCellWithContext:(id)arg0;
- (void)reportInfoWithAdCid:(id)arg0 topviewCid:(id)arg1 logExtra:(id)arg2;
- (void)reportInfoIsAdShowing:(BOOL)arg0;
- (void)reportInfoWithAdCid:(id)arg0 AndLogExtra:(id)arg1;
- (unsigned long long)moduleNames;

@end
