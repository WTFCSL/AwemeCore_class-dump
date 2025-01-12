//
//     Generated by private class-dump
//

@class UIButton, AWESearchBar;

@interface AWEAnchorMediumSearchBarView : UIView {
    UIButton *_searchCancelButton;
    AWESearchBar *_searchBar;
}

@property (retain, nonatomic) UIButton *searchCancelButton;
@property (retain, nonatomic) AWESearchBar *searchBar;

- (void)showSearchCancelButton;
- (void)hideSearchCancelButton;
- (id)searchCancelButton;
- (void)searchCancelButtonTapped:(id)arg0;
- (void)setSearchCancelButton:(id)arg0;
- (id)searchBar;
- (void)setSearchBar:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupSearchBar;
- (void)updateText:(id)arg0;

@end
