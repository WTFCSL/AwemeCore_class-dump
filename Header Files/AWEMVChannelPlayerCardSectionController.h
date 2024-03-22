//
//     Generated by private class-dump
//

@class NSString, AWEMVChannelViewModel, AWEMVChannelPageContext;

@interface AWEMVChannelPlayerCardSectionController : AWEBaseListSectionController <AWEMVChannelSectionControllerProtocol> {
    AWEMVChannelPageContext *_context;
    AWEMVChannelViewModel *_containerViewModel;
}

@property (retain, nonatomic) AWEMVChannelPageContext *context;
@property (weak, nonatomic) AWEMVChannelViewModel *containerViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didBindSectionViewModel;
- (void)sectionDidEndDisplayingCell:(id)arg0 index:(long long)arg1;
- (id)containerViewModel;
- (id)aAWEPadModuleAdapter;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:(long long)arg0 model:(id)arg1;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg0;
- (void)handleCellEvent:(id)arg0 model:(id)arg1 userInfo:(id)arg2;
- (void)revokeFeedbackWithModel:(id)arg0 feedbackInfo:(id)arg1 cell:(id)arg2;
- (void)setContainerViewModel:(id)arg0;
- (void)preConfigCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
