//
//     Generated by private class-dump
//

@class IESLiveAnnouncementApi, NSString, UIView, IESLiveMyLiveTabCellViewModel;
@protocol IESLiveDynamicService, IESLiveMyLiveTabCellDelegate;

@interface IESLiveMyLiveTabCell : UITableViewCell <IESLiveDynamicViewDelegate> {
    id<IESLiveMyLiveTabCellDelegate> _delegate;
    UIView *_dynamicView;
    IESLiveMyLiveTabCellViewModel *_viewModel;
    IESLiveAnnouncementApi *_appointApi;
    id<IESLiveDynamicService> _dynamicService;
}

@property (retain, nonatomic) UIView *dynamicView;
@property (retain, nonatomic) IESLiveMyLiveTabCellViewModel *viewModel;
@property (retain, nonatomic) IESLiveAnnouncementApi *appointApi;
@property (retain, nonatomic) id<IESLiveDynamicService> dynamicService;
@property (retain, nonatomic) id<IESLiveMyLiveTabCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dynamicView;
- (void)setDynamicView:(id)arg0;
- (void)triggerSliceXEvent:(id)arg0;
- (void)updateFollowStatus:(long long)arg0 error:(id)arg1 withViewModel:(id)arg2;
- (id)appointApi;
- (void)updateDataSourceWithData:(id)arg0 viewModel:(id)arg1;
- (id)dynamicService;
- (void)updateCellWithViewModel:(id)arg0;
- (void)setAppointApi:(id)arg0;
- (void)setDynamicService:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg0;

@end
