//
//     Generated by private class-dump
//

@class NSString, IESLiveShareViewToPanelGameInfoModel, NSNumber;

@interface IESLiveShareViewToPanelParamModel : IESLiveBridgeModel {
    NSString *_viewId;
    NSString *_type;
    NSString *_qrCodeScheme;
    IESLiveShareViewToPanelGameInfoModel *_gameInfo;
    NSString *_qrShareScene;
    NSNumber *_posterActivityVideoType;
    NSString *_publishMusicId;
    NSString *_contentType;
    NSString *_moduleType;
    NSString *_unmodifiablePublishParams;
    NSString *_saveViewId;
    NSString *_schemaParams;
    NSString *_logParams;
}

@property (copy, nonatomic) NSString *viewId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *qrCodeScheme;
@property (retain, nonatomic) IESLiveShareViewToPanelGameInfoModel *gameInfo;
@property (copy, nonatomic) NSString *qrShareScene;
@property (retain, nonatomic) NSNumber *posterActivityVideoType;
@property (copy, nonatomic) NSString *publishMusicId;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *unmodifiablePublishParams;
@property (copy, nonatomic) NSString *saveViewId;
@property (copy, nonatomic) NSString *schemaParams;
@property (copy, nonatomic) NSString *logParams;

+ (id)modelCustomPropertyMapper;

- (void)setUnmodifiablePublishParams:(id)arg0;
- (id)unmodifiablePublishParams;
- (void)setSchemaParams:(id)arg0;
- (id)schemaParams;
- (id)logParams;
- (void)setLogParams:(id)arg0;
- (void)setGameInfo:(id)arg0;
- (id)qrShareScene;
- (id)qrCodeScheme;
- (void)setQrCodeScheme:(id)arg0;
- (void)setQrShareScene:(id)arg0;
- (id)posterActivityVideoType;
- (void)setPosterActivityVideoType:(id)arg0;
- (id)publishMusicId;
- (void)setPublishMusicId:(id)arg0;
- (id)saveViewId;
- (void)setSaveViewId:(id)arg0;
- (void)setContentType:(id)arg0;
- (id)contentType;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;
- (id)moduleType;
- (void)setModuleType:(id)arg0;
- (id)viewId;
- (void)setViewId:(id)arg0;
- (id)gameInfo;

@end
