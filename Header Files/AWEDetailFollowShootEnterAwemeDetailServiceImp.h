//
//     Generated by private class-dump
//

@class AWEDetailPropViewModel;
@protocol AWEDetailEnterAwemeDetailHost;

@interface AWEDetailFollowShootEnterAwemeDetailServiceImp : AWEDetailEnterAwemeDetailServiceImpl {
    id<AWEDetailEnterAwemeDetailHost> _host;
    AWEDetailPropViewModel *_stateContext;
}

@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;

- (void)enterAwemeDetailWithIndexPath:(id)arg0;
- (id)initWithHost:(id)arg0 stateContext:(id)arg1;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (void)setStateContext:(id)arg0;
- (id)host;
- (id)stateContext;

@end
