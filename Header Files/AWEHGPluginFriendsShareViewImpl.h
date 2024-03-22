//
//     Generated by private class-dump
//

@class UILabel, NSString, NSDictionary, HGShareTask, NSMutableArray, UICollectionView, NSLayoutConstraint, HGUniqueID, HGModel;
@protocol HGIMPluginDelegate;

@interface AWEHGPluginFriendsShareViewImpl : NSObject <HGFriendsShareViewPluginDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, AWEHGCollectionFriendsShareCellDelegate> {
    NSMutableArray *_items;
    UICollectionView *_collectionView;
    id<HGIMPluginDelegate> _imPlugin;
    NSLayoutConstraint *_heightConstraint;
    HGUniqueID *_uniqueID;
    HGModel *_model;
    NSString *_templateID;
    HGShareTask *_shareTask;
    NSDictionary *_gameInfo;
    UILabel *_label;
    struct CGSize { double width; double height; } _nameSize;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<HGIMPluginDelegate> imPlugin;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) HGModel *model;
@property (copy, nonatomic) NSString *templateID;
@property (retain, nonatomic) HGShareTask *shareTask;
@property (copy, nonatomic) NSDictionary *gameInfo;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct CGSize { double width; double height; } nameSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)event:(id)arg0 param:(id)arg1;
- (id)imPlugin;
- (void)setImPlugin:(id)arg0;
- (id)hg_getFriendsShareViewWithUniqueID:(id)arg0;
- (void)setShareTask:(id)arg0;
- (id)shareTask;
- (id)getUniqueID;
- (void)setGameInfo:(id)arg0;
- (id)getGameInfo;
- (void)shareMessageToFriendsWithParam:(id)arg0;
- (void)setNameSize:(struct CGSize { double x0; double x1; })arg0;
- (id)hg_getFriendsShareView;
- (void)requestGameInfo;
- (void)setupItems;
- (struct CGSize { double x0; double x1; })nameSize;
- (void)setHeightConstraint:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setItems:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (id)heightConstraint;
- (void).cxx_destruct;
- (id)collectionView;
- (id)uniqueID;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setUniqueID:(id)arg0;
- (id)model;
- (void)setLabel:(id)arg0;
- (id)templateID;
- (void)setCollectionView:(id)arg0;
- (id)label;
- (void)dealloc;
- (void)setTemplateID:(id)arg0;
- (id)gameInfo;

@end