//
//     Generated by private class-dump
//

@class AWEPadLeftSideBarMiniGameItemDataModel, UILabel, UIImageView;

@interface AWEPadMiniGameCollectionViewCell : UICollectionViewCell {
    UIImageView *_gameImageView;
    AWEPadLeftSideBarMiniGameItemDataModel *_model;
    UILabel *_gameTextLabel;
}

@property (retain, nonatomic) AWEPadLeftSideBarMiniGameItemDataModel *model;
@property (retain, nonatomic) UILabel *gameTextLabel;
@property (retain, nonatomic) UIImageView *gameImageView;

- (void)configCellWithModel:(id)arg0 withThemeType:(long long)arg1;
- (id)gameImageView;
- (id)gameTextLabel;
- (void)setGameImageView:(id)arg0;
- (void)setGameTextLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setupUI;

@end
