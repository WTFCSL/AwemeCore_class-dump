//
//     Generated by private class-dump
//

@class NSArray, IESEffectModel, AWEVideoPublishViewModel;

@protocol ACCDealWithServerPhotoManagerProtocol <NSObject>

@property (retain, nonatomic) NSArray *selectedResources;
@property (retain, nonatomic) IESEffectModel *templateEffectModel;
@property (copy, nonatomic) id /* block */ enterVideoEditorBlock;
@property (retain, nonatomic) AWEVideoPublishViewModel *originUploadPublishModel;
@property (copy, nonatomic) id /* block */ errorBlock;

- (void)setOriginUploadPublishModel:(id)arg0;
- (id)originUploadPublishModel;
- (void)setSelectedResources:(id)arg0;
- (void)setTemplateEffectModel:(id)arg0;
- (void)setEnterVideoEditorBlock:(id /* block */)arg0;
- (id /* block */)enterVideoEditorBlock;
- (id)templateEffectModel;
- (id)selectedResources;
- (void)process;
- (id /* block */)errorBlock;
- (void)setErrorBlock:(id /* block */)arg0;

@end
