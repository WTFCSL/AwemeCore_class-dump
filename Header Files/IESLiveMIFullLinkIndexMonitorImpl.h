//
//     Generated by private class-dump
//

@class HTSEventContext, NSTimer, NSMutableDictionary, NSString, NSNumber;

@interface IESLiveMIFullLinkIndexMonitorImpl : NSObject <IESLiveMIFullLinkIndexMonitor> {
    NSMutableDictionary *_danmakuDataDic;
    NSMutableDictionary *_chatDisplayDataDic;
    HTSEventContext *trackContext;
    NSTimer *_acuTimer;
    NSNumber *_currentACU;
}

@property (retain, nonatomic) NSTimer *acuTimer;
@property (retain, nonatomic) NSNumber *currentACU;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableDictionary *danmakuDataDic;
@property (retain, nonatomic) NSMutableDictionary *chatDisplayDataDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)commonParams;
- (void)trackChatSelfShow;
- (void)trackFullScreenDanmakuShowDelay;
- (void)trackPortraitDanmakuShowDelay;
- (id)getCurrentFullLinkDanmakuDataModel;
- (id)getCurrentFullLinkChatDisplayDataModel;
- (id)danmakuDataDic;
- (void)setDanmakuDataDic:(id)arg0;
- (id)chatDisplayDataDic;
- (void)setChatDisplayDataDic:(id)arg0;
- (void)setCurrentACU:(id)arg0;
- (void)trackDanmakuShowDelayForFullScreen:(BOOL)arg0;
- (id)getChatSendParamsWithData:(id)arg0;
- (id)currentACU;
- (id)acuTimer;
- (void)setAcuTimer:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)onTimer;

@end
