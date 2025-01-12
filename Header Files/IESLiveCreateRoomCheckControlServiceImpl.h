//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESLiveCreateRoomCheckControlServiceImpl : NSObject <IESLiveCreateRoomCheckControlService> {
    BOOL _healthScoreCheck;
    BOOL _fastLive;
    NSDictionary *_sp;
}

@property (nonatomic) BOOL healthScoreCheck;
@property (nonatomic) BOOL fastLive;
@property (copy, nonatomic) NSDictionary *sp;
@property (nonatomic) BOOL enableHealthScoreCheck;
@property (nonatomic) BOOL isFastLive;
@property (copy, nonatomic) NSDictionary *sourceParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (id)sourceParams;
- (void)startLiveDisableHealthScoreCheck;
- (BOOL)enableHealthScoreCheck;
- (void)setEnableHealthScoreCheck:(BOOL)arg0;
- (BOOL)isFastLive;
- (void)setIsFastLive:(BOOL)arg0;
- (void)setSourceParams:(id)arg0;
- (void)setHealthScoreCheck:(BOOL)arg0;
- (BOOL)healthScoreCheck;
- (BOOL)fastLive;
- (void)setFastLive:(BOOL)arg0;
- (id)sp;
- (void)setSp:(id)arg0;
- (void).cxx_destruct;

@end
