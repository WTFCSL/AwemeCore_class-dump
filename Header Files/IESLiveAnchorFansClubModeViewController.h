//
//     Generated by private class-dump
//

@class IESLiveAnchorFansClubModeSettingStore, UITextView, NSString, UILabel, UIView, UITableView;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveAnchorFansClubModeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UIGestureRecognizerDelegate> {
    id<IESLiveURLSchemaHandler> _urlHandler;
    IESLiveAnchorFansClubModeSettingStore *_store;
    UIView *_baseView;
    UILabel *_titleLabel;
    UIView *_lineView;
    UITableView *_tableView;
    UITextView *_noticeLabel;
}

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlHandler;
@property (retain, nonatomic) IESLiveAnchorFansClubModeSettingStore *store;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITextView *noticeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addHideGesture;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (void)dismiss;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (id)urlHandler;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)baseView;
- (id)store;
- (id)titleLabel;
- (void)setStore:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setBaseView:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupViews;
- (void)setUrlHandler:(id)arg0;
- (id)noticeLabel;
- (void)setNoticeLabel:(id)arg0;

@end
