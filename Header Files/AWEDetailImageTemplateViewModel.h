//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSArray, AWEDetailHeaderInfoModel, AWEDetailAwemeListDataController, AWEDetailNaviBarModel, AWEDetailDiffableMultiModelObject, NSMutableDictionary, AWEImageTemplateDetailResponse, AWEDetailUserProfileModel, NSIndexPath;

@interface AWEDetailImageTemplateViewModel : NSObject <AWEDetailViewModelProtocol> {
    BOOL _awemeListUpdated;
    NSMutableDictionary *_paramDict;
    NSIndexPath *_awemeListSectionSelectedIndexPath;
    NSString *_imageTemplateID;
    NSString *_imageTemplateJson;
    AWEDetailUserProfileModel *_verifiedUserObject;
    NSArray *_sectionControllerModelObjectArray;
    AWEDetailNaviBarModel *_naviBarObject;
    AWEDetailHeaderInfoModel *_headerInfoObject;
    AWEDetailDiffableMultiModelObject *_awemeListObject;
    AWEDetailAwemeListDataController *_awemeListDataController;
    long long _detailInfoFetchState;
    long long _awemeListFetchState;
    AWEAwemeModel *_awemeModel;
    NSArray *_cachedObjectArray;
    AWEImageTemplateDetailResponse *_imageTemplateDetailResponse;
}

@property (retain, nonatomic) AWEDetailUserProfileModel *verifiedUserObject;
@property (copy, nonatomic) NSArray *sectionControllerModelObjectArray;
@property (retain, nonatomic) AWEDetailNaviBarModel *naviBarObject;
@property (retain, nonatomic) AWEDetailHeaderInfoModel *headerInfoObject;
@property (retain, nonatomic) AWEDetailDiffableMultiModelObject *awemeListObject;
@property (retain, nonatomic) AWEDetailAwemeListDataController *awemeListDataController;
@property (nonatomic) long long detailInfoFetchState;
@property (nonatomic) long long awemeListFetchState;
@property (copy, nonatomic) NSString *imageTemplateID;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *cachedObjectArray;
@property (retain, nonatomic) AWEImageTemplateDetailResponse *imageTemplateDetailResponse;
@property (retain, nonatomic) NSString *imageTemplateJson;
@property (retain, nonatomic) NSMutableDictionary *paramDict;
@property (retain, nonatomic) NSIndexPath *awemeListSectionSelectedIndexPath;
@property (nonatomic) BOOL awemeListUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (id)paramDict;
- (void)setParamDict:(id)arg0;
- (void)configViewModelWithParamDict:(id)arg0;
- (void)fetchDetailInfo;
- (id)awemeListDataController;
- (void)fetchAwemeList;
- (BOOL)isFetchingInitialAwemeList;
- (id)sectionControllerModelObjectArray;
- (id)naviBarObject;
- (id)headerInfoObject;
- (id)awemeListObject;
- (long long)detailInfoFetchState;
- (long long)awemeListFetchState;
- (id)awemeListSectionSelectedIndexPath;
- (void)setAwemeListSectionSelectedIndexPath:(id)arg0;
- (BOOL)awemeListUpdated;
- (void)setAwemeListUpdated:(BOOL)arg0;
- (void)setDetailInfoFetchState:(long long)arg0;
- (void)setCachedObjectArray:(id)arg0;
- (void)setHeaderInfoObject:(id)arg0;
- (void)setNaviBarObject:(id)arg0;
- (void)setAwemeListFetchState:(long long)arg0;
- (id)cachedObjectArray;
- (void)setAwemeListObject:(id)arg0;
- (void)setAwemeListDataController:(id)arg0;
- (id)imageTemplateJson;
- (id)imageTemplateID;
- (void)setImageTemplateID:(id)arg0;
- (void)setImageTemplateJson:(id)arg0;
- (void)p_generateUIModelsFromResponse:(id)arg0;
- (void)setImageTemplateDetailResponse:(id)arg0;
- (id)verifiedUserObject;
- (void)setVerifiedUserObject:(id)arg0;
- (void)setSectionControllerModelObjectArray:(id)arg0;
- (id)imageTemplateDetailResponse;
- (void).cxx_destruct;

@end