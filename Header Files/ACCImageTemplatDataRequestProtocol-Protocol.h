//
//     Generated by private class-dump
//

@protocol ACCImageTemplatDataRequestProtocol <NSObject>

- (id)commonParams;
- (id)commonTrackParamsWith:(id)arg0;
- (void)requestPannelResponseModelWithCommonParams:(id)arg0 currentImageSize:(struct CGSize { double x0; double x1; })arg1 templateScene:(long long)arg2 currentImageURI:(id)arg3 cropImageInfo:(id)arg4 trackParams:(id)arg5;
- (void)addPannelResponseModelCallback:(id /* block */)arg0;
- (void)getTemplateListWithPannelResponseModel:(id)arg0 templateCategoriesArray:(id)arg1 shouldInsertTemplateAtFirst:(BOOL)arg2 insertTemplateModel:(id)arg3 completion:(id /* block */)arg4;
- (void)requestTemplateDetialWithTemplateId:(id)arg0 completion:(id /* block */)arg1;
- (id)getTemplateInfoModelWithDetailResponseModel:(id)arg0;

@end
