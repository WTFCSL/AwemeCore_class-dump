//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface AWEUniversalCleanHeaderView : UIView {
    float _cleneSize;
    NSString *_percentDesc;
    long long _progress;
    UILabel *_titleLabel;
    UILabel *_cleanSizeLabel;
    UILabel *_percentLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *cleanSizeLabel;
@property (retain, nonatomic) UILabel *percentLabel;
@property (nonatomic) float cleneSize;
@property (copy, nonatomic) NSString *percentDesc;
@property (nonatomic) long long progress;

- (void)setPercentLabel:(id)arg0;
- (id)percentLabel;
- (void)setCleneSize:(float)arg0;
- (void)setPercentDesc:(id)arg0;
- (float)cleneSize;
- (id)cleanSizeLabel;
- (id)percentDesc;
- (void)setCleanSizeLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)progress;
- (void)setProgress:(long long)arg0;
- (void)setTitleLabel:(id)arg0;

@end
