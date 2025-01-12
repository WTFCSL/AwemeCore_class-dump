//
//     Generated by private class-dump
//

@class AWEMVChannelPlayerCardBaseContainer, NSString, AWEAwemeModel, AWEMVChannelPlayerCardContext;

@interface AWEMVChannelPlayerCardBaseController : AWEBaseController <AWEMVChannelPlayerCardDispatchProtocol> {
    BOOL _appear;
    AWEMVChannelPlayerCardBaseContainer *_view;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEMVChannelPlayerCardBaseContainer *view;
@property (readonly, weak, nonatomic) AWEMVChannelPlayerCardContext *context;
@property (nonatomic) BOOL appear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAppear:(BOOL)arg0;
- (void)updateState:(long long)arg0;
- (id)container;
- (void)setModel:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)model;
- (void)setData:(id)arg0;
- (void)setView:(id)arg0;
- (void)viewDidLoad;
- (id)view;
- (BOOL)appear;

@end
