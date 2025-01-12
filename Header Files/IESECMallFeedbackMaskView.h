//
//     Generated by private class-dump
//

@class UITableView, NSString, IESECListKitCellFeedbackData, UIButton;

@interface IESECMallFeedbackMaskView : UIView <UITableViewDelegate, UITableViewDataSource> {
    BOOL _bigFontEnabled;
    BOOL _isMore;
    id /* block */ _closeClick;
    id /* block */ _backClick;
    id /* block */ _moreClick;
    id /* block */ _reasonClick;
    double _fontSizeScale;
    IESECListKitCellFeedbackData *_totalFeedbackList;
    IESECListKitCellFeedbackData *_currentFeedbackModel;
    UIButton *_closeBtn;
    UITableView *_tableView;
    UIButton *_backBtn;
}

@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *backBtn;
@property (nonatomic) BOOL isMore;
@property (copy, nonatomic) id /* block */ closeClick;
@property (copy, nonatomic) id /* block */ backClick;
@property (copy, nonatomic) id /* block */ moreClick;
@property (copy, nonatomic) id /* block */ reasonClick;
@property (nonatomic) BOOL bigFontEnabled;
@property (nonatomic) double fontSizeScale;
@property (retain, nonatomic) IESECListKitCellFeedbackData *totalFeedbackList;
@property (retain, nonatomic) IESECListKitCellFeedbackData *currentFeedbackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)closeBtn;
- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (void)setCloseBtn:(id)arg0;
- (void)buildUI;
- (id /* block */)moreClick;
- (id /* block */)closeClick;
- (void)_back;
- (double)fontSizeScale;
- (BOOL)bigFontEnabled;
- (void)setBigFontEnabled:(BOOL)arg0;
- (void)setFontSizeScale:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 bigFontEnabled:(BOOL)arg1 fontSizeScale:(double)arg2;
- (void)setIsMore:(BOOL)arg0;
- (id /* block */)backClick;
- (id)currentFeedbackModel;
- (BOOL)isMore;
- (id)totalFeedbackList;
- (id /* block */)reasonClick;
- (void)resetIsMoreAndUpdate;
- (void)setCloseClick:(id /* block */)arg0;
- (void)setBackClick:(id /* block */)arg0;
- (void)setMoreClick:(id /* block */)arg0;
- (void)setReasonClick:(id /* block */)arg0;
- (void)setTotalFeedbackList:(id)arg0;
- (void)setCurrentFeedbackModel:(id)arg0;
- (void)_close;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (void)dealloc;

@end
