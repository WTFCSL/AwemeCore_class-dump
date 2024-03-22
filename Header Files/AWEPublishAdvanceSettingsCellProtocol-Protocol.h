//
//     Generated by private class-dump
//

@class NSIndexPath;
@protocol AWEPublishAdvanceSettingsCellDelegate;

@protocol AWEPublishAdvanceSettingsCellProtocol <NSObject>

+ (double)cellHeight;

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEPublishAdvanceSettingsCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ onSwitcherToggledBlock;

- (void)setIndexPath:(id)arg0;
- (id)indexPath;
- (void)updateWithItem:(id)arg0;

@optional

- (void)onCellClicked;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;
- (void)setOnSwitcherToggledBlock:(id /* block */)arg0;
- (id /* block */)onSwitcherToggledBlock;

@end
