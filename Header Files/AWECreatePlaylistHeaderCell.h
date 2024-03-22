//
//     Generated by private class-dump
//

@class NSString, AWEPlaylistInfoModel, AWEPlaylistDetailHeaderView;
@protocol AWECreatePlaylistHeaderCellDelegate;

@interface AWECreatePlaylistHeaderCell : UITableViewCell <AWEPlaylistDetailHeaderViewDelegate> {
    id<AWECreatePlaylistHeaderCellDelegate> _delegate;
    AWEPlaylistInfoModel *_model;
    AWEPlaylistDetailHeaderView *_headerView;
}

@property (retain, nonatomic) AWEPlaylistInfoModel *model;
@property (retain, nonatomic) AWEPlaylistDetailHeaderView *headerView;
@property (weak, nonatomic) id<AWECreatePlaylistHeaderCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateUI;
- (void)configureHeaderActions;
- (void)updateConfigModel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (void)setHeaderView:(id)arg0;
- (id)delegate;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end