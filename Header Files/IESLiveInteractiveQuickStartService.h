//
//     Generated by private class-dump
//

@class NSString, IESLiveInteractiveQuickStartAPI, HTSLiveRoom;

@interface IESLiveInteractiveQuickStartService : NSObject <IESLiveInteractiveQuickStartServiceProtocol> {
    id /* block */ monitorBlock;
    HTSLiveRoom *_room;
    IESLiveInteractiveQuickStartAPI *_api;
}

@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) IESLiveInteractiveQuickStartAPI *api;
@property (copy, nonatomic) id /* block */ monitorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMonitorBlock:(id /* block */)arg0;
- (id /* block */)monitorBlock;
- (void)updateWithRoom:(id)arg0;
- (void)quickStartMultiAudioWithScene:(long long)arg0 requestSource:(long long)arg1 extraParam:(id)arg2 completion:(id /* block */)arg3;
- (void)monitorWithAPIPath:(id)arg0 requestTime:(double)arg1 response:(id)arg2 error:(id)arg3 extra:(id)arg4;
- (void)traceWithName:(id)arg0 step:(id)arg1 extra:(id)arg2;
- (void)dealWithInitResponse:(id)arg0 error:(id)arg1 model:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)isValidResponse:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)api;
- (id)initWithRoom:(id)arg0;
- (void)setApi:(id)arg0;

@end
