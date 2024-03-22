//
//     Generated by private class-dump
//

@class AWESearchBar, UIButton, NSString;
@protocol AWESpecialPersonSearchViewDelegate;

@interface AWESpecialPersonSearchView : UIView <UISearchBarDelegate> {
    NSString *_searchText;
    id<AWESpecialPersonSearchViewDelegate> _delegate;
    NSString *_placeHolderText;
    AWESearchBar *_searchBar;
    UIButton *_cancelButton;
}

@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSString *searchText;
@property (weak, nonatomic) id<AWESpecialPersonSearchViewDelegate> delegate;
@property (copy, nonatomic) NSString *placeHolderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaceHolderText:(id)arg0;
- (id)placeHolderText;
- (void)p_cancelButtonTapped;
- (void)p_hideCancelButton;
- (void)finishSearch;
- (void)p_showCancelButton;
- (void)endInputText;
- (void)searchBarResignFirstResponder;
- (id)searchBar;
- (void)setCancelButton:(id)arg0;
- (void)setSearchBar:(id)arg0;
- (id)searchText;
- (void)setSearchText:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)searchBarSearchButtonClicked:(id)arg0;

@end