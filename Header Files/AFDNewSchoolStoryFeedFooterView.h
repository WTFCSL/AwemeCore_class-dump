//
//     Generated by private class-dump
//

@class UIView;

@interface AFDNewSchoolStoryFeedFooterView : UITableViewHeaderFooterView {
    UIView *_lineView;
    long long _style;
}

@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) long long style;

+ (id)identifierForStyle:(long long)arg0;
+ (double)footerHeightForCardModel:(id)arg0 style:(long long)arg1;

- (void)updateLineViewWithStyle:(long long)arg0;
- (long long)style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg0;
- (id)initWithReuseIdentifier:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end
