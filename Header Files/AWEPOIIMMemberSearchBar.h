//
//     Generated by private class-dump
//

@class DUXTextField, UIView;
@protocol AWEPOIIMMemberSearchBarDelegate;

@interface AWEPOIIMMemberSearchBar : UIView {
    id<AWEPOIIMMemberSearchBarDelegate> _delegate;
    unsigned long long _style;
    UIView *_containerView;
    DUXTextField *_searchTextField;
    UIView *_separatorView;
}

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXTextField *searchTextField;
@property (retain, nonatomic) UIView *separatorView;
@property (weak, nonatomic) id<AWEPOIIMMemberSearchBarDelegate> delegate;

- (void)initView;
- (unsigned long long)style;
- (BOOL)isFirstResponder;
- (BOOL)isFullScreen;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg0;
- (void)setSeparatorView:(id)arg0;
- (id)searchTextField;
- (void)setSearchTextField:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)delegate;
- (id)containerView;
- (id)separatorView;
- (void)setDelegate:(id)arg0;
- (void)setStyle:(unsigned long long)arg0;

@end
