//
//     Generated by private class-dump
//

@class IESLiveAnimatedImageView, NSString, IESLivePrivilegeEntranceVIPViewModel;
@protocol IESLiveURLSchemaHandlerAdapter;

@interface IESLivePrivilegeEntranceVIPView : UIView <IESLivePrivilegeEntranceSubviewDelegate> {
    IESLivePrivilegeEntranceVIPViewModel *_viewModel;
    long long _entranceType;
    IESLiveAnimatedImageView *_vipButton;
    id<IESLiveURLSchemaHandlerAdapter> _schemaURLHandler;
}

@property (retain, nonatomic) IESLivePrivilegeEntranceVIPViewModel *viewModel;
@property (nonatomic) long long entranceType;
@property (retain, nonatomic) IESLiveAnimatedImageView *vipButton;
@property (retain, nonatomic) id<IESLiveURLSchemaHandlerAdapter> schemaURLHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)entranceType;
- (void)setEntranceType:(long long)arg0;
- (id)schemaURLHandler;
- (void)setSchemaURLHandler:(id)arg0;
- (void)bindState;
- (void)viewDidShowOnContainer:(id)arg0;
- (void)viewDidHideFromContainer:(id)arg0;
- (id)vipButton;
- (void)setVipButton:(id)arg0;
- (void)vipViewTapped;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)viewModel;
- (void)setupUI;
- (void)addAction;

@end
