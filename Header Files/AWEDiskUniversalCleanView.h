//
//     Generated by private class-dump
//

@class AWEUniversalCleanHeaderView, UIImageView, AWEUITextLoadingView;

@interface AWEDiskUniversalCleanView : AWEDiskCleanBaseView {
    float _cleneSize;
    long long _progress;
    AWEUniversalCleanHeaderView *_internalHeaderView;
    UIImageView *_bgImageView;
    AWEUITextLoadingView *_loading;
}

@property (retain, nonatomic) AWEUniversalCleanHeaderView *internalHeaderView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) AWEUITextLoadingView *loading;
@property (nonatomic) float cleneSize;
@property (nonatomic) long long progress;

- (void)addCustomView;
- (void)setCleanModels:(id)arg0;
- (void)setInternalHeaderView:(id)arg0;
- (id)internalHeaderView;
- (void)setCleneSize:(float)arg0;
- (void)updatePercentDesc:(id)arg0;
- (float)cleneSize;
- (void)setLoading:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)loading;
- (long long)progress;
- (void)setProgress:(long long)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end
