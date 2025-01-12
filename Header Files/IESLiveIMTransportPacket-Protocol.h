//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol IESLiveIMTransportPacket <IESLiveIMPacket>

@property (copy, nonatomic) NSString *globalExt;
@property (nonatomic) long long fetchType;
@property (nonatomic) long long fetchInterval;
@property (copy, nonatomic) NSString *pushServer;
@property (copy, nonatomic) NSDictionary *routeParams;

- (void)setRouteParams:(id)arg0;
- (id)routeParams;
- (id)pushServer;
- (void)setPushServer:(id)arg0;
- (id)globalExt;
- (void)setGlobalExt:(id)arg0;
- (long long)fetchType;
- (long long)fetchInterval;
- (void)setFetchInterval:(long long)arg0;
- (void)setFetchType:(long long)arg0;

@end
