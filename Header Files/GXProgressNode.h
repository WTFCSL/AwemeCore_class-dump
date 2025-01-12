//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface GXProgressNode : GXViewNode {
    double _progress;
    BOOL _isNeedReload;
    BOOL _animated;
    UIColor *_strokeColor;
    UIColor *_trailColor;
    NSString *_progressType;
}

@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *trailColor;
@property (retain, nonatomic) NSString *progressType;
@property (nonatomic) BOOL animated;

- (void)bindData:(id)arg0;
- (void)setupNormalBackground:(id)arg0;
- (void)updateNormalStyle:(id)arg0 isMark:(BOOL)arg1;
- (void)configureViewInfo:(id)arg0;
- (id)creatView;
- (id)trailColor;
- (void)setTrailColor:(id)arg0;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg0;
- (id)progressType;
- (void)setProgressType:(id)arg0;
- (void)renderView:(id)arg0;

@end
