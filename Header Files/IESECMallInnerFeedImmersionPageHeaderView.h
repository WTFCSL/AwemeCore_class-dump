//
//     Generated by private class-dump
//

@class UILabel;

@interface IESECMallInnerFeedImmersionPageHeaderView : UIView {
    long long _total;
    long long _current;
    UILabel *_pageLabel;
}

@property (retain, nonatomic) UILabel *pageLabel;
@property (nonatomic) long long total;
@property (nonatomic) long long current;

- (long long)total;
- (long long)current;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrent:(long long)arg0;
- (void)setTotal:(long long)arg0;
- (id)pageLabel;
- (void)setPageLabel:(id)arg0;

@end
