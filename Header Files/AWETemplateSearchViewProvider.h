//
//     Generated by private class-dump
//

@class UIView, AWETemplateBarModel, AWESearchAnchorListModel, AWEPageContext, NSArray, NSString, NSDictionary, AWETemplateBaseViewModel, AWEPlayInteractionSearchAnchorView, AWETemplateBarContext;
@protocol AWETemplateSearchViewActionProtocol;

@interface AWETemplateSearchViewProvider : AWETemplateViewBaseProvider <AWETemplateSearchViewActionProtocol> {
    AWEPlayInteractionSearchAnchorView *_barView;
    AWETemplateBaseViewModel<AWETemplateSearchViewActionProtocol> *_viewModel;
    NSDictionary *_extraInfo;
    AWETemplateBarContext *_barContext;
    AWEPageContext *_pageContext;
    AWETemplateBarModel *_barModel;
    unsigned long long _scene;
    AWESearchAnchorListModel *_anchorModel;
    NSArray *_searchAnchorWordsModel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEPlayInteractionSearchAnchorView *barView;
@property (retain, nonatomic) AWETemplateBaseViewModel<AWETemplateSearchViewActionProtocol> *viewModel;
@property (retain, nonatomic) AWETemplateBarModel *barModel;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) AWESearchAnchorListModel *anchorModel;
@property (copy, nonatomic) NSArray *searchAnchorWordsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)arg0 scene:(unsigned long long)arg1 context:(id)arg2;
+ (BOOL)shouldActiveWithData:(id)arg0 context:(id)arg1 scene:(unsigned long long)arg2 extraInfo:(id)arg3;

- (void)setExtraInfo:(id)arg0;
- (void)viewController_viewWillDisplay;
- (id)initWithData:(id)arg0 scene:(unsigned long long)arg1 context:(id)arg2;
- (void)viewDidTriggerActionWithSearchAnchorModel:(id)arg0;
- (id)barModel;
- (void)setBarModel:(id)arg0;
- (id)anchorModel;
- (void)setAnchorModel:(id)arg0;
- (void)viewController_viewDidAppear;
- (id)initWithData:(id)arg0 context:(id)arg1 scene:(unsigned long long)arg2 extraInfo:(id)arg3;
- (void)setBarContext:(id)arg0;
- (id)barContext;
- (void)setSearchAnchorWordsModel:(id)arg0;
- (id)searchAnchorWordsModel;
- (void)trackShowMasked:(id)arg0 context:(id)arg1;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (void)configuration;
- (id)viewModel;
- (void)updateWithData:(id)arg0;
- (unsigned long long)scene;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)extraInfo;
- (id)barView;
- (void)setBarView:(id)arg0;

@end