//
//     Generated by private class-dump
//

@class NSArray, NSTimer, NSString, LEBAsyncUdpSocket, NSObject;
@protocol OS_dispatch_queue, LBLelinkSearchDelegate;

@interface LBLelinkSearch : NSObject <LEBAsyncUdpSocketDelegate> {
    BOOL _searching;
    id<LBLelinkSearchDelegate> _delegate;
    double _internal;
    LEBAsyncUdpSocket *_udpSocket;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_searchLelinkPorts;
    NSObject<OS_dispatch_queue> *_searchQueue;
    NSTimer *_searchTimer;
}

@property (retain, nonatomic) LEBAsyncUdpSocket *udpSocket;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (retain, nonatomic) NSArray *searchLelinkPorts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (retain, nonatomic) NSTimer *searchTimer;
@property (weak, nonatomic) id<LBLelinkSearchDelegate> delegate;
@property (nonatomic) double internal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)udpSocket:(id)arg0 didSendDataWithTag:(long long)arg1;
- (void)udpSocket:(id)arg0 didNotSendDataWithTag:(long long)arg1 dueToError:(id)arg2;
- (void)udpSocket:(id)arg0 didReceiveData:(id)arg1 fromAddress:(id)arg2 withFilterContext:(id)arg3;
- (void)udpSocketDidClose:(id)arg0 withError:(id)arg1;
- (id)searchTimer;
- (void)setSearchTimer:(id)arg0;
- (id)searchLelinkPorts;
- (id)udpSocket;
- (id)searchAddress;
- (void)JudgeDeviceWithData:(id)arg0;
- (void)setUdpSocket:(id)arg0;
- (void)setSearchLelinkPorts:(id)arg0;
- (void)setInternal:(double)arg0;
- (id)init;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (void)stop;
- (double)internal;
- (id)delegate;
- (void)search;
- (void)start;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setQueue:(id)arg0;
- (void)setSearching:(BOOL)arg0;
- (void)endSearch;
- (id)searchQueue;
- (void)setSearchQueue:(id)arg0;
- (id)searchBody;

@end
