//
//     Generated by private class-dump
//

@class NSString;

@interface BDMannorAbilityManager : NSObject <BDMannorAbilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sendTrackWithTrackConfig:(id)arg0 areaKey:(id)arg1 eventName:(id)arg2 dynamicParams:(id)arg3;
+ (void)sendTrackV3WithTrackConfig:(id)arg0 areaKey:(id)arg1 eventName:(id)arg2 dynamicParams:(id)arg3;
+ (id)parseRulesFromRaw:(id)arg0;

@end