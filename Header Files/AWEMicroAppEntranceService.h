//
//     Generated by private class-dump
//

@class NSString, NSMapTable, NSMutableDictionary;

@interface AWEMicroAppEntranceService : HTSService <AWEMicroAppEntranceService> {
    NSMapTable *_tokenToEntranceMap;
    NSMutableDictionary *_jsbAutoFixResultList;
    NSMutableDictionary *_jsbAutoFixConditionList;
}

@property (retain, nonatomic) NSMapTable *tokenToEntranceMap;
@property (retain, nonatomic) NSMutableDictionary *jsbAutoFixResultList;
@property (retain, nonatomic) NSMutableDictionary *jsbAutoFixConditionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tryToMarkNativeSchema:(id)arg0;
+ (id)p_tryToMarkSchema:(id)arg0 distributeType:(long long)arg1 subType:(id)arg2;
+ (id)p_tryToMarkSchema:(id)arg0 distributeType:(long long)arg1;

- (BOOL)isEnableEntranceForLaunchFrom:(id)arg0;
- (id)getEntranceByToken:(id)arg0;
- (BOOL)isTimorSchema:(id)arg0;
- (BOOL)isEnableEntrance;
- (id)markJsbHybridSchema:(id)arg0 APIContext:(id)arg1 PageContext:(id)arg2;
- (id)markJsbLynxSchema:(id)arg0 LynxView:(id)arg1;
- (id)markNativeSchema:(id)arg0 subType:(id)arg1;
- (BOOL)p_isShouldMarkForSchema:(id)arg0;
- (id)p_autoFixSchema:(id)arg0 distributeType:(long long)arg1 pageIdentifier:(id)arg2;
- (id)jsbAutoFixConditionList;
- (id)jsbAutoFixResultList;
- (id)tokenToEntranceMap;
- (id)p_getEntranceByToken:(id)arg0;
- (void)p_setEntrance:(id)arg0 ByToken:(id)arg1;
- (void)setTokenToEntranceMap:(id)arg0;
- (void)setJsbAutoFixResultList:(id)arg0;
- (void)setJsbAutoFixConditionList:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end