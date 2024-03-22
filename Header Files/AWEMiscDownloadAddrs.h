//
//     Generated by private class-dump
//

@class AWEURLModel;

@interface AWEMiscDownloadAddrs : AWEBaseApiModel {
    AWEURLModel *_snapchat;
    AWEURLModel *_lite;
    AWEURLModel *_suffixScene;
}

@property (retain, nonatomic) AWEURLModel *snapchat;
@property (retain, nonatomic) AWEURLModel *lite;
@property (retain, nonatomic) AWEURLModel *suffixScene;

+ (id)snapchatJSONTransformer;
+ (id)liteJSONTransformer;
+ (id)suffixSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)snapchat;
- (void)setSnapchat:(id)arg0;
- (id)lite;
- (void)setLite:(id)arg0;
- (id)suffixScene;
- (void)setSuffixScene:(id)arg0;
- (void).cxx_destruct;

@end