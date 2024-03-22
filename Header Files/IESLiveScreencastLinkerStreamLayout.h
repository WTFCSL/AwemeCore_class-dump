//
//     Generated by private class-dump
//

@class HTSInteractionStreamAppData, NSString;

@interface IESLiveScreencastLinkerStreamLayout : NSObject <IESLiveInteractiveStreamLayout> {
    HTSInteractionStreamAppData *_appData;
}

@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildStreamRegionWithSessions:(id)arg0;
- (id)streamRegionByLayoutRegion:(id)arg0;
- (void)updateLayoutOfPublisher:(id)arg0 withSessions:(id)arg1 withUserService:(id)arg2 mediaConfig:(id)arg3;
- (id)appDataWithUserService:(id)arg0;
- (void).cxx_destruct;
- (void)setAppData:(id)arg0;
- (id)appData;

@end
