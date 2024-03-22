//
//     Generated by private class-dump
//

@class IESLiveInteractSubtitleConfig;

@interface IESLiveInteractSubtitleApi : HTSLiveApi {
    IESLiveInteractSubtitleConfig *_config;
}

@property (weak, nonatomic) IESLiveInteractSubtitleConfig *config;

- (void)updateConfig:(id)arg0;
- (void)get:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 callback:(id /* block */)arg3;
- (void)subtitleStartCheckWithRoomId:(id)arg0 callback:(id /* block */)arg1;
- (void)subtitleStopCheckWithRoomId:(id)arg0 callback:(id /* block */)arg1;
- (void)updateSubtitleSetting:(id)arg0 toState:(BOOL)arg1 callback:(id /* block */)arg2;
- (void)updateSubtitleStyle:(id)arg0 style:(long long)arg1 callback:(id /* block */)arg2;
- (void)updateSubtitleCoordinate:(id)arg0 callback:(id /* block */)arg1;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end