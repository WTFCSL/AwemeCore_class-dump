//
//     Generated by private class-dump
//

@class IESLiveEmojiTextParser;
@protocol IESLiveDanmakuEngineSettingsProtocol, HTSLiveTemplateProvider, IESLiveRoomServiceAdapter, IESLiveUserServiceAdapter, IESLiveWebImageService;

@interface IESLiveDanmakuNodeBaseStrategy : NSObject {
    id _metaData;
    IESLiveEmojiTextParser *_emojiTextParser;
    id<HTSLiveTemplateProvider> _templateProvider;
    id<IESLiveRoomServiceAdapter> _room;
    id<IESLiveUserServiceAdapter> _userService;
    id<IESLiveWebImageService> _webImageService;
    id<IESLiveDanmakuEngineSettingsProtocol> _danmakuSettings;
}

@property (retain, nonatomic) id metaData;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiTextParser;
@property (retain, nonatomic) id<HTSLiveTemplateProvider> templateProvider;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (retain, nonatomic) id<IESLiveUserServiceAdapter> userService;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (retain, nonatomic) id<IESLiveDanmakuEngineSettingsProtocol> danmakuSettings;

- (id)webImageService;
- (void)setWebImageService:(id)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (void)refreshNode:(id)arg0;
- (void)setSelfAwarenessStyleForNode:(id)arg0;
- (id)emojiTextParser;
- (id)danmakuSettings;
- (long long)buildingMode;
- (id)initWithMetaData:(id)arg0 diContext:(id)arg1;
- (id)buildAttrCreateParamsWithDisplayText:(id)arg0;
- (void)AsyncBuildNode:(id /* block */)arg0;
- (void)setEmojiTextParser:(id)arg0;
- (void)setDanmakuSettings:(id)arg0;
- (id)metaData;
- (BOOL)filter;
- (void).cxx_destruct;
- (void)setMetaData:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)buildNode;
- (id)templateProvider;
- (void)setTemplateProvider:(id)arg0;

@end
