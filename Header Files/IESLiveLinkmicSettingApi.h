//
//     Generated by private class-dump
//

@interface IESLiveLinkmicSettingApi : HTSLiveApi

- (void)fetchSettings:(id)arg0 secUserID:(id)arg1 callback:(id /* block */)arg2;
- (void)updateSetting:(id)arg0 scene:(id)arg1 extParams:(id)arg2 callback:(id /* block */)arg3;
- (void)fetchAudienceSettings:(id)arg0 keys:(id)arg1 callback:(id /* block */)arg2;
- (void)updateAudienceSettings:(id)arg0 settings:(id)arg1 callback:(id /* block */)arg2;

@end
