//
//     Generated by private class-dump
//

@class AWEPostPageReeditPreviewServiceDependencies;

@interface AWEPostPageReeditPreviewHandlerV2 : AWEPostPagePreviewHandler {
    AWEPostPageReeditPreviewServiceDependencies *_extraDependencies;
}

@property (retain, nonatomic) AWEPostPageReeditPreviewServiceDependencies *extraDependencies;

- (void)bindServices:(id)arg0;
- (void)configCoverAndFirstFrame;
- (void)chooseCoverActionWithChooseCoverPageWillShowBlock:(id /* block */)arg0 chooseCoverPageWillDismissBlock:(id /* block */)arg1;
- (void)previewImageAtIndex:(long long)arg0;
- (void)setExtraDependencies:(id)arg0;
- (id)extraDependencies;
- (void)superChooseCoverActionWithChooseCoverPageWillShowBlock:(id /* block */)arg0 chooseCoverPageWillDismissBlock:(id /* block */)arg1;
- (void).cxx_destruct;

@end