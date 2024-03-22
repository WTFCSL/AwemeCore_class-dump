//
//     Generated by private class-dump
//

@class NSMapTable;

@interface AWESearchAutoPlayManager : NSObject {
    BOOL _disableCheckActiveBeforeResign;
    NSMapTable *_autoPlayCardTable;
}

@property (retain, nonatomic) NSMapTable *autoPlayCardTable;
@property (nonatomic) BOOL disableCheckActiveBeforeResign;

+ (BOOL)shouldAutoPlayHandlerExclude;
+ (id)shareInstance;

- (void)didResignActiveWithCard:(id)arg0 withHandler:(id)arg1;
- (void)didBecomeActiveWithCard:(id)arg0 withHandler:(id)arg1;
- (id)autoPlayCardTable;
- (void)allResignActiveWithHandler:(id)arg0;
- (void)setAutoPlayCardTable:(id)arg0;
- (BOOL)disableCheckActiveBeforeResign;
- (void)setDisableCheckActiveBeforeResign:(BOOL)arg0;
- (void).cxx_destruct;
- (void)registerHandler:(id)arg0;

@end
