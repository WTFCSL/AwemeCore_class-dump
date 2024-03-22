//
//     Generated by private class-dump
//

@class UIView, NSString, UITapGestureRecognizer, AWEListDataController, UIButton, UITableView, UIPanGestureRecognizer, MASConstraint, NSDictionary, UILabel;
@protocol AWEAdMixVideoListDataController, AWEAdMixVideoPanelViewControllerDelegate;

@interface AWEAdMixVideoPanelViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, AWEAdMixVideoPanelViewController> {
    BOOL isShow;
    id<AWEAdMixVideoPanelViewControllerDelegate> delegate;
    UIView *_effectView;
    UIView *_coverView;
    UIView *_containerView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UITableView *_listView;
    UIPanGestureRecognizer *_panGes;
    UITapGestureRecognizer *_tapGes;
    double _baseViewBottomOffset;
    MASConstraint *_baseViewBottom;
    AWEListDataController<AWEAdMixVideoListDataController> *_dataController;
    NSDictionary *_logExtraDict;
    long long _currentPlayIndex;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITableView *listView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double baseViewBottomOffset;
@property (retain, nonatomic) MASConstraint *baseViewBottom;
@property (retain, nonatomic) AWEListDataController<AWEAdMixVideoListDataController> *dataController;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) long long currentPlayIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEAdMixVideoPanelViewControllerDelegate> delegate;
@property (nonatomic) BOOL isShow;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)setDataController:(id)arg0;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg0;
- (long long)currentPlayIndex;
- (void)setCurrentPlayIndex:(long long)arg0;
- (id)panelTitle;
- (id)panGes;
- (void)setPanGes:(id)arg0;
- (id)tapGes;
- (void)setTapGes:(id)arg0;
- (void)selfPanned:(id)arg0;
- (void)selfTapped:(id)arg0;
- (void)setupLayouts;
- (id)initWithLogExtraDict:(id)arg0;
- (void)setBaseViewBottom:(id)arg0;
- (void)setBaseViewBottomOffset:(double)arg0;
- (double)baseViewBottomOffset;
- (void)trackWithEvent:(id)arg0 index:(long long)arg1;
- (id)baseViewBottom;
- (void)popupWithIndex:(long long)arg0;
- (void)updateWithDataController:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setListView:(id)arg0;
- (id)listView;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (id)effectView;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)titleLabel;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)setContainerView:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setEffectView:(id)arg0;
- (id)containerView;
- (void)hide;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)pop;
- (void)setTitleLabel:(id)arg0;
- (void)setupSubviews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)dataController;
- (double)containerHeight;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end