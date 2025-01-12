//
//     Generated by private class-dump
//

@class NSString, AWEMusicAudioKTVSingerModel, NSNumber, AWEURLModel;

@interface AWEMusicAudioKTVModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_roomID;
    long long _totalUserCount;
    long long _scene;
    AWEURLModel *_backgroudImage;
    AWEMusicAudioKTVSingerModel *_singer;
    NSString *_extra;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) long long totalUserCount;
@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEURLModel *backgroudImage;
@property (retain, nonatomic) AWEMusicAudioKTVSingerModel *singer;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroudImageJSONTransformer;
+ (id)singerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (long long)totalUserCount;
- (void)setTotalUserCount:(long long)arg0;
- (id)backgroudImage;
- (void)setBackgroudImage:(id)arg0;
- (id)singer;
- (void)setSinger:(id)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (id)extra;
- (long long)scene;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
