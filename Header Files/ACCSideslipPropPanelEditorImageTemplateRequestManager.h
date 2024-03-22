//
//     Generated by private class-dump
//

@class ACCSideslipPropPanelEditorImageTemplateDownloadManager, NSMutableDictionary, AWEVideoPublishViewModel;

@interface ACCSideslipPropPanelEditorImageTemplateRequestManager : NSObject {
    BOOL _isFetching;
    AWEVideoPublishViewModel *_publishModel;
    ACCSideslipPropPanelEditorImageTemplateDownloadManager *_dataManager;
    id /* block */ _fetchTemplateListPannelResponseCallBack;
    NSMutableDictionary *_templatesListDict;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCSideslipPropPanelEditorImageTemplateDownloadManager *dataManager;
@property (nonatomic) BOOL isFetching;
@property (copy, nonatomic) id /* block */ fetchTemplateListPannelResponseCallBack;
@property (retain, nonatomic) NSMutableDictionary *templatesListDict;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)initWithPublishModel:(id)arg0;
- (void)setFetchTemplateListPannelResponseCallBack:(id /* block */)arg0;
- (id /* block */)fetchTemplateListPannelResponseCallBack;
- (void)fetchImageTemplatesListWithCompletion:(id /* block */)arg0;
- (id)getFetchTemplateDataWithCurrentFrameZipUri;
- (void)setFetchTemplateData:(id)arg0 forFrameZipUri:(id)arg1;
- (void)fetchImageTemplateListData;
- (id)templatesListDict;
- (id)preparePannelDataWithTemplateResponseArray:(id)arg0;
- (void)getTemplatePanelDataListWith:(id)arg0 completion:(id /* block */)arg1;
- (id)templateJsonFilePathWithMediaID:(id)arg0;
- (void)getResourcesLocalCacheWithTemplateModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setTemplatesListDict:(id)arg0;
- (id)dataManager;
- (void).cxx_destruct;
- (void)setDataManager:(id)arg0;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg0;

@end