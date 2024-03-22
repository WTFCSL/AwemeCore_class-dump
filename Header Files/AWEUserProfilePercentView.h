//
//     Generated by private class-dump
//

@class UIScrollView, NSMutableDictionary;

@interface AWEUserProfilePercentView : UIView {
    double _percent;
    UIScrollView *_percentScrollView;
    long long _percentLabelNumberCount;
    NSMutableDictionary *_percentLableDict;
}

@property (nonatomic) double percent;
@property (retain, nonatomic) UIScrollView *percentScrollView;
@property (nonatomic) long long percentLabelNumberCount;
@property (retain, nonatomic) NSMutableDictionary *percentLableDict;

- (id)initWithFont:(id)arg0 fontColor:(id)arg1 labelCount:(long long)arg2;
- (void)updateWith:(double)arg0 completion:(id /* block */)arg1;
- (void)setPercentLabelNumberCount:(long long)arg0;
- (long long)percentLabelNumberCount;
- (id)percentScrollView;
- (void)setPercentScrollView:(id)arg0;
- (void)p_setupSubviewsWith:(id)arg0 fontColor:(id)arg1;
- (id)percentLableDict;
- (void)setPercentLableDict:(id)arg0;
- (void).cxx_destruct;
- (double)percent;
- (void)setPercent:(double)arg0;

@end
