//
//     Generated by private class-dump
//

@class IESECButton, IESECLiveAnchorFlashSaleCreateViewConfig, NSString, IESECLiveApi, UIImageView, IESECLiveAnchorCreateFlashSaleViewModel, UITableView, IESECLiveAnchorFlashSaleCreateAccessoryInputView, IESECLiveAnchorFlashSaleCreateLoadingView, NSDictionary, UILabel, NSNumber;

@interface IESECLiveAnchorFlashSaleCreateView : IESECLiveAnchorCommonPopupView <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, IESECLiveAnchorFlashSaleCreateViewExpandMoreCellDelegate, IESECLiveAnchorFlashSaleCreateViewCellDelegate, IESECLiveAnchorFlashSaleCreateViewProtocol> {
    BOOL _canInitializeSKUCodeCellMode;
    UIImageView *_imageView;
    UILabel *_noteLimitLabel;
    UILabel *_indicatorLabel;
    UITableView *_tableView;
    IESECButton *_button;
    IESECLiveApi *_api;
    IESECLiveAnchorFlashSaleCreateLoadingView *_loadingIndicator;
    IESECLiveAnchorFlashSaleCreateViewConfig *_viewConfig;
    IESECLiveAnchorCreateFlashSaleViewModel *_viewModel;
    IESECLiveAnchorFlashSaleCreateAccessoryInputView *_currentInputView;
    NSDictionary *_localSavedProperties;
    NSNumber *_lastSKUState;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *noteLimitLabel;
@property (retain, nonatomic) UILabel *indicatorLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESECButton *button;
@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveAnchorFlashSaleCreateLoadingView *loadingIndicator;
@property (retain, nonatomic) IESECLiveAnchorFlashSaleCreateViewConfig *viewConfig;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSaleViewModel *viewModel;
@property (retain, nonatomic) IESECLiveAnchorFlashSaleCreateAccessoryInputView *currentInputView;
@property (copy, nonatomic) NSDictionary *localSavedProperties;
@property (copy, nonatomic) NSNumber *lastSKUState;
@property (nonatomic) BOOL canInitializeSKUCodeCellMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buttonDidTapped:(id)arg0;
- (id)viewConfig;
- (void)setViewConfig:(id)arg0;
- (void)setIndicatorLabel:(id)arg0;
- (id)lastSKUState;
- (void)setLastSKUState:(id)arg0;
- (void)shutDownKeyBoard;
- (void)p_updateButtonEnabled:(BOOL)arg0;
- (id)localSavedProperties;
- (void)setLocalSavedProperties:(id)arg0;
- (void)refreshSelectedCategory:(id)arg0 selectedCategoryCids:(id)arg1;
- (void)startLoadingAnimationForProperties;
- (void)setCanInitializeSKUCodeCellMode:(BOOL)arg0;
- (void)textFieldTextDidEndEditing:(id)arg0;
- (id)currentInputView;
- (void)p_refreshCreateButtonStatus;
- (void)scrollTableViewToItem:(id)arg0;
- (void)createFlashSaleProductWithCoverURI:(id)arg0 completion:(id /* block */)arg1;
- (id)privilegesBeforeCommitFlash;
- (void)trackAtFinishCreateFlashSale;
- (void)setCurrentInputView:(id)arg0;
- (BOOL)closeKeyBoardBeforeShowingOthers;
- (void)openCategoryWebView;
- (void)openOptionViewWithItem:(id)arg0;
- (void)showInputViewWithItem:(id)arg0;
- (void)updateFrameWhenKeyboardShowsForNotification:(id)arg0;
- (void)flashSaleMoreCellExpandButtonDidTapped:(id)arg0;
- (BOOL)flashSaleItemCellTextFieldShouldBeginEditing:(id)arg0;
- (id)titlePrefixWithFlashSaleItemCell:(id)arg0;
- (void)generateSKUCodeWithCompletion:(id /* block */)arg0;
- (void)flashSaleSKUCellModeDidChangedTo:(long long)arg0 fromButtonClick:(BOOL)arg1;
- (id)initWithHeight:(double)arg0 config:(id)arg1 roomContext:(id)arg2;
- (id)noteLimitLabel;
- (void)setNoteLimitLabel:(id)arg0;
- (BOOL)canInitializeSKUCodeCellMode;
- (void)reload;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)dismiss;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)button;
- (void)setButton:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)imageView;
- (void)show;
- (void)keyboardWillShow:(id)arg0;
- (void)keyboardWillHide:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setImageView:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)dealloc;
- (void)keyboardFrameWillChange:(id)arg0;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)addObservers;
- (id)api;
- (id)indicatorLabel;
- (void)setApi:(id)arg0;

@end
