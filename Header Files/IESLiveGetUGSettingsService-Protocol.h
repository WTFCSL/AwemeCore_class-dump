//
//     Generated by private class-dump
//

@protocol IESLiveGetUGSettingsService <NSObject>

- (double)currentServerTimestampInMS;
- (void)getUGStaticSettingsWithKeys:(id)arg0 completion:(id /* block */)arg1 waitInit:(BOOL)arg2;
- (void)getUGDynamicSettingsWithKeys:(id)arg0 completion:(id /* block */)arg1 waitInit:(BOOL)arg2;
- (void)uploadTaskWithToken:(id)arg0 uniqueID:(id)arg1 extra:(id)arg2 extraParams:(id)arg3 completion:(id /* block */)arg4;

@end
