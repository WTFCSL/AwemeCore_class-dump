//
//     Generated by private class-dump
//

@class AWELiveGameTagInfoModel;

@interface AWELiveRoomGameDataModel : AWEBaseApiModel {
    long long _hasGameTagInfo;
    AWELiveGameTagInfoModel *_gameTagInfo;
}

@property (nonatomic) long long hasGameTagInfo;
@property (retain, nonatomic) AWELiveGameTagInfoModel *gameTagInfo;

- (id)gameTagInfo;
- (long long)hasGameTagInfo;
- (void)setHasGameTagInfo:(long long)arg0;
- (void)setGameTagInfo:(id)arg0;
- (void).cxx_destruct;

@end