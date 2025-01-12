//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_nw_connection, OS_dispatch_queue;

@interface UANWSocket : UASocket {
    unsigned int _receive_length;
    BOOL _useTLS;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL useTLS;

- (id)initWithHost:(id)arg0 port:(id)arg1;
- (void)certVerifyWithOptions:(id)arg0;
- (void)socketOccursError:(id)arg0;
- (void)connect;
- (void)writeData:(id)arg0;
- (void)disconnect;
- (void)readData;
- (void).cxx_destruct;
- (void)setConnection:(id)arg0;
- (id)connection;
- (id)queue;
- (void)dealloc;
- (void)setQueue:(id)arg0;
- (BOOL)useTLS;
- (void)setUseTLS:(BOOL)arg0;

@end
