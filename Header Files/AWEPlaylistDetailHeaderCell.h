//
//     Generated by private class-dump
//

@class NSString, AWEPlaylistInfoModel, AWEPlaylistDetailHeaderView;
@protocol AWEPlaylistDetailHeaderCellDelegate;

@interface AWEPlaylistDetailHeaderCell : UITableViewCell <AWEPlaylistDetailHeaderViewDelegate> {
    BOOL _hideCollect;
    BOOL _hidePublish;
    BOOL _hideOwnerArrow;
    id<AWEPlaylistDetailHeaderCellDelegate> _delegate;
    AWEPlaylistInfoModel *_model;
    AWEPlaylistDetailHeaderView *_headerView;
}

@property (retain, nonatomic) AWEPlaylistInfoModel *model;
@property (retain, nonatomic) AWEPlaylistDetailHeaderView *headerView;
@property (nonatomic) BOOL hideCollect;
@property (nonatomic) BOOL hidePublish;
@property (nonatomic) BOOL hideOwnerArrow;
@property (weak, nonatomic) id<AWEPlaylistDetailHeaderCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (void)p_updateUI;
- (void)headerHeightDidChangeWithFoldStatus:(BOOL)arg0;
- (void)updateConfigModel:(id)arg0;
- (void)setHideCollect:(BOOL)arg0;
- (void)setHidePublish:(BOOL)arg0;
- (void)setHideOwnerArrow:(BOOL)arg0;
- (BOOL)hideCollect;
- (BOOL)hidePublish;
- (BOOL)hideOwnerArrow;
- (void)updatePublishButtonGrayOut:(BOOL)arg0;
- (void)showPublishGuideBubble;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (void)setHeaderView:(id)arg0;
- (id)delegate;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (id)playlistDescription;

@end
