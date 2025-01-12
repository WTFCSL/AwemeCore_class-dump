//
//     Generated by private class-dump
//

@class NSString, AWESelectTemplateViewModel;

@interface AWESelectTemplateDataStrategyCutSame : NSObject <AWESelectTemplateDataStrategy> {
    AWESelectTemplateViewModel *_viewModel;
}

@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)templateResourcePreload;
- (BOOL)templateRecommendAssetsChanged;
- (void)templatesfetch;
- (void)templateGenerateData;
- (void)templateGenerateDataCancel;
- (void)setupWithTemplateViewModel:(id)arg0;
- (void)templateSelectWithIndex:(long long)arg0;
- (void)templateGenerateDataWithIndex:(long long)arg0;
- (void)templateResourcePreloadCancel;
- (void)templateDataCheck;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
