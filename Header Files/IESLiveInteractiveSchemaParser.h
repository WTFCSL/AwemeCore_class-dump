//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveInteractiveSchemaParser : NSObject <IESLiveSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)pr_startGameWithGameId:(id)arg0;
- (id)pr_startGameOpenPlatformWithParams:(id)arg0;
- (void)pr_startGameWithGameId:(id)arg0 schema:(id)arg1 source:(id)arg2 name:(id)arg3;
- (void)startGameFromIntroductionPage:(id)arg0 castScreenSwitch:(id)arg1 explainCardSwitch:(id)arg2;

@end
