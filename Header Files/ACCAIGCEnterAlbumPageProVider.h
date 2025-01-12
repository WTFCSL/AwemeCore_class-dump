//
//     Generated by private class-dump
//

@class UIImageView;
@protocol ACCOpenAlbumAssetsProtocol, ACCRecordPropService;

@interface ACCAIGCEnterAlbumPageProVider : NSObject {
    BOOL _istrack;
    UIImageView *_screenImageView;
    id<ACCOpenAlbumAssetsProtocol> _openAlbumAssetsProtocol;
    id<ACCRecordPropService> _propService;
}

@property (retain, nonatomic) UIImageView *screenImageView;
@property (nonatomic) BOOL istrack;
@property (retain, nonatomic) id<ACCOpenAlbumAssetsProtocol> openAlbumAssetsProtocol;
@property (retain, nonatomic) id<ACCRecordPropService> propService;

+ (id)sharedManager;

- (id)propService;
- (void)setPropService:(id)arg0;
- (void)setIstrack:(BOOL)arg0;
- (void)creatAlbumIsFromType:(long long)arg0 publishViewModel:(id)arg1 extensionDic:(id)arg2 dismissBlock:(id /* block */)arg3;
- (void)creatCreationisFromType:(long long)arg0 publishViewModel:(id)arg1 extensionDic:(id)arg2 dismissBlock:(id /* block */)arg3;
- (id)handleAlbumAIGCSyncTrackDicIsFromType:(long long)arg0 effectModel:(id)arg1 publishViewModel:(id)arg2;
- (void)setOpenAlbumAssetsProtocol:(id)arg0;
- (id)cameraCustomCellConfigisFromType:(long long)arg0 publishViewModel:(id)arg1 extensionDic:(id)arg2 clickAction:(id /* block */)arg3;
- (BOOL)isMainshoot:(id)arg0;
- (void)addScreenSnapshotViewToUIWindow;
- (void)removeScreenSnapshotViewToUIWindow;
- (id)openAlbumAssetsProtocol;
- (void)openCreationisFromType:(long long)arg0 publishViewModel:(id)arg1;
- (id)handleCreationAIGCSyncTrackDicIsFromType:(long long)arg0 effectModel:(id)arg1 publishViewModel:(id)arg2;
- (void)handleResultisFromType:(long long)arg0 publishViewModel:(id)arg1 context:(id)arg2 creationData:(id)arg3 uiControlHandler:(id)arg4;
- (void)enterEditorPagefilePaths:(id)arg0 publishViewModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setScreenImageView:(id)arg0;
- (id)screenImageView;
- (void)openAlbumAndCreationType:(long long)arg0 isFromType:(long long)arg1 publishViewModel:(id)arg2 extensionDic:(id)arg3 dismissBlock:(id /* block */)arg4;
- (BOOL)istrack;
- (void).cxx_destruct;

@end
