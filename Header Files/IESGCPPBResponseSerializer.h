//
//     Generated by private class-dump
//

@class NSString;
@protocol IESGCPMonitor;

@interface IESGCPPBResponseSerializer : NSObject <TTBinaryResponseSerializerProtocol> {
    id<IESGCPMonitor> _monitor;
}

@property (retain, nonatomic) id<IESGCPMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 responseError:(id)arg2 resultError:(id *)arg3;
- (void).cxx_destruct;
- (id)monitor;
- (void)setMonitor:(id)arg0;

@end
