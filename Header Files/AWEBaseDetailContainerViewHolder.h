//
//     Generated by private class-dump
//

@class AWEButton, AWEUILoadingView, UIButton;

@interface AWEBaseDetailContainerViewHolder : AWEBaseListViewHolder {
    AWEButton *_shareBtn;
    UIButton *_backBtn;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) AWEButton *shareBtn;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIButton *backBtn;

- (void)setupViewHolder;
- (void)dismissLoadingView;
- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (id)shareBtn;
- (void)setShareBtn:(id)arg0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
