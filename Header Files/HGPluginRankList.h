//
//     Generated by private class-dump
//

@protocol HGAwemeRankListPluginDelegate;

@interface HGPluginRankList : HGPluginBase {
    id<HGAwemeRankListPluginDelegate> _rankListPlugin;
}

@property (retain, nonatomic) id<HGAwemeRankListPluginDelegate> rankListPlugin;

- (id)rankListPlugin;
- (void)getImRankListWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)getImRankDataWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setImRankDataWithParam:(id)arg0 callback:(id /* block */)arg1 instance:(id)arg2;
- (void)setRankListPlugin:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isLogin;

@end
