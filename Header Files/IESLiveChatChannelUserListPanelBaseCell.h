//
//     Generated by private class-dump
//

@class NSString, IESLiveChatChannelUserListPanelCellModel;

@interface IESLiveChatChannelUserListPanelBaseCell : UITableViewCell <IESLiveChatChannelUserListPanelCellView> {
    IESLiveChatChannelUserListPanelCellModel *_cellModel;
}

@property (retain, nonatomic) IESLiveChatChannelUserListPanelCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCellModel:(id)arg0;
- (void)bindCellModel:(id)arg0;
- (void)reloadWithCellModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)cellModel;

@end