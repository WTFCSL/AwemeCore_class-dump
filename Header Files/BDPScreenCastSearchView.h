//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIButton, UITableView, BDPScreenCastLoadingView, UILabel, BDPScreenCastBlankView;

@interface BDPScreenCastSearchView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _fullScreen;
    BOOL _isShowing;
    id /* block */ _selectedDeviceBlock;
    id /* block */ _exitBlock;
    id /* block */ _helpBtnClickBlock;
    unsigned long long _status;
    UIView *_containerView;
    UIView *_maskView;
    BDPScreenCastLoadingView *_loadingView;
    BDPScreenCastBlankView *_blankView;
    UITableView *_tableView;
    UIView *_topBar;
    UILabel *_titleLabel;
    UIButton *_helpButton;
    NSArray *_deviceList;
    long long _selectedIndex;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) BDPScreenCastLoadingView *loadingView;
@property (retain, nonatomic) BDPScreenCastBlankView *blankView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *helpButton;
@property (copy, nonatomic) NSArray *deviceList;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ selectedDeviceBlock;
@property (copy, nonatomic) id /* block */ exitBlock;
@property (copy, nonatomic) id /* block */ helpBtnClickBlock;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeWithAnimated:(BOOL)arg0;
- (void)setIsShowing:(BOOL)arg0;
- (id /* block */)exitBlock;
- (void)setExitBlock:(id /* block */)arg0;
- (id)blankView;
- (void)setBlankView:(id)arg0;
- (id)initWithFullScreen:(BOOL)arg0;
- (id)helpButton;
- (void)setHelpButton:(id)arg0;
- (void)showWithAnimated:(BOOL)arg0;
- (void)setSelectedDeviceBlock:(id /* block */)arg0;
- (void)setHelpBtnClickBlock:(id /* block */)arg0;
- (void)setStatus:(unsigned long long)arg0 deviceList:(id)arg1;
- (void)backgroundClicked;
- (id)createLayerWithFullScreen:(BOOL)arg0;
- (void)helpButtonClicked;
- (id /* block */)helpBtnClickBlock;
- (id /* block */)selectedDeviceBlock;
- (void)setFullScreen:(BOOL)arg0;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (BOOL)isFullScreen;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (void)setSelectedIndex:(long long)arg0;
- (unsigned long long)status;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (id)maskView;
- (id)topBar;
- (void)setContainerView:(id)arg0;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStatus:(unsigned long long)arg0;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setTopBar:(id)arg0;
- (long long)selectedIndex;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)deviceList;
- (void)setDeviceList:(id)arg0;

@end
