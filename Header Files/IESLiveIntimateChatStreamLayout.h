//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveIntimateChatStreamLayout : NSObject <IESLiveInteractiveStreamLayout> {
    BOOL _seiFieldsSimplifiedUid;
}

@property (nonatomic) BOOL seiFieldsSimplifiedUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)streamRegionByLayoutRegion:(id)arg0;
- (void)updateLayoutOfPublisher:(id)arg0 withSessions:(id)arg1 withUserService:(id)arg2 mediaConfig:(id)arg3;
- (BOOL)seiFieldsSimplifiedUid;
- (void)setSeiFieldsSimplifiedUid:(BOOL)arg0;
- (id)init;

@end
