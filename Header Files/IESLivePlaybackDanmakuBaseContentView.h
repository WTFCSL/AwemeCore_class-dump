//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESLivePlaybackDanmakuBaseContentView : UIView {
    double _contentViewWidth;
    NSMutableArray *_subContentViews;
}

@property (retain, nonatomic) NSMutableArray *subContentViews;
@property (nonatomic) double contentViewWidth;

- (id)subContentViews;
- (void)stopAnimated;
- (void)setupBaseContentViewWithNode:(id)arg0 strokeColor:(id)arg1 strokeWidth:(double)arg2;
- (void)startAnimated;
- (void)setSubContentViews:(id)arg0;
- (void).cxx_destruct;
- (void)setTextColor:(id)arg0;
- (void)resetView;
- (double)contentViewWidth;
- (void)setContentViewWidth:(double)arg0;

@end
