//
//     Generated by private class-dump
//

@class UIView;

@interface AWEKnowledgeSwiftImpl.HangoutHeaderViewController : UIViewController <AWETabListHeaderViewControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchBarView;
    void /* unknown type, empty encoding */ searchBarViewIsHidden;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stickedHeader;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navBarSearchIcon;
    void /* unknown type, empty encoding */ isInsideScreen;
    void /* unknown type, empty encoding */ lastFrameHeight;
}

@property (nonatomic, retain) UIView *stickedHeader;

- (void)configWithHeaderModel:(id)arg0;
- (double)heightForHeaderView;
- (id)stickedHeader;
- (void)setStickedHeader:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)initWithCoder:(id)arg0;
- (void)viewDidLoad;

@end
