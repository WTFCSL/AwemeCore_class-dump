//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface HTSBootNodeGroup : NSObject <HTSBootNode> {
    BOOL _canRunned;
    NSArray *_syncList;
    NSArray *_asyncList;
}

@property (retain, nonatomic) NSArray *syncList;
@property (retain, nonatomic) NSArray *asyncList;
@property (nonatomic) BOOL canRunned;
@property (readonly) BOOL isMainThread;
@property (readonly) unsigned int qos;
@property (readonly) double delayDuration;
@property (readonly) BOOL enabled;
@property (readonly) NSString *uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)delayDuration;
- (id)initWithSyncList:(id)arg0 asyncList:(id)arg1;
- (BOOL)canRunned;
- (void)setCanRunned:(BOOL)arg0;
- (id)asyncList;
- (id)syncList;
- (void)setSyncList:(id)arg0;
- (void)setAsyncList:(id)arg0;
- (void)run;
- (BOOL)enabled;
- (void).cxx_destruct;
- (BOOL)isMainThread;
- (unsigned int)qos;

@end
