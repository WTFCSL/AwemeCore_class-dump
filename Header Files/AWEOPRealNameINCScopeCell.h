//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEOPRealNameINCScopeCell : UITableViewCell {
    UILabel *_dot;
    UILabel *_scopesField;
}

@property (retain, nonatomic) UILabel *dot;
@property (retain, nonatomic) UILabel *scopesField;

+ (struct CGSize { double x0; double x1; })heightForScopes:(id)arg0 width:(double)arg1;

- (id)scopesField;
- (void)setScopesField:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateScopes:(id)arg0;
- (id)dot;
- (void)setDot:(id)arg0;

@end