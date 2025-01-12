//
//     Generated by private class-dump
//

@class HTSEventContext, NSMutableDictionary;

@protocol IESLiveMIFullLinkIndexMonitor <NSObject>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableDictionary *danmakuDataDic;
@property (retain, nonatomic) NSMutableDictionary *chatDisplayDataDic;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)trackChatSelfShow;
- (void)trackFullScreenDanmakuShowDelay;
- (void)trackPortraitDanmakuShowDelay;
- (id)getCurrentFullLinkDanmakuDataModel;
- (id)getCurrentFullLinkChatDisplayDataModel;
- (id)danmakuDataDic;
- (void)setDanmakuDataDic:(id)arg0;
- (id)chatDisplayDataDic;
- (void)setChatDisplayDataDic:(id)arg0;

@end
