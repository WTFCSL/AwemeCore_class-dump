//
//     Generated by private class-dump
//

@class NSString, HGUniqueID;

@interface AWEHGShareTask : NSObject {
    HGUniqueID *_uniqueID;
    NSString *_channel;
    id /* block */ _completion;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithUniqueID:(id)arg0 channel:(id)arg1 completion:(id /* block */)arg2;
- (void)finishWith:(long long)arg0 error:(id)arg1 info:(id)arg2;
- (id)channel;
- (id /* block */)completion;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setChannel:(id)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (void)setUniqueID:(id)arg0;
- (BOOL)finished;

@end
