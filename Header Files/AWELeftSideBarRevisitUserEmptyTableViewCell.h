//
//     Generated by private class-dump
//

@class DUXTag, DUXTextTag, NSString, NSTimer, AWEUserModel, UIImageView, UITableView, DUXButton, NSIndexPath;

@interface AWELeftSideBarRevisitUserEmptyTableViewCell : UITableViewCell <AWELeftSideBarRevisitUserEmptyCellProtocol> {
    BOOL isLastOne;
    UITableView *tableView;
    UIImageView *_avatarImgView;
    AWEUserModel *_userModel;
    NSString *_referString;
    NSIndexPath *_indexPath;
    DUXTextTag *_titleTag;
    DUXTextTag *_subTitleTag;
    DUXButton *_actionButton;
    DUXTag *_hintTag;
    long long _currentTime;
    NSTimer *_countDownTimer;
}

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) DUXTextTag *titleTag;
@property (retain, nonatomic) DUXTextTag *subTitleTag;
@property (retain, nonatomic) DUXButton *actionButton;
@property (retain, nonatomic) DUXTag *hintTag;
@property (nonatomic) long long currentTime;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) BOOL isLastOne;
@property (weak, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)titleTag;
- (void)setTitleTag:(id)arg0;
- (id)avatarImgView;
- (void)setAvatarImgView:(id)arg0;
- (BOOL)isLastOne;
- (void)handleAvatarTapGestureRecognizer:(id)arg0;
- (void)emptyCell_configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2 referString:(id)arg3;
- (void)emptyCell_cellWillDisplay:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2 enterFrom:(id)arg3;
- (void)emptyCell_cellDidEndDisplay:(id)arg0;
- (void)setIsLastOne:(BOOL)arg0;
- (void)setSubTitleTag:(id)arg0;
- (id)subTitleTag;
- (void)setHintTag:(id)arg0;
- (id)hintTag;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setTableView:(id)arg0;
- (void).cxx_destruct;
- (id)tableView;
- (void)setCurrentTime:(long long)arg0;
- (void)setIndexPath:(id)arg0;
- (id)indexPath;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (long long)currentTime;
- (void)dealloc;
- (id)actionButton;
- (void)setActionButton:(id)arg0;
- (void)setupSubviews;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;

@end
