//
//     Generated by private class-dump
//

@class AWEAwemeModel;

@protocol AWEPermissionContext <NSObject>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) long long sceneType;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg0;

@optional

- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg0;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;

@end
