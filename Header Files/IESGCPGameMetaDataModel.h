//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESGCPGameMetaDataGameAttributeModel, IESGCPGameMetaDataBizAttributeModel, IESGCPGameMetaDataComponentAttributeModel, IESGCPGameMetaDataLiveSceneAttributeModel;

@interface IESGCPGameMetaDataModel : NSObject {
    NSDictionary *_originData;
    IESGCPGameMetaDataGameAttributeModel *_gameAttributeModel;
    IESGCPGameMetaDataBizAttributeModel *_bizAttributeModel;
    IESGCPGameMetaDataComponentAttributeModel *_componentAttributeModel;
    IESGCPGameMetaDataLiveSceneAttributeModel *_liveSceneAttributeModel;
    NSString *_promoteInstanceID;
}

@property (readonly, copy, nonatomic) NSDictionary *gameInfoReportParams;
@property (copy, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) IESGCPGameMetaDataGameAttributeModel *gameAttributeModel;
@property (retain, nonatomic) IESGCPGameMetaDataBizAttributeModel *bizAttributeModel;
@property (retain, nonatomic) IESGCPGameMetaDataComponentAttributeModel *componentAttributeModel;
@property (retain, nonatomic) IESGCPGameMetaDataLiveSceneAttributeModel *liveSceneAttributeModel;
@property (copy, nonatomic) NSString *promoteInstanceID;

- (id)originData;
- (id)promoteInstanceID;
- (void)setPromoteInstanceID:(id)arg0;
- (id)gameAttributeModel;
- (id)gameInfoReportParams;
- (id)bizAttributeModel;
- (void)setOriginData:(id)arg0;
- (id)componentAttributeModel;
- (id)liveSceneAttributeModel;
- (void)setGameAttributeModel:(id)arg0;
- (void)setBizAttributeModel:(id)arg0;
- (void)setComponentAttributeModel:(id)arg0;
- (void)setLiveSceneAttributeModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;

@end
