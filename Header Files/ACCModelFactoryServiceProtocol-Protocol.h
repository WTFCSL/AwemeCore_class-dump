//
//     Generated by private class-dump
//

@protocol ACCModelFactoryServiceProtocol <NSObject>

- (id)createUserModel;
- (id)createChallengeModelWithItemID:(id)arg0 challengeName:(id)arg1;
- (id)createCutSameTemplateModelWithEffect:(id)arg0 isVideoAndPicMixed:(BOOL)arg1;
- (id)createMVTemplateWithEffectModel:(id)arg0 urlPrefix:(id)arg1;
- (id)createTextExtra;
- (id)createTextExtra:(long long)arg0;
- (id)createTextExtra:(long long)arg0 subType:(long long)arg1;
- (id)createMusicModel;
- (id)createMusicModelWithJsonDictionary:(id)arg0;
- (id)createAwemeModelWithJsonDictionary:(id)arg0;

@end