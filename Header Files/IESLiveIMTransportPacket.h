//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveIMTransportPacket : NSObject <IESLiveIMTransportPacket> {
    id object;
    NSDictionary *extra;
    NSString *_globalExt;
    long long _fetchType;
    long long _fetchInterval;
    NSString *_pushServer;
    NSDictionary *_routeParams;
}

@property (copy, nonatomic) NSString *globalExt;
@property (nonatomic) long long fetchType;
@property (nonatomic) long long fetchInterval;
@property (copy, nonatomic) NSString *pushServer;
@property (copy, nonatomic) NSDictionary *routeParams;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) long long pid;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtra:(id)arg0;
- (void)setRouteParams:(id)arg0;
- (id)routeParams;
- (id)pushServer;
- (void)setPushServer:(id)arg0;
- (void)updateExtraWithKey:(id)arg0 value:(id)arg1;
- (id)globalExt;
- (void)setGlobalExt:(id)arg0;
- (void).cxx_destruct;
- (id)object;
- (id)extra;
- (long long)fetchType;
- (void)setObject:(id)arg0;
- (long long)fetchInterval;
- (void)setFetchInterval:(long long)arg0;
- (void)setFetchType:(long long)arg0;

@end
