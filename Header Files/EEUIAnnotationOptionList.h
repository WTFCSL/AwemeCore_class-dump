//
//     Generated by private class-dump
//

@class NSString, EEUIAnnotationOptionListUIMore, EEUIAnnotationParser;

@interface EEUIAnnotationOptionList : EEUIAnnotationBase <EEUIAnnotationPrivate, EEUIAnnotation> {
    EEUIAnnotationOptionListUIMore *_uiMore;
    EEUIAnnotationParser *_annotationParser;
    struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionList> { struct UIAnnotationOptionList *__ptr_; struct __shared_weak_count *__cntrl_; } _annotationPtr;
}

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionList> { struct UIAnnotationOptionList *__ptr_; struct __shared_weak_count *__cntrl_; } annotationPtr;
@property (weak, nonatomic) EEUIAnnotationParser *annotationParser;
@property (retain, nonatomic) EEUIAnnotationOptionListUIMore *uiMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int uiType;

+ (void)initClass;

- (void)setAnnotationParser:(id)arg0;
- (void)setAnnotationPtr:(struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionList> { struct UIAnnotationOptionList *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionList> { struct UIAnnotationOptionList *x0; struct __shared_weak_count *x1; })annotationPtr;
- (void)setUiMore:(id)arg0;
- (id)uiMore;
- (id)currentUIMoreContents;
- (id)annotationParser;
- (void)updateValue:(id)arg0 withType:(int)arg1 success:(id /* block */)arg2 andError:(id /* block */)arg3;
- (int)refreshAnnotationPreview;
- (id)changedUIMoreContentsForOriginal;
- (id)changedUIMoreContentsForLast;
- (id)initWithAnnotationBasePtr:(const void *)arg0 andAnnotationParser:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)name;
- (int)uiType;

@end