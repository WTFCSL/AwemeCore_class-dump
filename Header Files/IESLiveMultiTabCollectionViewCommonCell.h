//
//     Generated by private class-dump
//

@class IESLiveMultiTabItemModel;

@interface IESLiveMultiTabCollectionViewCommonCell : UICollectionViewCell {
    BOOL _isMounted;
    IESLiveMultiTabItemModel *_tabItemModel;
}

@property (nonatomic) BOOL isMounted;
@property (retain, nonatomic) IESLiveMultiTabItemModel *tabItemModel;

- (struct CGPoint { double x0; double x1; })contentViewTopOffset;
- (void)setIsMounted:(BOOL)arg0;
- (void)mountCell;
- (void)updateTabItem:(id)arg0;
- (id)tabItemModel;
- (void)endDisplayCell;
- (void)unmountCell;
- (void)setupContentViewTopOffSet:(struct CGPoint { double x0; double x1; })arg0;
- (void)setTabItemModel:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isMounted;
- (void)willDisplay;

@end
