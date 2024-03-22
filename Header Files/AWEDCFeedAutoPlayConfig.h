//
//     Generated by private class-dump
//

@interface AWEDCFeedAutoPlayConfig : AWEDCFeedBaseConfig {
    BOOL _enable;
    unsigned long long _style;
    id /* block */ _safeContentRectBlock;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ safeContentRectBlock;

- (void)setupDefaultConfig;
- (void)setSafeContentRectBlock:(id /* block */)arg0;
- (id /* block */)safeContentRectBlock;
- (BOOL)enable;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;
- (void)setStyle:(unsigned long long)arg0;

@end