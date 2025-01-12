//
//     Generated by private class-dump
//

@class AWETemplateListTemplateInfoResponseModel, NSString, NSDictionary, NSArray, AWEImageTemplateListDataTransfomer, NSObject, NSIndexPath;
@protocol OS_dispatch_group;

@interface AWEImageTemplateEditViewModel : ACCEditViewModel <AWEImageTemplateDataProtocol> {
    BOOL _shouldInsertTemplateAtFirst;
    NSArray *_templateCategoriesArray;
    NSArray *_imageTemplatesArray;
    AWETemplateListTemplateInfoResponseModel *_insertTemplateModel;
    id /* block */ _fetchTemplateListPannelResponseCallBack;
    id /* block */ _fetchTemplateListCategoryResponseCallBack;
    id /* block */ _fetchInsertTemplateInfoCallBack;
    NSString *_imageTemplateDir;
    NSString *_draftDir;
    NSDictionary *_authorAvatar;
    NSDictionary *_commonParams;
    NSDictionary *_commonTrackParams;
    NSIndexPath *_lastSelectedTemplateIndexPath;
    NSIndexPath *_currentSelectedTemplateIndexPath;
    NSIndexPath *_lastExportTemplateIndexPath;
    double _timeWhenStartApplyTemplate;
    long long _allowTemplateType;
    AWEImageTemplateListDataTransfomer *_modelDataHelper;
    NSString *_insertTemplateID;
    NSObject<OS_dispatch_group> *_fetchTemplateListGroup;
}

@property (retain, nonatomic) AWEImageTemplateListDataTransfomer *modelDataHelper;
@property (copy, nonatomic) NSString *imageTemplateDir;
@property (copy, nonatomic) NSString *draftDir;
@property (copy, nonatomic) NSString *insertTemplateID;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSObject<OS_dispatch_group> *fetchTemplateListGroup;
@property (readonly, copy, nonatomic) NSString *templateIDInDraftModel;
@property (nonatomic) BOOL shouldInsertTemplateAtFirst;
@property (copy, nonatomic) NSDictionary *authorAvatar;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (retain, nonatomic) NSIndexPath *lastSelectedTemplateIndexPath;
@property (retain, nonatomic) NSIndexPath *currentSelectedTemplateIndexPath;
@property (retain, nonatomic) NSIndexPath *lastExportTemplateIndexPath;
@property (nonatomic) double timeWhenStartApplyTemplate;
@property (nonatomic) long long allowTemplateType;
@property (retain, nonatomic) NSArray *templateCategoriesArray;
@property (retain, nonatomic) NSArray *imageTemplatesArray;
@property (retain, nonatomic) AWETemplateListTemplateInfoResponseModel *insertTemplateModel;
@property (copy, nonatomic) id /* block */ fetchTemplateListPannelResponseCallBack;
@property (copy, nonatomic) id /* block */ fetchTemplateListCategoryResponseCallBack;
@property (copy, nonatomic) id /* block */ fetchInsertTemplateInfoCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearImageTemplateCache;
+ (void)clearDownloadedCache;
+ (id)getTemplateUnzipPathWithTemplateID:(id)arg0;
+ (id)getTemplateInfoModelArrayFrom:(id)arg0;

- (void)setCommonParams:(id)arg0;
- (id)commonParams;
- (id)authorAvatar;
- (void)setAuthorAvatar:(id)arg0;
- (id)commonTrackParams;
- (void)setCommonTrackParams:(id)arg0;
- (void)setFetchTemplateListPannelResponseCallBack:(id /* block */)arg0;
- (void)setFetchTemplateListCategoryResponseCallBack:(id /* block */)arg0;
- (void)setCurrentSelectedTemplateIndexPath:(id)arg0;
- (id)currentSelectedTemplateIndexPath;
- (void)setLastSelectedTemplateIndexPath:(id)arg0;
- (void)setShouldInsertTemplateAtFirst:(BOOL)arg0;
- (void)setFetchInsertTemplateInfoCallBack:(id /* block */)arg0;
- (BOOL)shouldInsertTemplateAtFirst;
- (id)templateIDInDraftModel;
- (void)fetchDefaultTemplateDataWithShouldInsertTemplateAtFirst:(BOOL)arg0 insertTemplateModelID:(id)arg1;
- (void)setTimeWhenStartApplyTemplate:(double)arg0;
- (id)lastSelectedTemplateIndexPath;
- (void)fetchInsertTemplateInfoWithTemplateID:(id)arg0;
- (void)fetchTemplateDataWithcurrentImageURI:(id)arg0 cropImageInfo:(id)arg1;
- (id /* block */)fetchInsertTemplateInfoCallBack;
- (id)insertTemplateModel;
- (void)setInsertTemplateID:(id)arg0;
- (id)templateCategoriesArray;
- (id)imageTemplatesArray;
- (id /* block */)fetchTemplateListCategoryResponseCallBack;
- (long long)templateScene;
- (id)insertTemplateID;
- (void)fetchTemplateDataWithcurrentImageURI:(id)arg0 cropImageInfo:(id)arg1 shouldInsertTemplateAtFirst:(BOOL)arg2 insertTemplateModelID:(id)arg3;
- (id)modelDataHelper;
- (id /* block */)fetchTemplateListPannelResponseCallBack;
- (void)processTemplates:(id)arg0 categories:(id)arg1 needFilterCategoryArray:(BOOL)arg2;
- (void)setInsertTemplateModel:(id)arg0;
- (id)requestedTemplateCategoriesArray;
- (id)fetchTemplateListGroup;
- (void)getOnlyFirstTabTemplateDataListWith:(id)arg0;
- (void)getFinalTemplateListDataWith:(id)arg0;
- (void)fetchCategoryResponseModelForTemplateDataWithCategoryArray:(id)arg0;
- (void)setImageTemplatesArray:(id)arg0;
- (void)setTemplateCategoriesArray:(id)arg0;
- (void)refreshTemplatesDataForAllowType;
- (id)getTemplateInfoModelWithIndexPath:(id)arg0;
- (id)templateListForCategory:(long long)arg0;
- (id)imageTemplateDir;
- (id)draftDir;
- (void)setImageTemplateDir:(id)arg0;
- (void)setDraftDir:(id)arg0;
- (id)lastExportTemplateIndexPath;
- (void)setLastExportTemplateIndexPath:(id)arg0;
- (double)timeWhenStartApplyTemplate;
- (long long)allowTemplateType;
- (void)setAllowTemplateType:(long long)arg0;
- (void)setModelDataHelper:(id)arg0;
- (void)setFetchTemplateListGroup:(id)arg0;
- (void).cxx_destruct;
- (id)currentImage;
- (void)setup;
- (id)initWithServiceProvider:(id)arg0;
- (void)dealloc;

@end
