//
//     Generated by private class-dump
//

@class NSString;
@protocol UIViewControllerTransitioningDelegate;

@interface AWERichTextEditorManagerImpl : NSObject <ACCRichTextEditorManagerProtocol> {
    BOOL _isCreatingRichTextEditor;
    id<UIViewControllerTransitioningDelegate> _nextTranslationDelegate;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationDelegate;
@property (nonatomic) BOOL isCreatingRichTextEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleCacheOriginTextKeepEditorDraftID;
+ (void)handleDraftError:(id)arg0;
+ (void)updatePublishModel:(id)arg0 originalPublishModel:(id)arg1 params:(id)arg2;
+ (void)createNewOriginalTextEditor:(BOOL)arg0 transitioningDelegate:(id)arg1 originalPublishModel:(id)arg2 dismissBlock:(id /* block */)arg3 params:(id)arg4;
+ (id)createRichPublishRepoModelWithOriginPublishViewModel:(id)arg0;
+ (id)hashTagsFromJsonString:(id)arg0;
+ (void)handleParamsParse:(id)arg0 publishModel:(id)arg1;

- (void)presentRichTextEditorViewControllerWithOriginalPublishModel:(id)arg0 dismissBlock:(id /* block */)arg1 params:(id)arg2;
- (void)enterToRichTextEditorViewControllerWithOriginalPublishModel:(id)arg0 dismissBlock:(id /* block */)arg1 params:(id)arg2 shouldDispatchAfter:(BOOL)arg3;
- (void)presentRichTextToolbarPOIViewControllerWithOriginalPublishModel:(id)arg0 params:(id)arg1 poiIDDidChangeBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (id)selectedPoiIDWithPublishModel:(id)arg0;
- (void)configPublishModelPoiID:(id)arg0 poiName:(id)arg1 publishModel:(id)arg2;
- (void)publishVideo:(id)arg0;
- (id)nextTranslationDelegate;
- (void)transferToRichTextEditorWithWithOriginalPublishModel:(id)arg0 transitioningDelegate:(id)arg1 dismissBlock:(id /* block */)arg2 params:(id)arg3 shouldDispatchAfter:(BOOL)arg4;
- (void)transferToRichTextToolbarPOIViewControllerWithOriginalPublishModel:(id)arg0 params:(id)arg1 poiIDDidChangeBlock:(id /* block */)arg2 didDismissBlock:(id /* block */)arg3;
- (BOOL)isCreatingRichTextEditor;
- (void)setIsCreatingRichTextEditor:(BOOL)arg0;
- (void)showRichTextToolbarPOIViewControllerWithOriginalPublishModel:(id)arg0 params:(id)arg1 poiIDDidChangeBlock:(id /* block */)arg2 didDismissBlock:(id /* block */)arg3 sourceVC:(id)arg4;
- (void)setNextTranslationDelegate:(id)arg0;
- (void).cxx_destruct;

@end
