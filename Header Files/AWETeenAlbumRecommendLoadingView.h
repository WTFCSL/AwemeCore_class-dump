//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWETeenAlbumRecommendLoadingView : UIView {
    UILabel *_headerLabel;
    UIView *_cellContainer;
    long long _rowCount;
}

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *cellContainer;
@property (nonatomic) long long rowCount;

- (void)p_setupUI;
- (id)cellContainer;
- (void)setCellContainer:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 rowCount:(long long)arg1 title:(id)arg2;
- (long long)rowCount;
- (void).cxx_destruct;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg0;
- (void)setRowCount:(long long)arg0;

@end
