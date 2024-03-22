//
//     Generated by private class-dump
//

@class NSString, UIImageView, UICollectionView, UILabel, UIView, AWEScreenShootShareViewGroupModel;

@interface AWEScreenShootShareFriendsCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    AWEScreenShootShareViewGroupModel *_groupModel;
    UICollectionView *_collectionView;
    UIView *_imageBackView;
    UIImageView *_imageView;
    UILabel *_titleLable;
}

@property (retain, nonatomic) UIView *imageBackView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) AWEScreenShootShareViewGroupModel *groupModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titleLable;
- (void)setTitleLable:(id)arg0;
- (void)setGroupModel:(id)arg0;
- (id)groupModel;
- (void)setImageBackView:(id)arg0;
- (id)imageBackView;
- (void)shareTofriendsWithIndexPath:(id)arg0;
- (void)shareMorefriends;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)imageView;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setUpCollectionView;
- (void)setUpUI;

@end
