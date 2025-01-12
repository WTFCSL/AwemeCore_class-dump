//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveKTVFastStartKtvLiveSchemeParser : IESLiveRoomSchemaBaseParser <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)p_canSwitchScene:(unsigned long long)arg0;
- (void)p_switchSceneForAudio:(id)arg0;
- (void)p_switchSceneForVideo:(id)arg0;
- (void)popFirstVCIfNeed:(id /* block */)arg0;
- (id)modelToMap:(id)arg0;

@end
