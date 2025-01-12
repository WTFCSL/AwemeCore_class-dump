//
//     Generated by private class-dump
//

@class AWEConcernSkylightCellModel, NSString, AWESkylightCellEntranceView;

@interface AWESkylightUnreadCell : UICollectionViewCell <AWEConcernSkylightCellProtocol> {
    AWESkylightCellEntranceView *_commonEntranceView;
    AWEConcernSkylightCellModel *_cellModel;
}

@property (retain, nonatomic) AWESkylightCellEntranceView *commonEntranceView;
@property (retain, nonatomic) AWEConcernSkylightCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)topAvatarCenterXOffset;
+ (id)reuseIdentifier;

- (void)setCellModel:(id)arg0;
- (void)configWithCellModel:(id)arg0;
- (void)showRedDotAnimationWithComplition:(id /* block */)arg0;
- (void)hideRedDot;
- (void)setCommonEntranceView:(id)arg0;
- (id)commonEntranceView;
- (BOOL)canRemoveUnreadLogo;
- (double)tagLabelFontSize;
- (void)configUIWithModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)cellModel;

@end
