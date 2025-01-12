//
//     Generated by private class-dump
//

@class NSString, IESGCPContextNode, IESGCPTrackingContextImpl, IESGCPMonitoringContextImpl;

@interface IESGCPContextImpl : NSObject <IESGCPXPlayContext, IESGCPContext> {
    IESGCPContextNode *_node;
    IESGCPContextImpl *_parentContext;
    NSString *_identifier;
    IESGCPTrackingContextImpl *_trackingContextImpl;
    IESGCPMonitoringContextImpl *_monitoringContextImpl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESGCPContextNode *node;
@property (weak, nonatomic) IESGCPContextImpl *parentContext;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) IESGCPTrackingContextImpl *trackingContextImpl;
@property (retain, nonatomic) IESGCPMonitoringContextImpl *monitoringContextImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paramsDictionary;
- (void)didSetGameCPDIContext;
- (void)addParams:(id)arg0;
- (void)removeParams:(id)arg0;
- (id)trackingContext;
- (void)clearAllParams;
- (id)trackingContextImpl;
- (id)monitoringContextImpl;
- (void)setTrackingContextImpl:(id)arg0;
- (void)setMonitoringContextImpl:(id)arg0;
- (id)node;
- (void).cxx_destruct;
- (id)identifier;
- (void)addChild:(id)arg0;
- (void)clear;
- (void)setIdentifier:(id)arg0;
- (id)parentContext;
- (void)setParentContext:(id)arg0;
- (void)setNode:(id)arg0;
- (id)monitoringContext;

@end
