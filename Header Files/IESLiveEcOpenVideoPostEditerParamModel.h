//
//     Generated by private class-dump
//

@class IESLiveEcOpenVideoPostEditerPostMaterialModel, IESLiveEcOpenVideoPostEditerCommentInfoModel;

@interface IESLiveEcOpenVideoPostEditerParamModel : IESLiveBridgeModel {
    BOOL _isShowPanel;
    IESLiveEcOpenVideoPostEditerCommentInfoModel *_commentInfo;
    IESLiveEcOpenVideoPostEditerPostMaterialModel *_postMaterial;
}

@property (retain, nonatomic) IESLiveEcOpenVideoPostEditerCommentInfoModel *commentInfo;
@property (nonatomic) BOOL isShowPanel;
@property (retain, nonatomic) IESLiveEcOpenVideoPostEditerPostMaterialModel *postMaterial;

+ (id)modelCustomPropertyMapper;

- (void)setCommentInfo:(id)arg0;
- (BOOL)isShowPanel;
- (void)setIsShowPanel:(BOOL)arg0;
- (id)postMaterial;
- (void)setPostMaterial:(id)arg0;
- (void).cxx_destruct;
- (id)commentInfo;

@end
