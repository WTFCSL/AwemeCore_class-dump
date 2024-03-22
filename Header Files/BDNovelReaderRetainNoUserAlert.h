//
//     Generated by private class-dump
//

@class UIView, NSString, BDNovelAudioTextView, UIButton, UITableView, BDReaderConfig, NSDictionary, BDNovelReaderRetainNoUserData, UILabel;

@interface BDNovelReaderRetainNoUserAlert : UIView <UITableViewDelegate, UITableViewDataSource> {
    UIView *_maskView;
    UIView *_contentView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UITableView *_contentTableView;
    UIView *_lineView;
    BDNovelAudioTextView *_confirmButton;
    id /* block */ _confirmBlock;
    id /* block */ _cancelBlock;
    BDNovelReaderRetainNoUserData *_data;
    BDReaderConfig *_readerConfig;
    NSDictionary *_originQueryItems;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *contentTableView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) BDNovelAudioTextView *confirmButton;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) BDNovelReaderRetainNoUserData *data;
@property (retain, nonatomic) BDReaderConfig *readerConfig;
@property (copy, nonatomic) NSDictionary *originQueryItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithData:(id)arg0 originQueryItems:(id)arg1 readerConfig:(id)arg2 confirmBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;

- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (id)originQueryItems;
- (id)contentTableView;
- (void)setContentTableView:(id)arg0;
- (void)onCloseClick;
- (void)onConfirmClick;
- (void)innerClose;
- (void)innerShow;
- (id)readerConfig;
- (void)setReaderConfig:(id)arg0;
- (void)setOriginQueryItems:(id)arg0;
- (id)showBookParams:(id)arg0;
- (id)data;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id /* block */)cancelBlock;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setData:(id)arg0;
- (id)titleLabel;
- (id)maskView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)updateStyle:(id)arg0;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)updateData:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupViews;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end