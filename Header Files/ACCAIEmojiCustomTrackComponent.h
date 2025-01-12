//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCRecordFlowControlService;

@interface ACCAIEmojiCustomTrackComponent : ACCFeatureComponent <ACCRecordFlowControlServiceSubscriber> {
    id<ACCRecordFlowControlService> _flowControlService;
    long long _recordCount;
}

@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (nonatomic) long long recordCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)bindServices:(id)arg0;
- (id)imModel;
- (id)p_mutableCommonParams;
- (id)flowControlService;
- (void)flowControlServiceDidStartRecordFlow:(unsigned long long)arg0 source:(id)arg1;
- (void)setFlowControlService:(id)arg0;
- (void).cxx_destruct;
- (void)setRecordCount:(long long)arg0;
- (long long)recordCount;

@end
