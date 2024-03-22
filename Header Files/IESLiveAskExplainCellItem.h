//
//     Generated by private class-dump
//

@class IESLiveAskExplainViewModel;
@protocol IESLiveAskExplainPreferenceService;

@interface IESLiveAskExplainCellItem : IESLiveGuideSettingCellItem {
    id<IESLiveAskExplainPreferenceService> _askExplainPreference;
    IESLiveAskExplainViewModel *_viewModel;
}

@property (retain, nonatomic) id<IESLiveAskExplainPreferenceService> askExplainPreference;
@property (retain, nonatomic) IESLiveAskExplainViewModel *viewModel;

- (id)askExplainPreference;
- (void)setAskExplainPreference:(id)arg0;
- (void)setUpCell;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;

@end