//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageLocalLifeMatchMissionHandler : NSObject <AWEPostPageLocalLifeMatchMissionService> {
    id<AWEPostPageContext> _context;
    long long cleanLocalLifeMatchMissionSignal;
}

@property (nonatomic) long long cleanLocalLifeMatchMissionSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)arg0;
- (BOOL)isLocalLifeMatchMissionFromTask;
- (void)trackCommonMissionEventWithEventType:(long long)arg0 missionState:(long long)arg1;
- (void)trackLifeMissionEventWithEventType:(long long)arg0 idx:(long long)arg1 hasTask:(BOOL)arg2;
- (long long)cleanLocalLifeMatchMissionSignal;
- (void)setCleanLocalLifeMatchMissionSignal:(long long)arg0;
- (void).cxx_destruct;
- (id)taskID;
- (id)context;

@end