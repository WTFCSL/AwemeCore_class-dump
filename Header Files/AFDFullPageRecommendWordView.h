//
//     Generated by private class-dump
//

@class NSString, UILabel;

@interface AFDFullPageRecommendWordView : UIView {
    UILabel *_recommendWordLabel;
    UILabel *_recommendSearchWordLabel;
    id /* block */ _searchWordClicked;
    NSString *_searchWords;
}

@property (retain, nonatomic) NSString *searchWords;
@property (retain, nonatomic) UILabel *recommendWordLabel;
@property (retain, nonatomic) UILabel *recommendSearchWordLabel;
@property (copy, nonatomic) id /* block */ searchWordClicked;

- (id /* block */)searchWordClicked;
- (BOOL)configSearchWordWithAnchorModel:(id)arg0;
- (void)setSearchWordClicked:(id /* block */)arg0;
- (void)setSearchWords:(id)arg0;
- (id)searchWords;
- (id)recommendWordLabel;
- (id)recommendSearchWordLabel;
- (void)searchWordClickEvent;
- (void)setRecommendWordLabel:(id)arg0;
- (void)setRecommendSearchWordLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setUpUI;

@end