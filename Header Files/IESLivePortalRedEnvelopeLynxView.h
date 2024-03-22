//
//     Generated by private class-dump
//

@class IESLiveReceivePortalModel, IESLivePortalStore, NSString;
@protocol IESLivePortalActions;

@interface IESLivePortalRedEnvelopeLynxView : IESLivePortalLynxView <IESLivePluginLayoutViewAdapter> {
    IESLiveReceivePortalModel *_redEnvelopeInfo;
    IESLivePortalStore *_store;
    id<IESLivePortalActions> _portalActionCreator;
    long long _count;
}

@property (retain, nonatomic) id<IESLivePortalActions> portalActionCreator;
@property (nonatomic) long long count;
@property (retain, nonatomic) IESLiveReceivePortalModel *redEnvelopeInfo;
@property (retain, nonatomic) IESLivePortalStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redEnvelopeInfo;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)arg0;
- (void)setRedEnvelopeInfo:(id)arg0;
- (void)updateRedEnvelopeInfo:(id)arg0 total:(long long)arg1;
- (void)updateStatus:(long long)arg0 countDown:(long long)arg1 badgeNumber:(long long)arg2;
- (void)tr_receivedRedPacketReadyEvent;
- (id)portalActionCreator;
- (void)setPortalActionCreator:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (id)store;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStore:(id)arg0;
- (long long)count;
- (id)viewType;

@end
