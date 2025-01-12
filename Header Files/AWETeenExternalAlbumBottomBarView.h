//
//     Generated by private class-dump
//

@class AWETeenExternalAlbumTitleView, UIView;
@protocol AWETeenExternalAlbumBottomBarViewDelegate;

@interface AWETeenExternalAlbumBottomBarView : UIView {
    id<AWETeenExternalAlbumBottomBarViewDelegate> _delegate;
    UIView *_moreView;
    AWETeenExternalAlbumTitleView *_titleView;
}

@property (weak, nonatomic) id<AWETeenExternalAlbumBottomBarViewDelegate> delegate;
@property (retain, nonatomic) UIView *moreView;
@property (retain, nonatomic) AWETeenExternalAlbumTitleView *titleView;

- (void)updateWithAwemeModel:(id)arg0;
- (void)bottomBarDidClick:(id)arg0;
- (id)moreView;
- (void)setMoreView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 delegate:(id)arg1;
- (void).cxx_destruct;
- (void)setTitleView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)titleView;
- (void)setupUI;

@end
