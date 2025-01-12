//
//     Generated by private class-dump
//

@protocol AWELivePreStreamBizStatusContextDelegate;

@interface AWELivePreStreamBizStatusContext : NSObject {
    id<AWELivePreStreamBizStatusContextDelegate> _delegate;
    unsigned long long _statusOptions;
    unsigned long long _oldStatusOptions;
}

@property (nonatomic) unsigned long long statusOptions;
@property (nonatomic) unsigned long long oldStatusOptions;
@property (weak, nonatomic) id<AWELivePreStreamBizStatusContextDelegate> delegate;

- (void)updateBizStatus:(unsigned long long)arg0 open:(BOOL)arg1;
- (unsigned long long)statusOptions;
- (void)setOldStatusOptions:(unsigned long long)arg0;
- (void)setStatusOptions:(unsigned long long)arg0;
- (unsigned long long)oldStatusOptions;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
