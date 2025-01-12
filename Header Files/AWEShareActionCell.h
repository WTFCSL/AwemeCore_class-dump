//
//     Generated by private class-dump
//

@class NSString, AWEShareActionCellModel, AWEShareSaveAlertButton;
@protocol AWEShareActionCellDelegate, AWEShareSaveTableViewCellDelegate;

@interface AWEShareActionCell : UITableViewCell <AWEShareSaveTableViewCellProtocol> {
    id<AWEShareActionCellDelegate> _delegate;
    AWEShareSaveAlertButton *_button;
    AWEShareActionCellModel *_cellModel;
}

@property (retain, nonatomic) AWEShareSaveAlertButton *button;
@property (retain, nonatomic) AWEShareActionCellModel *cellModel;
@property (weak, nonatomic) id<AWEShareActionCellDelegate> delegate;
@property (weak, nonatomic) id<AWEShareSaveTableViewCellDelegate> shareDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCellModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)actionButtonTapped:(id)arg0;
- (void)updateWithViewModel:(id)arg0;
- (id)cellModel;

@end
