//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveFullLinkMonitor;

@interface IESLiveRoomSchemaParser : IESLiveRoomSchemaBaseParser <IESLiveSchemaParser> {
    id<IESLiveFullLinkMonitor> _fullLinkMonitor;
}

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (id)fullLinkMonitor;
- (void)setFullLinkMonitor:(id)arg0;
- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)playbackEnterRoomWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)reportMonitorDataEnterFrom:(id)arg0 enterMethod:(id)arg1 statusCode:(long long)arg2 extra:(id)arg3;
- (void)liveEnterRoomWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)switchToProfile:(id)arg0 isFirstPlay:(BOOL)arg1 showToast:(BOOL)arg2 completion:(id /* block */)arg3;
- (long long)stickerStatusWithLiveStatus:(int)arg0 isFirstPlay:(BOOL)arg1;
- (void)checkLiveStatus:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;

@end