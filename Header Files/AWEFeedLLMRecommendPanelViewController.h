//
//     Generated by private class-dump
//

@class UIView, AWEFeedLLMRecommendPanelDataController, UITapGestureRecognizer, AWEFeedLLMRecommendPanelCellManager, AWEFeedLLMRecommendPanelContext, AWEFeedLLMRecommendPanelBottomElement, DUXContentSheet, UITableView, UIPanGestureRecognizer, NSString, AWEFeedLLMRecommendPanelTopBarElement;
@protocol AWEFeedLLMRecommendPanelConfigProtocol;

@interface AWEFeedLLMRecommendPanelViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, DUXSheetDelegate, AWEFeedLLMRecommendPanelDataControllerDelegate> {
    BOOL _isSheetExpend;
    BOOL _alreadyAppear;
    DUXContentSheet *_sheet;
    UITableView *_tableView;
    AWEFeedLLMRecommendPanelContext *_context;
    id<AWEFeedLLMRecommendPanelConfigProtocol> _config;
    AWEFeedLLMRecommendPanelTopBarElement *_topBarElement;
    AWEFeedLLMRecommendPanelBottomElement *_bottomElement;
    UIPanGestureRecognizer *_panCloseKeyboardGesture;
    UITapGestureRecognizer *_tapCloseKeyboardGesture;
    double _bottomElementHeight;
    AWEFeedLLMRecommendPanelCellManager *_cellManager;
    UIView *_tableViewContainer;
    AWEFeedLLMRecommendPanelDataController *_dataController;
    long long _enterTime;
}

@property (retain, nonatomic) AWEFeedLLMRecommendPanelContext *context;
@property (retain, nonatomic) id<AWEFeedLLMRecommendPanelConfigProtocol> config;
@property (retain, nonatomic) AWEFeedLLMRecommendPanelTopBarElement *topBarElement;
@property (retain, nonatomic) AWEFeedLLMRecommendPanelBottomElement *bottomElement;
@property (retain, nonatomic) UIPanGestureRecognizer *panCloseKeyboardGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapCloseKeyboardGesture;
@property (nonatomic) double bottomElementHeight;
@property (retain, nonatomic) AWEFeedLLMRecommendPanelCellManager *cellManager;
@property (retain, nonatomic) UIView *tableViewContainer;
@property (nonatomic) BOOL isSheetExpend;
@property (retain, nonatomic) AWEFeedLLMRecommendPanelDataController *dataController;
@property (nonatomic) BOOL alreadyAppear;
@property (nonatomic) long long enterTime;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)sheetDidDismiss:(id)arg0;
- (void)setDataController:(id)arg0;
- (void)addNotification;
- (long long)enterTime;
- (void)setEnterTime:(long long)arg0;
- (id)cellManager;
- (void)setCellManager:(id)arg0;
- (BOOL)alreadyAppear;
- (void)setAlreadyAppear:(BOOL)arg0;
- (void)scrollToAimModel:(id)arg0;
- (void)datasourceDidAddModels:(long long)arg0;
- (void)datasourceDidUpdateModel:(id)arg0;
- (void)scrollToEndWithAnimated:(BOOL)arg0;
- (void)setBottomElementHeight:(double)arg0;
- (void)setIsSheetExpend:(BOOL)arg0;
- (id)topBarElement;
- (id)bottomElement;
- (id)tableViewContainer;
- (double)bottomElementHeight;
- (id)panCloseKeyboardGesture;
- (id)tapCloseKeyboardGesture;
- (void)handleKeyboardWillShow;
- (void)handleKeyboardWillHide;
- (void)handleBottomElementHeightChanged:(double)arg0;
- (void)handleKeyboardDidShow;
- (BOOL)isSheetExpend;
- (double)getCurrentTableViewContainerHeight:(BOOL)arg0;
- (void)dismissKeyboardWithGesture:(id)arg0;
- (void)setTopBarElement:(id)arg0;
- (void)setBottomElement:(id)arg0;
- (void)setPanCloseKeyboardGesture:(id)arg0;
- (void)setTapCloseKeyboardGesture:(id)arg0;
- (void)setTableViewContainer:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setConfig:(id)arg0;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setContext:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)config;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)initWithConfig:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)context;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupContext;
- (id)dataController;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
