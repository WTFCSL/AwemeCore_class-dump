//
//     Generated by private class-dump
//

@class IESLiveAnnouncementViewModel;

@interface IESLiveAnnouncementCellItem : IESLiveGuideSettingCellItem {
    IESLiveAnnouncementViewModel *_viewModel;
}

@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (readonly, nonatomic) long long currentAnnouncementStatus;

- (BOOL)isLightMode;
- (void)refreshItem;
- (long long)currentAnnouncementStatus;
- (BOOL)isExtralStyle;
- (id)addText;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)textColor;
- (void)setupCell;

@end
