//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEDetailEnterAwemeDetailHost;

@interface AWEDetailEnterAwemeDetailServiceImpl : NSObject <AWEDetailEnterAwemeDetailService> {
    id<AWEDetailEnterAwemeDetailHost> _host;
}

@property (weak, nonatomic) id<AWEDetailEnterAwemeDetailHost> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterAwemeDetailWithIndexPath:(id)arg0;
- (id)enterAwemeDetailTransitionStartViewWithIndexPath:(id)arg0 collectionView:(id)arg1 itemOffset:(long long)arg2;
- (void)setHost:(id)arg0;
- (void).cxx_destruct;
- (id)host;

@end
