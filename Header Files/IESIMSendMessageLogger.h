//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;
@protocol IESLCConnectManagerProtocol;

@interface IESIMSendMessageLogger : NSObject <IESIMSendMessageLoggerProtocol> {
    id<IESLCConnectManagerProtocol> _lcConnectManager;
    NSMutableDictionary *_metricsDict;
}

@property (retain, nonatomic) NSMutableDictionary *metricsDict;
@property (retain, nonatomic) id<IESLCConnectManagerProtocol> lcConnectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)metricsDict;
- (void)setLcConnectManager:(id)arg0;
- (id)lcConnectManager;
- (void)recordStartSendMessage:(id)arg0 inConversation:(id)arg1 timestamp:(double)arg2 notSaveToDB:(BOOL)arg3;
- (id)getMetricsModelOfMessage:(id)arg0;
- (void)updateMetricsModel:(id)arg0 ofMessage:(id)arg1;
- (void)recordFinishSendMessageWithResponse:(id)arg0;
- (BOOL)p_checkMessageValid:(id)arg0;
- (void)setMetricsDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clear;

@end
