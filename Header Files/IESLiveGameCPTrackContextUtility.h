//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameCPTrackContextUtility : NSObject <IESLiveGameCPTrackContextUtilityInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)util;

- (void)reportGameCPEvent:(id)arg0 moduleName:(id)arg1 routeParams:(id)arg2 locationParams:(id)arg3 moduleAttr:(id)arg4 extraParams:(id)arg5;
- (id)gameCPPublicContextParams;

@end
