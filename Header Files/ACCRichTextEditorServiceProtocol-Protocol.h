//
//     Generated by private class-dump
//

@class RACSignal;

@protocol ACCRichTextEditorServiceProtocol <NSObject>

@property (readonly, nonatomic) BOOL disableInteraction;
@property (readonly, nonatomic) RACSignal *updateColorStyleSignal;
@property (readonly, nonatomic) RACSignal *didClickPrivacySignal;
@property (readonly, nonatomic) long long currentToolbarStyle;

- (void)asyncSaveOriginTextWithCompletionBlock:(id /* block */)arg0 isPublishSave:(BOOL)arg1;
- (void)asyncSaveOriginTextWithCompletionBlock:(id /* block */)arg0;
- (BOOL)webViewContentFirstRenderSuccess;
- (void)resiginTextEditing;
- (void)draftBackAlert;
- (id)updateColorStyleSignal;
- (id)didClickPrivacySignal;
- (long long)currentToolbarStyle;
- (BOOL)disableInteraction;

@end