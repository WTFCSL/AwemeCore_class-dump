//
//     Generated by private class-dump
//

@protocol AWEStudioMusicModelProtocol;

@interface AWEStudioMusicDetailResponse : ACCBaseApiModel {
    id<AWEStudioMusicModelProtocol> _musicInfo;
}

@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> musicInfo;

+ (id)musicInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)musicInfo;
- (void)setMusicInfo:(id)arg0;
- (void).cxx_destruct;

@end
