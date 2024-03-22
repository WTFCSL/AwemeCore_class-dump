//
//     Generated by private class-dump
//

@class NSString, AWEPlaylistInfoModel;

@interface AWEPlaylistMixedList : AWEBaseApiModel {
    AWEPlaylistInfoModel *_playlistInfo;
    NSString *_itemType;
}

@property (copy, nonatomic) NSString *itemType;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistInfo;

+ (id)playlistInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)playlistInfo;
- (void)setPlaylistInfo:(id)arg0;
- (id)itemType;
- (void)setItemType:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;

@end