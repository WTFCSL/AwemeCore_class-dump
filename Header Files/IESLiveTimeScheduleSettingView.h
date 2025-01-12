//
//     Generated by private class-dump
//

@class IESLiveTimeNoticeViewModel, IESLiveTimeScheduleViewModel;

@interface IESLiveTimeScheduleSettingView : UIView {
    IESLiveTimeScheduleViewModel *_viewModel;
    IESLiveTimeNoticeViewModel *_noticeViewModel;
}

@property (retain, nonatomic) IESLiveTimeNoticeViewModel *noticeViewModel;
@property (retain, nonatomic) IESLiveTimeScheduleViewModel *viewModel;

- (id)noticeViewModel;
- (void)setNoticeViewModel:(id)arg0;
- (void)setupSettingView;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end
