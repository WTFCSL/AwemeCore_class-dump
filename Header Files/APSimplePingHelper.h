//
//     Generated by private class-dump
//

@class ASSSimplePing, NSString;

@interface APSimplePingHelper : NSObject <ASSSimplePingDelegate> {
    ASSSimplePing *_simplePing;
    id _target;
    SEL _sel;
}

@property (retain, nonatomic) ASSSimplePing *simplePing;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL sel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ping:(id)arg0 target:(id)arg1 sel:(SEL)arg2;

- (void)setSel:(SEL)arg0;
- (id)initWithAddress:(id)arg0 target:(id)arg1 sel:(SEL)arg2;
- (void)setSimplePing:(id)arg0;
- (id)simplePing;
- (void)killPing;
- (void)failPing:(id)arg0;
- (void)successPing;
- (void)simplePing:(id)arg0 didFailToSendPacket:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (SEL)sel;
- (void)simplePing:(id)arg0 didFailWithError:(id)arg1;
- (void)setTarget:(id)arg0;
- (id)target;
- (void)endTime;
- (void)simplePing:(id)arg0 didStartWithAddress:(id)arg1;
- (void)simplePing:(id)arg0 didReceivePingResponsePacket:(id)arg1 sequenceNumber:(unsigned short)arg2;
- (void)go;

@end
