//
//     Generated by private class-dump
//

@class NSDictionary, NSString;
@protocol PTYTaskDataDelegate;

@interface PTYTaskData : NSObject <IESLiveTaskData, BDPClientAITaskData> {
    NSDictionary *_params;
    id<PTYTaskDataDelegate> _delegate;
}

@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *params;
@property (weak, nonatomic) id<PTYTaskDataDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)params;
- (void)setDelegate:(id)arg0;
- (void)setParams:(id)arg0;

@end