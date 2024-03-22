//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface EEUIAnnotationOptionListUIMore : NSObject <EEUIAnnotationOptionListUIMore, EEUIAnnotationUIMorePrivate> {
    struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionListUIMore> { struct UIAnnotationOptionListUIMore *__ptr_; struct __shared_weak_count *__cntrl_; } _uiMorePtr;
}

@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionListUIMore> { struct UIAnnotationOptionListUIMore *__ptr_; struct __shared_weak_count *__cntrl_; } uiMorePtr;
@property (readonly, nonatomic) NSArray *originalValue;
@property (readonly, nonatomic) NSArray *currentValue;
@property (readonly, nonatomic) NSArray *lastValue;
@property (readonly, copy, nonatomic) NSString *optionListKey;
@property (readonly, copy, nonatomic) NSString *optionListName;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, copy, nonatomic) NSString *loki_panel_name;
@property (readonly, copy, nonatomic) NSString *loki_panel_category;
@property (readonly, nonatomic) double preferredItemWidth;
@property (readonly, nonatomic) double preferredItemHeight;
@property (readonly, nonatomic) double preferredItemRadius;
@property (readonly, nonatomic) long long maxSelection;
@property (readonly, nonatomic) long long minSelection;
@property (readonly, nonatomic) int optionUIType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUiMorePtr:(struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionListUIMore> { struct UIAnnotationOptionListUIMore *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<EffectTemplateEditor::UIAnnotationOptionListUIMore> { struct UIAnnotationOptionListUIMore *x0; struct __shared_weak_count *x1; })uiMorePtr;
- (id)optionListKey;
- (id)optionListName;
- (id)loki_panel_name;
- (id)loki_panel_category;
- (double)preferredItemRadius;
- (long long)maxSelection;
- (long long)minSelection;
- (int)optionUIType;
- (id)initWithAnnotationUIMorePtr:(const void *)arg0;
- (void).cxx_destruct;
- (id)currentValue;
- (id)candidates;
- (id)lastValue;
- (id).cxx_construct;
- (id)originalValue;
- (double)preferredItemHeight;
- (double)preferredItemWidth;

@end
