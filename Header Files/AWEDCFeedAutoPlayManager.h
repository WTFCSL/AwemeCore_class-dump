//
//     Generated by private class-dump
//

@class NSMapTable;

@interface AWEDCFeedAutoPlayManager : NSObject {
    NSMapTable *_autoPlayCardTable;
}

@property (retain, nonatomic) NSMapTable *autoPlayCardTable;

+ (id)shareInstance;

- (void)didResignActiveWithCard:(id)arg0 withHandler:(id)arg1;
- (void)allResignNoActiveWithCard:(id)arg0 withHandler:(id)arg1;
- (void)didBecomeActiveWithCard:(id)arg0 withHandler:(id)arg1;
- (id)autoPlayCardTable;
- (void)allResignActiveWithHandler:(id)arg0;
- (void)setAutoPlayCardTable:(id)arg0;
- (void).cxx_destruct;
- (void)registerHandler:(id)arg0;

@end
