//
//     Generated by private class-dump
//

@class NSString, AWETemplateTagsModel, UIView, AWETemplateTagsViewModel, AWETemplateTagsContext;
@protocol AWETemplateTagsTemplateViewProtocol;

@interface AWEPlayInteractionTagsElementV2 : AWEPlayInteractionLeftElement <AWETemplateTagsTemplateViewDelegate, AWEFeedTagsPosPriorityAvoidElementProtocol> {
    AWETemplateTagsContext *_tagContext;
    UIView<AWETemplateTagsTemplateViewProtocol> *_templateView;
    AWETemplateTagsViewModel *_viewModel;
    AWETemplateTagsModel *_tagsModel;
}

@property (retain, nonatomic) AWETemplateTagsContext *tagContext;
@property (retain, nonatomic) UIView<AWETemplateTagsTemplateViewProtocol> *templateView;
@property (retain, nonatomic) AWETemplateTagsViewModel *viewModel;
@property (retain, nonatomic) AWETemplateTagsModel *tagsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (long long)elementPriority;
- (void)hideComponent;
- (id)tagContext;
- (void)didTriggerTagUpdateEventWithModel:(id)arg0;
- (void)didTriggerViewUpdateEventWithModel:(id)arg0;
- (void)prepareWithModel:(id)arg0;
- (void)updateContextWithModel:(id)arg0;
- (void)setTagsModel:(id)arg0;
- (id)tagsModel;
- (void)updateTagWithModel:(id)arg0;
- (void)didClickWithEvent:(id)arg0;
- (void)setTagContext:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)businessID;
- (void)reset;
- (void)viewDidLoad;
- (void)setTemplateView:(id)arg0;
- (id)templateView;

@end
