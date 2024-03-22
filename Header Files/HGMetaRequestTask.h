//
//     Generated by private class-dump
//

@class NSString, HGRequestMetrics, NSURLSessionDataTask, NSNumber, NSMutableData;
@protocol HGNetworkTaskProtocol;

@interface HGMetaRequestTask : NSObject <HGMetaTaskCancelable> {
    NSNumber *_identifier;
    NSURLSessionDataTask *_task;
    NSMutableData *_mData;
    HGRequestMetrics *_metrics;
    id /* block */ _completion;
    id<HGNetworkTaskProtocol> _ttTask;
}

@property (retain, nonatomic) NSNumber *identifier;
@property (weak, nonatomic) NSURLSessionDataTask *task;
@property (retain, nonatomic) NSMutableData *mData;
@property (retain, nonatomic) HGRequestMetrics *metrics;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id<HGNetworkTaskProtocol> ttTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMData:(id)arg0;
- (void)setTtTask:(id)arg0;
- (id)ttTask;
- (id)metrics;
- (id /* block */)completion;
- (void)setMetrics:(id)arg0;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)identifier;
- (void)setTask:(id)arg0;
- (void)cancel;
- (id)task;
- (void)setIdentifier:(id)arg0;
- (id)mData;

@end
