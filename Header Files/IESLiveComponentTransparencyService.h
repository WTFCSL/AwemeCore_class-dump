//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveComponentTransparencyService : IESLiveGeneralBaseService <IESLiveComponentTransparencyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)arg0;
+ (id)serviceActionsWithParam:(id)arg0;

- (void)liveComponentDidLoaded;
- (void)setupRoomComponentStateIfNeedChange:(BOOL)arg0;
- (void)setupComponentAlphaIfNeedTransparency:(BOOL)arg0;
- (void)checkComponentAlphaIfNeedTransparency;

@end
